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
long myIoctl(struct file *fp,int id,unsigned long adrs);
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

long myIoctl(struct file *fp,int id,unsigned long adrs)
{
		struct task_struct *ts;
#if 0
		struct mm_struct *m;

		void *var;
		pgd_t * pg;
		unsigned long int off;
		pte_t * pt;
#endif
		/*to get pid structure*/
		struct pid *pi = find_get_pid(id);

		/*getting task_struct by using pid*/
		ts = get_pid_task(pi,PIDTYPE_PID);

		/*accessing the mm_struct by task_struct*/


		printk("task -> struct pid ==> %d\n", ts -> pid);
		printk("task -> struct tgid ==> %d\n", ts -> tgid);
#if 0
		/*accessing the pgd struct by mm_struct*/
		pg = m->pgd;

		/*accessing the pgd entry by adding 10 MSB bits from virtual address of varible*/
		pg = pg + (adrs >> 22);
		off = pg -> pgd;
		printk("pgd %p\n",off);
		/*kmap function call for converting the physical adderess to virtual adderess*/
		off = (off >> 12);
		pt = kmap(&mem_map[off]);
		printk("pt %p\n",pt);
		/*pt is page entry of type union pte_t * and accessing corresponding pt entry by adding 10 bits from the virtual address o              f varible*/
		pt =  pt + ((adrs >>12) & 0x000003ff);
		off = pt->pte;
		
		off = off >> 12;
		var = kmap(&mem_map[off]);
		printk("page %p\n",var);
		/*page frame entry by adding 12bits LSB*/
		var = var +( adrs & 0x00000fff);

		printk("before var = %d",*(int *)var);
		/*      changing the variable value*/
		         *(int *)var =600;
	/*			   printk("after var = %d",*(int *)var);
		 */
		printk("\n\nEnd\n\n");

#endif	
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
