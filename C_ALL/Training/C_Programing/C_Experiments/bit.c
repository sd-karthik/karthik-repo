#include<stdio.h>
extern int showbit(int num);
int main()
{
	int num,pos;

	printf("Enter a number\n");
	scanf("%d",&num);
	showbit (num);
	printf("Enter the position to be CLEARED\n");
	scanf("%d",&pos);
	
	num=(num & ~ (1 << pos));
	showbit(num);
	printf("\n");
	return 0;
}
