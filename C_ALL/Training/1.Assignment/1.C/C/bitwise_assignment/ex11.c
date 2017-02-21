// Program to invert a set of bits keeping other bits unchanged
#include<stdio.h>

extern int showbit(int num);// extern function to showbit

int invert(int x, int p, int n) // function to invert a set of bits
{
	return x ^((~((~0) << (p+n)) & ((~0) << p)));
}

int main(void)
{
	int p;
	int n;
	int x;

	printf("Welcome to n-Invert bit of a number\n");
	printf("Enter a number\n");
	scanf("%d", & x);
	showbit(x);
	printf("Enter the position\n");
	scanf("%d", & p);
	printf("Enter the number of bits to be inverted(right adjusted)\n");
	scanf("%d", & n);
	x=invert(x,p,n);
	printf("Resultant number :\n");
	showbit(x);
	return 0;
}
