#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

unsigned int *p ;

int (*fun)(const char *, ...);

int main()
{
	p = (int *) malloc(sizeof(int));
	
	unsigned int a;
	printf("PID=%d", getpid());

	getchar();

	scanf("%x", &a);
	
	p = (unsigned *) a;
	
	fun = p;

	(*fun)("ADD = %p\n", *p);

	return 0;

}
