#include<stdio.h>

int num1;
int num2;

void swap()
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
}

void main()
{
	printf("Enter 2 numbers to swap\n");
	scanf("%d%d", &num1, &num2);
	swap();
	printf("num1=%d, num2=%d\n", num1,num2);
}
