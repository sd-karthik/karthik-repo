#include<stdio.h>
#include<stdlib.h>

int add(int , int);
int main()
{
	int num1 = 2;
	int num2 = 3;
	int result;	

	result = add(num1 , num2);

	return 0;
}

int add(int a, int b)
{
	int c;

	c = a + b;

	return c;
}

