/*
* System Includes
*
*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>

/* Flag Permissions */
#define VM_READ 0x00000001
#define VM_WRITE 0x00000002
#define VM_EXEC   0x00000004

MODULE_LICENSE("Dual BSD/GPL");

/* Constants */
#define FIRST_MINOR 10
#define NR_DEVS 1		//Number of device numbers

//Function Declarations for syscall definitions
int myOpen(struct inode *inode, struct file *filep);
int myRelease(struct inode *in, struct file *fp);
long myUnlocked_ioctl(struct file *, unsigned int, unsigned long);
long p_offset(long int);
void path_print(struct dentry *den);

//Initialization routines
static int myInit(void);
static void myExit(void);

struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = myOpen,
	.release = myRelease,
	.unlocked_ioctl = myUnlocked_ioctl
};

/* Global Variables */
struct task_struct *ptr;
char *devname;
int majNo;
static dev_t mydev;
struct cdev *my_cdev;

module_param(devname, charp, 0000);// to pass command line arguments devname=myChar

static struct class *mychar_class;
static struct device *mychar_device;

int myOpen(struct inode *inode, struct file *filep)
{
	printk(KERN_INFO "Open successful\n");
	return 0;
}


int myRelease(struct inode *in, struct file *fp)
{
	printk(KERN_INFO "File released\n");
	return 0;
}

long myUnlocked_ioctl(struct file *fp, unsigned int pid, unsigned long a)
{
	struct task_struct *ptr = NULL;
	struct mm_struct *m_ptr = NULL;
	struct vm_area_struct *vm_ptr = NULL;
	struct file *s_ptr = NULL;
	struct dentry *d_en = NULL;

	ptr = find_task_by_vpid(pid);
	m_ptr = ptr-> mm;
	vm_ptr = m_ptr-> mmap;

	while(vm_ptr != NULL)
	{
		s_ptr = vm_ptr -> vm_file;
		
		printk(KERN_CONT "%.08lx-%.08lx ", vm_ptr->vm_start, vm_ptr->vm_end);

		printk(KERN_CONT " %c", ((vm_ptr-> vm_flags) & VM_READ)? 'r': '-');
		printk(KERN_CONT "%c", ((vm_ptr-> vm_flags) & VM_WRITE)? 'w': '-');
		printk(KERN_CONT "%cp ", ((vm_ptr-> vm_flags) & VM_EXEC)? 'x': '-');
		printk(KERN_CONT " %.08lx", p_offset(vm_ptr->vm_pgoff));
	
		if(s_ptr !=NULL)
		{
			d_en = s_ptr->f_path.dentry;
			printk(KERN_CONT " %lu", ((s_ptr -> f_inode) -> i_ino));
			path_print(d_en);
		}		
		else
			printk(KERN_CONT " 0");

			printk("\n");
			vm_ptr = vm_ptr-> vm_next;
	}
/*//
	if (scull_major) {
    	dev = MKDEV(scull_major, scull_minor);
    	result = register_chrdev_region(dev, scull_nr_devs, "scull");
	} else {
    	result = alloc_chrdev_region(&dev, scull_minor, scull_nr_devs,
            "scull");
    scull_major = MAJOR(dev);
	}
	if (result < 0) {
 	   printk(KERN_WARNING "scull: can't get major %d\n", scull_major);
    return result;
	}
*/	return 0;
}

void path_print(struct dentry *den)
{
	if(*(den->d_name.name) != '/')
	{
		path_print(den->d_parent);
		printk(KERN_CONT "/%s", den->d_name.name);
	}
}
long p_offset(long int off_val)
{
	long int mask = 0xffff0000;
	
	return (off_val & mask) ? 0 : (off_val << 12);
}


static int __init myInit(void)
{
	int ret = -ENODEV;
	int status;

	printk(KERN_INFO "Initializing character device\n");

	status = alloc_chrdev_region(&mydev, FIRST_MINOR, NR_DEVS, devname);
	if(status < 0) {
		printk(KERN_INFO "Device number allocation failed: %d\n", status);
		goto err;
	}

	printk(KERN_INFO "Major number allocated = %d\n", MAJOR(mydev));
	my_cdev = cdev_alloc();
	if(my_cdev == NULL) {
		printk(KERN_INFO "cdev_alloc failed \n");
		goto err_cdev_alloc;
	}

	cdev_init(my_cdev, &fops);
	my_cdev -> owner = THIS_MODULE;

	status = cdev_add (my_cdev, mydev, NR_DEVS);
	if(status) {
		printk(KERN_ERR "cdev_add failed \n");
		goto err_cdev_add;
	}

	mychar_class = class_create(THIS_MODULE, devname);
	if(IS_ERR(mychar_device)) {
		printk(KERN_ERR "class_create() failed \n");
		goto err_class_create;
	}

	mychar_device = device_create(mychar_class, NULL, mydev, NULL, devname);
	if(IS_ERR(mychar_device)) {
		printk(KERN_ERR "device_create() failed \n");
		goto err_device_create;


	}

	return 0;

err_device_create:
	class_destroy(mychar_class);

err_class_create:
	cdev_del(my_cdev);

err_cdev_add:
	kfree(my_cdev);

err_cdev_alloc:
	unregister_chrdev_region(mydev, NR_DEVS);

err:
	return ret;

}

static void myExit(void)
{
	printk(KERN_INFO "Exiting the character driver \n");

	device_destroy(mychar_class, mydev);
	class_destroy(mychar_class);
	cdev_del(my_cdev);
	unregister_chrdev_region(mydev, NR_DEVS);

	return;
}

module_init(myInit);
module_exit(myExit);

