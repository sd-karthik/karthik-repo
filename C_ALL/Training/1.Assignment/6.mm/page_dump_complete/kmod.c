#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/highmem.h>
//#include <asm/pgtable_64_types.h>//pte_t

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
	int i, j;
	struct task_struct *ptr = NULL;
	unsigned long kern_add;
	unsigned long phy_pgd;
	unsigned long *virtual_pte = NULL;
	unsigned long *virt_actual = NULL;
	pgd_t *pgd_p = NULL;
	pte_t *pte_p = NULL;

	ptr = find_task_by_vpid(pid);
	pgd_p = ptr->mm->pgd;

	printk(KERN_CONT "Ioctl Function Invoked\n");
	printk(KERN_CONT "PID := %d\n", pid);
	printk(KERN_CONT "Task_Struct_PID := %d\n", ptr->pid);
	printk( "<--------------------------------------->\n");
	printk(KERN_CONT "\t\t\tUSER SPACE\n");

	for (i = 0; i < 1024; i++) {
		if (i == 768)
			printk(KERN_CONT "\t\t\t KERNEL SPACE\n");

		if (((pgd_p + i) -> pgd) != 0x0) {
			phy_pgd = (unsigned long) ((pgd_p+i)->pgd ) ;			

			printk(KERN_CONT "[%d] PGD = %x\t kmap = %x\t", i,(unsigned int) phy_pgd ,(unsigned int)(kern_add));

			if (i < 768) {
				printk(KERN_CONT " %x\n",(unsigned int) kmap(&mem_map[phy_pgd >> 12] ));
				virtual_pte = (unsigned long *) kmap(&mem_map[phy_pgd >> 12]);
				printk(KERN_CONT "------------------\n");

				for(j = 0; j <1024; j++) {
					if(*(virtual_pte+j) != 0x0) {
						pte_p = virtual_pte->pte;
						virt_actual = (unsigned long *) (kmap(&mem_map[pte_p >> 12]));

						printk(KERN_CONT " PTE(phy): %x\t",(unsigned int)*(virtual_pte+j));
						printk(KERN_CONT " ACTUAL(virt): %x\t",(unsigned int)virt_actual);
						printk(KERN_CONT " ACTUAL(phy): %x\n",(unsigned int)*(virt_actual+j));
					}
				}
				printk(KERN_CONT "------------------\n");
			}
			else if ( i >= 768){
				printk(KERN_CONT "kernel: %x\n",(unsigned int) kmap(&mem_map[phy_pgd >> 12]));
			}
		}
	}
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

