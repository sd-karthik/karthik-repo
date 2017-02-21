# include <stdio.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <unistd.h>
# include <signal.h>
# include <errno.h>

void usr1_handler(int sig_num)
{
		printf("Parent (%d) got the SIGUSR1\n", getpid());
		
		return ;
}

int main()
{
		int fd;
		pid_t pid;
		int status;
		int role = -1;
		pid = fork();
		if(pid > 0) {
				printf("Parent process pid ==> %d\n", getpid());


				signal(SIGUSR1, usr1_handler);

				role = 0;
				pause();

				printf("\n Parent: Awaiting child exit \n");

				pid = wait( &status );

				printf("In parent\n");
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

		 
		printf("%s: Exiting ...\n", ((role == 0) ? "Parent " : "Child"));
		return 0;
}
