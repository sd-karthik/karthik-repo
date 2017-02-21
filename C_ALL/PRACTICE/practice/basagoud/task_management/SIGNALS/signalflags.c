# include <stdio.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>


int  Sig_handler(int signum, siginfo_t * sig, void * act)
{
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
		printf("Sig number ==> %d\n", sig -> si_signo);
		printf("Sig error number ==> %d\n", sig -> si_errno);
		printf("Sig code ==> %d\n", sig -> si_code);
		printf("Sig pid ==> %d\n", sig -> si_pid);
		printf("Sig uid ==> %d\n", sig -> si_uid);

		return 0;
}
int main()
{
		int status;
		struct sigaction sa;

		sa.sa_sigaction = Sig_handler;

		sa.sa_flags = SA_RESTART | SA_SIGINFO;

		printf("PID => %d\n", getpid());
		printf("In main function\n");
		status = sigaction(SIGINT, &sa, NULL);

		printf("status => %d\n", status);

		pause();
		return 0;
}
