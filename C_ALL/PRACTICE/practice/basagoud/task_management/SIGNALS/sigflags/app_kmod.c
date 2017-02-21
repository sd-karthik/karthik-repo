# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/syscall.h>
# include <signal.h>
# include <errno.h>


void usr1_handler(int sig_num)
{
		printf("Parent (%d) got the SIGUSR1\n", getpid());

		return ;
}
int a = 123;
int main ()
{
		int status;
		
		int pid;
		int role = -1;

		int fd = open("/dev/myChar", O_RDWR);

		if (fd < 0){
				perror ("unable to open the device\n");
		}	else {
				printf ("File opened successfully %d \n", fd);
				pid = fork();
				if(pid > 0) {
						printf("Parent process pid ==> %d\n", getpid());


						signal(SIGUSR1, usr1_handler);

						role = 0;
						pause();

						printf("\n Parent: Awaiting child exit \n");

						pid = wait( &status );

						printf("In parent\n");
						ioctl(fd, 1, &a);	
				}else if(pid == 0) {
						printf("Child process pid ==> %d\n", getpid());
						role = 1;

						sleep(1);

						printf("Child: %d Sending signal to parent process %d\n", getpid(), getppid());

						kill ( getppid(), SIGUSR1);

						sleep(2);
				}else {
						printf("fork failed %d\n", errno);
				}

	}

//	getchar();

	close (fd);
	return 0;
}
