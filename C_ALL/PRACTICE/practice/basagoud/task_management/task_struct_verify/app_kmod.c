# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/syscall.h>



void * thread_function(void * p[2])
{
/*
		printf("\npid of the child thread ==> %d\n", getpid());			
		printf("In child task PID ==> %d\n", syscall(SYS_gettid));
 */
		printf("%d\n", (int )p[0]);
		printf("%08x\n", (int )p[1]);
		ioctl((int )p[0], getpid(), (int ) p [1]);
		printf("In child process\n");
		printf("PID ==> %d\n", syscall(SYS_gettid));
		printf("TGID ==> %d\n", getpid());
		printf("P->TGID ==> %d\n", getppid());
		getchar ();
	
		return NULL;
}
int a =100;
int main ()
{
	pthread_t th_id;

	int status;
	int array[2];

	int fd = open("/dev/myChar", O_RDWR);

	if (fd < 0){
		perror ("unable to open the device\n");
	}	else{
			printf ("File opened successfully %d \n", fd);
			ioctl(fd, getpid(), &a);	

			array[0] = fd;
			array[1] = (int) main;
			printf("Main addresss ==> %08x\n", (unsigned int)main);
			status = pthread_create(&th_id, NULL, thread_function, array);

			if(status != 0) {
					printf("Thread creation error : %s\n", strerror(status));
			}
			printf("PID ==> %d\n", syscall(SYS_gettid));
			printf("TGID ==> %d\n", getpid());
			printf("P->TGID ==> %d\n", getppid());
			getchar();
			pthread_exit(NULL);

	}

//	getchar();

	close (fd);
	return 0;
}
