/* Signal handling by sigaction */

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>

/* Signal handling function */
/* 11 -SIGSEGV
* 2 - SIGINT
*/

void sig_handle(int signo, siginfo_t *s_info)
{

	if(signo == 11)
	{	
		printf("Segmentation fault occured\n");
		printf("Signal %d is Handled\n", signo);
		printf("si_signo = %d\n", s_info -> si_signo);
		printf("si_errno = %d\n", s_info -> si_errno);
		printf("si_pid = %d\n", s_info -> si_pid);
		printf("si_uid = %d\n", s_info -> si_uid);
		fflush(stdout);
//		exit(1);	
	}
	else if(signo == 2)
	{	
		printf("Keyboard interupt occured\n");
		printf("Signal %d is Handled\n", signo);
		fflush(stdout);
		exit(1);	
	}
}
	
int main()
{
	int *p = 10;
	struct sigaction *sa = NULL;

	sa = (struct sigaction*) malloc(sizeof(struct sigaction));

	sa->sa_sigaction = &sig_handle;
	sa->sa_flags = SA_SIGINFO;

	sigaction( SIGSEGV, sa, NULL);
	sigaction( SIGINT, sa, NULL);
	*p = 20;

	printf("Generated a signal\n");

	pause();
	
	return 0;
}
