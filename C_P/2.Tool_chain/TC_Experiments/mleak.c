//Memory leak experiment

//DOC : 03/01/17

#include <stdio.h>

//#define MAX 33790
#define MAX 90
int *p;

int main()

{
	p = malloc(4);

	printf("&p = 0x%08x,\n", p);
	printf("&p + %d = 0x%08x\n", MAX, p+MAX);
	
	getchar();

	*(p+MAX) = 12;

	getchar();
	
	printf("Value of *(p+%d) = %d\n", MAX, *(p+MAX));

	return 0;
}
