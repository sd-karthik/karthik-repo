#include <stdio.h>
int fun1()
{
	return printf("fun1\n");
//return 0;
}
int fun2()
{
	return 	printf("fun2\n");
//	return 0;
}
int fun3()
{
	return 	printf("fun3\n");
//	return 0;
}

int main()
{
	printf("%d", fun1() + fun2() * fun3());
}
