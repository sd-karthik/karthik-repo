#include<stdio.h>

int main()
{
	volatile int a=34;
	printf("value of a=%d\n",a);

	a++;

	printf("Value after changing a=%d, %d, %d\n",a++,++a,a);
	return 0;
}

