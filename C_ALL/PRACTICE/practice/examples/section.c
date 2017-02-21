#include <stdio.h>

#if 0
int var __attribute__ ((section(".basu")));
int main()
{
		printf("%d\n",var);
		return 0;
}
#endif

#if 1
int fun() 
{
		printf("In fun\n");
		return 0;
}

int fun1() __attribute__ ((alias("fun")));
int main()
{
		fun1();
		return 0;
}
#endif
