//two files are compiling using static specifier
#include <stdio.h>
//extern int a;
int fun()
{
	int b = 3;
	int a;
	printf("value of b = %d\n",b);
	printf("address of a is %p\n", &a);
	printf("a = %d\n",a);
	return 1;
}
