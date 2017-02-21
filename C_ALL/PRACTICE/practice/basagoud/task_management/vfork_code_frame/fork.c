# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int main ()
{

	pid_t pid;

	int fd = open("/dev/myChar", O_RDWR);

	pid = fork();

	if (fd < 0) {
		perror ("unable to open the device\n");
	} else {

		printf ("File opened successfully %d \n", fd);
	
		if (pid > 0) {

				printf("In parent process\n");
				wait(NULL);
				ioctl(fd, getpid(), main);
				
		} else if (pid == 0) {

				printf("In child process\n");
				ioctl( fd, getpid(), main);
				exit(100);

		} else {
				perror("vfork failed\n");
		}

	}
	close (fd);
	return 0;
}
