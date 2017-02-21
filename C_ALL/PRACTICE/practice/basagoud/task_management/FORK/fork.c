# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
int a = 100;
int main ()
{

	pid_t pid;

	int fd = open("/dev/myChar", O_RDWR);

	printf("Hello\n");
	wait(NULL);
	ioctl(fd, getpid(), &a);

	if (fd < 0) {
		perror ("unable to open the device\n");
	} else {

	
		pid = fork();
		if (pid > 0) {

				wait(NULL);
				printf("In parent process\n");
				printf("ppid= > %d\n", getpid());
				ioctl(fd, getpid(), &a);
				
		} else if (pid == 0) {

				printf("In child process\n");
				ioctl(fd, getpid(), &a);
				printf("ppid= > %d\n", getpid());
				execlp("./app","./app",(char *)NULL);
		} else {
				perror("vfork failed\n");
		}

		printf ("File opened successfully %d \n", fd);
	}
	close (fd);
	return 0;
}
