#include<stdio.h>

register int var1 asm("eax");

int main()
{
//	int a =5;
	printf("%p\n", var1);
	return 0;
}
