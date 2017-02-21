#include<stdio.h>
#include<stdlib.h>

#if 0
void fun(int, int);
void main()
{
	int a = 10;
	int b = 20;

	printf("values before calling fun %d\t%d", a , b);

	fun(a, b);

	printf("\nvalues after calling  fun %d\t%d", a, b);
}
void fun(int x, int y)
{
	x = 5;
	y = 15;
}
#endif
#if 0 
int sum();

int main()
{
	printf("%p\n", sum);
	printf("%p\n", main);
	return 0;
}
int sum()
{
	return 0;
}
#endif
#if 0

int fun(int n);
int main()
{
	int (*ptr)(int) = fun;
	(*ptr)(3);
	return 0;
}

int fun(int n)
{
	for(; n > 0; n--)

	printf("global edge");

	return 0;
}
#endif
#if 0

int main()
{
	void demo();
	void (*fun)();
	fun = demo;
	(*fun)();
	fun();
	return 0;
}
void demo()
{
	printf("global edge");
}

#endif

#if 1

int main()
{

	printf("global edge\n");

	main();

	return 0;
}
#endif
#if 0
char *fun(char arr1[]);
int main()
{
	char *a;
	char arr[5] = "hey";
	
	a = fun(arr);
	printf("%p\n",a);
	printf("%s", a);
	return 0;
}

char *fun(char arr1[])
{	printf("%p\n",arr1);
	return arr1;
}
#endif
#if 0
int *fun();
int main()
{
	
	int *ptr;
	ptr = fun();
	printf("%d", *ptr);
	return 0;
}
int *fun()
{
	int *p = malloc(sizeof( *p));
	*p = 12;
	return p;
	
}
#endif

#if 0
iint swap_num(int *num1, int *num2);
int main()
{
	int n1 = 5;
	int n2 = 10;
	printf("%d\n%d\n", n1, n2);
	
	swap_num(&n1, &n2);

	printf("%d\n%d\n",n1 , n2);

	return 0;
}

int swap_num(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return 0;
}
#endif

#if 0

int main()
{
	{
	int a = 5;
	{
		printf("%d\n", a);
	
	}
	}
	{
	int b = 10;
	printf("%d\n", a+b);
	}	
return 0;
}
#endif
