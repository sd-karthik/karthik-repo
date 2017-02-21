# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/syscall.h>



void * thread_function(void * p)
{

		printf("\npid of the child thread ==> %d\n", getpid());			
		printf("In child task PID ==> %d\n", syscall(SYS_gettid));
		getchar ();
		return NULL;
}
int a =100;
int main ()
{
	pthread_t th_id;

	int status;

	int fd = open("/dev/myChar", O_RDWR);

	if (fd < 0){
		perror ("unable to open the device\n");
	}	else{
			printf ("File opened successfully %d \n", fd);
			ioctl(fd, getpid(), &a);	

			status = pthread_create(&th_id, NULL, thread_function, NULL);

			if(status != 0) {
					printf("Thread creation error : %s\n", strerror(status));
			}
			printf("TID ==> %d\n", getpid());
			printf("PID ==> %d\n", syscall(SYS_gettid));
			printf("PPID ==> %d\n", getppid());
			getchar();
			pthread_exit(NULL);

	}

//	getchar();

	close (fd);
	return 0;
}
