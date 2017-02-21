# include <stdio.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/syscall.h>
# include <errno.h>
#if 0
int  Sig_handler(int signum, siginfo_t * sig, void * act)
{
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
		printf("Sig number ==> %d\n", sig -> si_signo);
		printf("Sig error number ==> %d\n", sig -> si_errno);
		printf("Sig code ==> %d\n", sig -> si_code);
		printf("Sig pid ==> %d\n", sig -> si_pid);
		printf("Sig uid ==> %u\n", sig -> si_uid);

		return 0;
}
int  Sig_handler0(int signum, siginfo_t * sig, void * act)
{
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
		printf("Sig number ==> %d\n", sig -> si_signo);
		printf("Sig error number ==> %d\n", sig -> si_errno);
		printf("Sig code ==> %d\n", sig -> si_code);
		printf("Sig pid ==> %d\n", sig -> si_pid);
		printf("Sig uid ==> %u\n", sig -> si_uid);

		return 0;
}
int  Sig_handler1(int signum, siginfo_t * sig, void * act)
{
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
		printf("Sig number ==> %d\n", sig -> si_signo);
		printf("Sig error number ==> %d\n", sig -> si_errno);
		printf("Sig code ==> %d\n", sig -> si_code);
		printf("Sig pid ==> %d\n", sig -> si_pid);
		printf("Sig uid ==> %u\n", sig -> si_uid);

		return 0;
}

#endif
int  Sig_handler(int signum, siginfo_t * sig, void * act)
{
		int status;
#if 0	
		sigset_t base_mask, waiting_mask;

		sigemptyset(&base_mask);
		sigaddset(&base_mask, SIGINT);
		sigaddset(&base_mask, SIGTSTP);

		//pause();
		//getchar();

		sigprocmask(SIG_SETMASK, &base_mask,NULL);
#endif
		printf("Signal recieved by SIG_HANDLER\n");
		printf("PID ==> %d\n", getpid());
#if 0
		printf("Sig number ==> %d\n", sig -> si_signo);
		printf("Sig error number ==> %d\n", sig -> si_errno);
		printf("Sig code ==> %d\n", sig -> si_code);
		printf("Sig pid ==> %d\n", sig -> si_pid);
		printf("Sig uid ==> %u\n", sig -> si_uid);

		status = sigpending(&waiting_mask);
		if(sigismember(&waiting_mask, SIGINT) ){
				printf("User is trying to kill the process\n");
		}
		else if(sigismember(&waiting_mask, SIGSTOP) ){
				printf("User is trying to stop the process\n");
		}


		printf("Status ==> %d\n" ,status);
#endif
		return 0;
}

int main()
{
		int status;
		pid_t pid;
		int fd = open("/dev/myChar", O_RDWR);

		if(fd < 0) {
				printf("file opening failed\n");
		}else {

				struct sigaction sa;
/*				struct sigaction sa0;
				struct sigaction sa1;
				struct sigaction sa2;*/
				sa.sa_sigaction = Sig_handler;

#if 0
				sa0.sa_sigaction = Sig_handler0;
				sa1.sa_sigaction = Sig_handler1;
				sa2.sa_sigaction = Sig_handler2;
				sa0.sa_flags = SA_RESTART | SA_SIGINFO;
				sa1.sa_flags = SA_RESTART | SA_SIGINFO;
				sa2.sa_flags = SA_RESTART | SA_SIGINFO;
	#endif			
				sa.sa_flags = SA_RESTART | SA_SIGINFO;
				printf("In main function\n");
				printf("PID => %d\n", getpid());
#if 0
				status = sigaction(SIGUSR1, &sa, NULL);
				status = sigaction(SIGSEGV, &sa, NULL);
				status = sigaction(SIGUSR2, &sa, NULL);
				status = sigaction(SIGILL, &sa, NULL);
				status = sigaction(SIGPIPE, &sa, NULL);
				status = sigaction(SIGALRM, &sa, NULL);/
				status = sigaction(SIGTERM, &sa, NULL);
				status = sigaction(SIGCHLD, &sa, NULL);
				status = sigaction(SIGCONT, &sa, NULL);
				status = sigaction(SIGUSR2, &sa, NULL);
#endif
				status = sigaction(SIGUSR1, &sa, NULL);
				status = sigaction(SIGUSR2, &sa, NULL);
#if 0
				status = sigaction(SIGUSR2, &sa2, NULL);
				status = sigaction(SIGQUIT, &sa0, NULL);

				status = sigaction(SIGKILL, &sa, NULL);
				status = sigaction(SIGSTOP, &sa, NULL);

				kill(getpid(), SIGKILL);
				kill(getpid(), SIGSTOP);  

				kill(getpid(), SIGCONT);

				char * p = NULL;

				printf("pointer is==> %c\n", *p); 
#endif
				pid = fork();
				if(pid >0) {
					
						wait(NULL);	
				//		ioctl(fd, getpid(), 0);
				
						printf("In parent  process\n");
						kill(getpid(), SIGTRAP);
					    killpg(0 , SIGUSR1);
				//      kill(getpid(), SIGUSR2);
						ioctl(fd, getpid(), 0);
										
				} else if(pid == 0) {
						printf("In child process\n");
				//      ioctl(fd, 1, 0);
				//		kill(getpid(), SIGQUIT);
			//			kill(getpid(), SIGTRAP);
						status = killpg(0, SIGUSR1);
						printf("status1 ==> %d\n", status);
						status = killpg(0, SIGUSR2);
						printf("status ==>%d\n", status);

						
					//	printf("status => %d\n", status);
						ioctl(fd, getpid(), 0);
				} else {
						printf("fork error\n");
				}

				//		printf("%d\n",  ST -> sig[0]);
//				pause();
		}
		return 0;
}
