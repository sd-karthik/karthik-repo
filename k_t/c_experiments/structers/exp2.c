#include<stdio.h>

struct batch
{
//	double k : 1;
	unsigned int s;
	unsigned int x;
	unsigned int y; 
//	char c;
};
struct batch a;
struct batch *p;

int main()
{
	p = &a;
//	stru_d e1;

//	e1.s = 2;
//	e1.c = 'c';

//	printf("%p\n",&e1.s);
//	printf("%p\n",&e1.c);
	
	printf("%d %d %d \n",(*p).s, (*p).x, (*p).y);
//	printf("%d\n",sizeof(stru_d));

	return 0;
}

