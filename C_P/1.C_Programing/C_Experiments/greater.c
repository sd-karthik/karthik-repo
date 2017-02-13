// program to find greater of 2 number
#include<stdio.h>

int main()
{
	int num1;// first number
	int num2;// second number
	
	printf("Welcome to finding greater number program\n");
	printf("Enter 2 numbers\n");
	scanf("%d%d", &num1, &num2);
	printf("The greater number =%d\n", (num1>num2) ? num1 : num2);
	return 0;
}
