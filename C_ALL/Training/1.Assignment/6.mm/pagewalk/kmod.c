#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/highmem.h>

MODULE_LICENSE("Dual BSD/GPL");

#define FIRST_MINOR 10
#define NR_DEVS 1		//Number of device numbers

//Function Declarations for syscall definitions
int myOpen(struct inode *inode, struct file *filep);
int myRelease(struct inode *in, struct file *fp);


/*Initialization routines*/
static int myInit(void);
static void myExit(void);
long myUnlocked_ioctl(struct file *, unsigned int, unsigned long);

/* Initialising the functionalities */
struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = myOpen,
	.release = myRelease,
	.unlocked_ioctl = myUnlocked_ioctl
};

struct task_struct *ptr;
char *devname;
int majNo;
static dev_t mydev;
struct cdev *my_cdev;

// to pass command line arguments devname=myChar
module_param(devname, charp, 0000);

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
	unsigned long int l_val;
	int l;
	struct task_struct *ptr = NULL;
	unsigned long int *pt_addr = NULL;
	unsigned long int *pt_addr2 = NULL;
	unsigned long int var;
	struct page *my_page;
	pgd_t *my_pgd;

	ptr = find_task_by_vpid(pid);
	my_pgd = ptr ->mm -> pgd;
	l_val = a >> 22;
	var = (unsigned int)((my_pgd + l_val) -> pgd);
	pt_addr = (unsigned long int *)kmap (&mem_map[var >> 12]);

	l_val = (a & 0x3ff000) >> 12;
	var = (unsigned int)(*(pt_addr + l_val));

	pt_addr2 = (unsigned long int *)kmap (&mem_map[var >> 12]);
	l_val =  (a & 0x00000fff) / 4;
	/*  while(1) {
		if(*(pt_addr2 + l) == 10) {
	 *(pt_addr2 + l) = 100;
	 break;
	 }
	 l++;
	 }
	 */  *(pt_addr2 + l_val) = 20;
	return 0;
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

