#include <stdio.h>
#include <fcntl.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <signal.h>

int *th_fun(int fd)
{

	ioctl(fd, syscall(SYS_gettid), 10);

	return NULL;
}

int main( void )
{
	int fd;
	pthread_t th_id;

	fd = open("/dev/myChar", O_RDWR);

	if (fd < 0)
		perror("Unable to open the Device");
	else
		printf("File Opened Successfully %d\n", fd);

	ioctl(fd, getpid(), 10);	

	if( !(pthread_create(&th_id, NULL, th_fun, fd)))
	{
		printf("thread creation failed\n");
	}
	getchar();
	close(fd);

	return 0;
}
