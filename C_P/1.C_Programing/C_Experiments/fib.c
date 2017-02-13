//Program to find Fibanacci upto the userdefined limit
#include<stdio.h>

int main()
{
	int a[100];
	int i;
	int limit;// upper limit
	int access;// the accessable position
	a[0]=0;
	a[1]=1;

	printf("Enter NUMBER of Fibanacci series\n");
	scanf("%d",&limit);
	printf("%d ",a[0]);
	for(i = 1; i < limit; i++) {
		a[i+1] = a[i-1] + a[i];
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Enter the particular array postion to access\n");
	scanf("%d",&access);
	printf("Fibanacci at position %d is %d\n", access, a[access]);
	return 0;
}
