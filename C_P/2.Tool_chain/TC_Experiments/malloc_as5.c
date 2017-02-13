#include<stdio.h>

int main()
{
	char *p = NULL;

	p = (char *) malloc(1024 * 1024 * 2.5);

	
	printf("PID = %d\n", getpid());
	
	getchar();

	return 0;
}
