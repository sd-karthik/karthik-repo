#include<stdio.h>

extern int showbit(int num);

int setbits(int y, int p, int n)
{
	return (y | ~ ( ~0 << (p+n+1) & (~0 << p)) & (~0 <<(p+1))); 
}

int main(void)
{
	int p;
	int n;
	int x;

	printf("Welcome to n-setbits bit of a number\n");
	printf("Enter a number\n");
	scanf("%d", & x);
	showbit(x);
	printf("Enter the position\n");
	scanf("%d", & p);
	printf("Enter the number of bits to be set(right adjusted)\n");
	scanf("%d", & n);
	x=setbits(x,p,n);
	printf("Resultant number :\n");
	showbit(x);
	return 0;
}
