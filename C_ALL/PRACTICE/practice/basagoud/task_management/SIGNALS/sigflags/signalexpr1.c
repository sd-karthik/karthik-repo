# include <stdio.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/syscall.h>
# include <errno.h>
int  Sig_handler(int signum, siginfo_t * sig, void * act)
{
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
		
}

int main()
{
		int status;
		pid_t pid;

		char * ptr = "hello";
		struct sigaction sa;
		sa.sa_sigaction = Sig_handler;
//		status = sigaction(SIGSEGV, &sa, NULL);
		signal(SIGSEGV,Sig_handler);

//		status = sigaction(SIGABRT, &sa, NULL);


		printf("status ==>%d\n", status);

	//	*ptr = 10;
	kill( getpid(),SIGSEGV );
//      abort();
		return 0;
}

