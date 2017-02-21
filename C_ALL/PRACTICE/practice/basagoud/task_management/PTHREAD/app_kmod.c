# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/syscall.h>


int a =100;

void * thread_function(void * fd)
{

		printf("\npid of the child thread ==> %d\n", getpid());			
		printf("In child task PID ==> %d\n", syscall(SYS_gettid));
		ioctl(fd, getpid(), &a);
//getchar ();
		return &a;
}
int main ()
{
	pthread_t th_id;

	int status;

	int * retval;
	int fd = open("/dev/myChar", O_RDWR);

	printf("Main pid ==> %d\n", getpid());
	printf("Task tid -==> %d\n", syscall(SYS_gettid));
	if (fd < 0){
		perror ("unable to open the device\n");
	}	else{
			printf ("File opened successfully %d \n", fd);
			ioctl(fd, getpid(), &a);	

			status = pthread_create(&th_id, NULL, thread_function, &fd);

			if(status != 0) {
					printf("Thread creation error : %s\n", strerror(status));
			}
			
			pthread_detach(th_id);

			ioctl(fd, getpid(), &a);
			status = pthread_join(th_id, (void**)retval);


			if(status == 0) {
					printf("Thread join failed:%s\n",strerror(status));
			} else {
					printf("Thread joined\n");
			}
//			getchar();
			pthread_exit(NULL);

	}

	close (fd);
	return 0;
}
