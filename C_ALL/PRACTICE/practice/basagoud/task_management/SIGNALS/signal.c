 #include <stdio.h>
 #include <sys/types.h>
 #include <signal.h>
 #include <unistd.h>
 # include <fcntl.h>

void catch_ctlc(int sig_num)
{
		printf("SIGNAL number ==> %d\n", sig_num);
		printf("Caught control-C\n");
		
		fflush( stdout );
		return ;
}

int main()
{
		signal(SIGINT, catch_ctlc);
		int fd = open("/dev/myChar", O_RDWR);
		int pid = fork();
		if(pid > 0) {
				printf(" parent process %d\n", getpid());
				ioctl(fd, getpid(), 0);
		}else if(pid ==  0) {
				printf("child process\n");
				ioctl(fd, getpid(), 0);
		}else {
				printf("error fork()");
		}
		printf("Do ahead, make my day\n");

		pause();
		return 0;
}
