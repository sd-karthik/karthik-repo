#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>



void handler2() {
	printf("signal handle\n");
	fflush(stdout);
	return;
}
void handler() {
	printf("handle signal\n");
	exit(0);
}

int main()
{
	
	int *p = 0;
//	signal(2, &handler2);
	signal(11, &handler);

	*p = 10;	
	pause();	
//	*p = 10;	


	return 0;
}
