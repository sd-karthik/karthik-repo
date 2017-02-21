# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
int a = 10;
int main ()
{

	pid_t pid;
	int status;
	int fd = open("/dev/myChar", O_RDWR);

	ioctl(fd,getpid(), &a);
	pid = vfork();

	if (fd < 0) {
		perror ("unable to open the device\n");
	} else {

		printf ("File opened successfully %d \n", fd);
	
		if (pid > 0) {

				printf("In parent process\n");
		//		wait(NULL);
				ioctl(fd, getpid(), &a);
				
		} else if (pid == 0) {

				printf("In child process\n");
				ioctl( fd, getpid(), &a);
				
				status = execlp("a.out", "ls");
				printf("%d\n", status);
				printf("Hello\n");
				ioctl(fd, getpid(), &a);
				exit(100);
		} else {
				perror("vfork failed\n");
		}

	}
	close (fd);
	return 0;
}
