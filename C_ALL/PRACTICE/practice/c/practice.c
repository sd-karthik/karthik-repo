#include<stdio.h>

void fun()
{
	int a[1] = {9};
	int c = 12;
	int b[2] = {7, 8};

	b[-( b - a)  ] = 3 ;
	return ;
}

int main()
{
	int a;


	fun();

	a = 5;
	
	return 0;
}
