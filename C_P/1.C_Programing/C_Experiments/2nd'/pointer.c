#include<stdio.h>

void main()
{
	int a=10;
	int *p;
	int **r;
	p = &a;
	r=&p;
	
	printf("address of p=%p\n", p);
	printf("address of *r=%p\n", *r);
	printf("address of &r=%p\n", &r);
	printf("data of *p=%d\n", *p);
	printf("**p=%p",**p);
 
}

