#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>


void handler() {

	printf("handle signal\n");
	return;
}

int main()
{


	signal(SIGINT, &handler);

	pause();

	return 0;
}
