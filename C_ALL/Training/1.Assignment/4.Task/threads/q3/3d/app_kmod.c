/* Verify from Kernel space that both TGL and thread
 *  share in same instance of the virtual address space 
*/

#include<stdio.h>
#include<fcntl.h>
#include<pthread.h>
#include<sys/syscall.h>
#include<unistd.h>

/* thread function*/
void *t_fun(void *p)
{

	printf("IOCTL in thread \n");
	ioctl(*((int *)p), syscall(SYS_gettid), 10);
	
	return NULL;
}

int main()
{
	int fd;
	int err;
	pthread_t tid;

	fd = open("/dev/myChar",O_RDWR);

	if(fd < 0)
		perror("unable to open the device ");
	else
		printf("File opened successfully %d\n",fd);

	
	err = pthread_create(&tid, NULL, t_fun, &fd);
	if(err != 0)
		printf("pthread_create failed : %d", strerror(err));
	else
		printf("Thread created suceessfully \n");
	
	ioctl(fd, syscall(SYS_gettid), 10);
	getchar();

	close(fd);
	pthread_exit(NULL);	


	return 0;
}
