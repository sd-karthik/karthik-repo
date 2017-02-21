#include<stdio.h>

extern int showbit(int num);
#define getbits(x,p,n) x= x & ((1 << (p+n-1)) | ((~0) << p)) 

void main(void)
{
	int x;
	int p;
	int n;

	printf("Welcome to Macro getbit Program\n");
	printf("Enter a number\n");
	scanf("%d",&x);
	showbit(x);
	printf("Enter the postion of extract(left justified by n bits)\n");
	scanf("%d", &p);
	printf("Enter the value of n\n");
	scanf("%d", &n);
	getbits(x,p,n);
	printf("The extracted bits are:\n");
	showbit(x);
}
