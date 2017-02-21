#include <stdio.h>
/*
* storage class specifiers
*
*/
#if 0
int main()
{
	int a = 20;
	
	printf("%d\n",a);
	return 5;
}
# endif
#if 1
int main()
{
	volatile int a = 5;
	printf("%d %d %d %d",a++,a++,++a,a++);
}
# endif
