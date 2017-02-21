/** System Includes **/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/slab.h>
#include <asm/uaccess.h>
#include <linux/mmzone.h>
#include <asm/highmem.h>
#include <linux/mm.h>


MODULE_LICENSE("Dual BSD/GPL");

/** Constants **/
#define FIRST_MINOR 10
#define NR_DEVS 1		//Number of devise numbers

//Function Declaration for syscall definitions
int myOpen(struct inode *inode, struct file *filep);
int myRelease(struct inode *in, struct file *fp);
long myIoctl(struct file *, unsigned int, unsigned long);
//Initialization routines
static int myInit(void);
static void myExit(void);

struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = myOpen,
	.release = myRelease,
	.unlocked_ioctl = myIoctl
};

/* Global variables*/
char *devname;
int majNo;
static dev_t mydev;
struct cdev *my_cdev;

/*passing command line paramerers*/
module_param(devname, charp, 0000);

static struct class *mychar_class;
static struct device *mychar_device;

/*user defined function*/
int myOpen(struct inode *inode, struct file *filep)
{
	printk(KERN_INFO "Open successful\n");
	return 0;
}

long myIoctl(struct file * filep, unsigned int pid, unsigned long  usr_va)
{

		struct task_struct * task_struct = current;
		struct mm_struct * mm_struct = task_struct -> mm;

		pgd_t * pgd_addr =  mm_struct -> pgd;
		pgd_t * pgd_off_va = pgd_addr + (usr_va >> 22);
		pte_t * pte_va = NULL;
		pte_t * pte_off_va = NULL;
		int * page_vaddr = NULL;
		int * page_off_vaddr = NULL;
		printk("\n");
		printk("pgd base address ==> %08x\n", (unsigned) (pgd_addr + ((usr_va ) >> 22)));

		/*To get the virtual address of PGD index*/
		pgd_off_va = (pgd_addr + ((usr_va) >> 22)) ;
		printk("pgd  content ==> %08x\n", (unsigned)(pgd_off_va -> pgd));
		
		printk("pgd offset virtual address ==> %08x\n", (unsigned)((pgd_off_va -> pgd) >> 12));

		 /*To get the virtual address of the page table entry*/
	
		if((((pgd_off_va -> pgd) >> 12 ) << 12) > (high_memory - PAGE_OFFSET)) {
				pte_va = kmap (& mem_map[(pgd_off_va -> pgd ) >> 12]);
		} else {
				pte_va = (( (pgd_off_va -> pgd ) >> 12 ) << 12) + PAGE_OFFSET;
		}

		printk(" PT virtual address ==> %08x \n", (unsigned) pte_va);

		/*To get page table index virtual address */
		pte_off_va = (pte_va + ((usr_va << 10) >> 22));

		printk("PTE offset virtual address ==> %08x\n", (unsigned)pte_off_va);

		/*To get the vitual address of the page frame */
		
		if((((pte_off_va -> pte) >> 12 ) << 12) > (high_memory - PAGE_OFFSET)) {
				page_vaddr = kmap(& mem_map[ (pte_off_va -> pte) >> 12 ]);
		} else {
				page_vaddr = (( (pte_off_va -> pte ) >> 12 ) << 12 )+ PAGE_OFFSET;
		}
		
		printk("page virtual  address ==> %08x\n",(unsigned) page_vaddr);


		/*To move to the offset of variable*/
		 page_off_vaddr = ((void *)page_vaddr + ( (usr_va << 20 ) >> 20));
		 	
		return 0;
}

/*user defined function for closing the device*/
int myRelease(struct inode *in, struct file *filep)
{
		printk(KERN_INFO "File released\n");
		return 0;
}
/*starting function for the module*/
static int __init myInit(void)
{
	int ret = -ENODEV;
	int status;
	printk(KERN_INFO "Initializing character Device\n");


	status = alloc_chrdev_region(&mydev, FIRST_MINOR, NR_DEVS, devname);/*allocating major &minor number*/
	if (status < 0) {
		printk(KERN_NOTICE "Device numbers allocation failed: %d\n",
				status);

		goto err;
	}
	printk(KERN_INFO "Major number allocated = %d          %d\n",
			MAJOR(mydev), mydev);
	printk(KERN_INFO "Minor number allocated = %d          %d\n",
			MINOR(mydev), mydev);
	my_cdev = cdev_alloc();
	if (my_cdev == NULL) {
		printk(KERN_ERR "cdev_alloc failed\n");
		goto err_cdev_alloc;
	}
	cdev_init(my_cdev, &fops);
	my_cdev->owner = THIS_MODULE;

	status = cdev_add(my_cdev, mydev, NR_DEVS);
	if (status) {
		printk(KERN_ERR "cdev_add failed\n");
		goto err_cdev_add;
	}


	mychar_class = class_create(THIS_MODULE, devname);
	if (IS_ERR(mychar_class)) {
		printk(KERN_ERR "class_create() failed\n");
		goto err_class_create;
	}
	mychar_device =
		device_create(mychar_class, NULL, mydev, NULL, devname);
	if (IS_ERR(mychar_device)) {
		printk(KERN_ERR "device_create() failed\n");
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
	printk(KERN_INFO "Exiting the character Driver\n");

	device_destroy(mychar_class, mydev);
	class_destroy(mychar_class);
	cdev_del(my_cdev);
	unregister_chrdev_region(mydev, NR_DEVS);

	return;
}

module_init(myInit);
module_exit(myExit);
