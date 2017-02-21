#include<stdio.h>

extern int showbit(int num);

int setbit(int y, int p, int n)
{
	return y |(~(~0 << (p+n-1)) & ((~0) << p));
}

int main(void)
{
	int y;
	int p;
	int n;
	int x;

	printf("Welcome to n-Set bit of a number\n");
	printf("Enter a number\n");
	scanf("%d", & y);
	showbit(y);
	printf("Enter the position\n");
	scanf("%d", & p);
	printf("Enter the number of bits to be set(right adjusted)\n");
	scanf("%d", & n);
	x=setbit(y,p,n);
	printf("Resultant number :\n");
	showbit(x);
	return 0;
}
