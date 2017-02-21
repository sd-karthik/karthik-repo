# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/types.h>
# include <sys/syscall.h>


int a =100;
int main ()
{

	pid_t pid;

	printf("PID ==> %d\n", getpid());

	int fd = open("/dev/myChar", O_RDWR);

	if (fd < 0){
		perror ("unable to open the device\n");
	}	else{
	//		printf ("File opened successfully %d \n", fd);
			ioctl(fd, getpid(), &a);	

			pid = fork();
			if(pid > 0) {
					wait(NULL);
			//		printf("a in parent ==> %d\n", a);
					ioctl(fd, 0, &a);
			} else if(pid == 0) {
			//		printf("a in parent ==> %d\n", a);
					ioctl(fd, 1, &a);
			//		pid = fork();
/*					if(pid > 0) {
							wait(NULL);
							ioctl(fd, getpid(), &a);
					} else if(pid ==0 ){
							ioctl (fd, getpid(), &a);
					} else {
							printf("Error\n");
					}
			} else {
					printf("Error\n");*/
			}
		//	getchar();
	}
	close (fd);
	return 0;
}
