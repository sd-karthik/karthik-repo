#include<stdio.h>

union sample
{
	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
};

int main()
{
	union sample var;
	
	printf("Enter the value for the last element of the union\n");
	scanf("%d",&var.e);

	printf("so(var)=%d\na=%d\tb=%d\tc=%d\td=%d\te=%d\n",sizeof(var),var.a, var.b, var.c, var.d, var.e);

	return 0;
}
