#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>

void catch_sig(int signo)
{
	if(signo == SIGSEGV)
	{
		printf("Signal %d is Handled\n", signo);
		fflush(stdout);
	//	exit(1);
	}
/*	else if(signo == SIGINT)
	{
	    printf("Signal keyboard is Handled\n");
    	fflush(stdout);
		exit(1);
	}
*/}
	
int main()
{
	signal( SIGSEGV, catch_sig);
//	signal( SIGINT, catch_sig);
	
	int *p =(int *) 10;
	printf("Generated a signal\n");
	*p = 20;
//	pause();
	
	return 0;
}
