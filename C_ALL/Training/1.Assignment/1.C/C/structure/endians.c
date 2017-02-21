//Program to find the endians of the machine
#include<stdio.h>

union test{	// union for declaring variables of different data type
	int num1;
	char num2;
	}t;

int main()
{
	t.num2 = 55;
	t.num1 = t.num2;

	if(t.num1)
	{
		printf("The machine is little endian\n");
	}
	else {
		printf("The machine is big endian\n");
	}
	return 0;
}
