#include<stdio.h>

extern int showbit(int num);
# define bit_ts(num, pos) num=(1 & (num >> pos)) ? num : (num | (1 << pos)) 

int main(void)
{
	int num;
	int pos;
	
	printf("Welcome to Macro testing a bit\n");
	printf("Enter a number\n");
	scanf("%d", &num);
	showbit(num);
	printf("Enter the postion you want to test and set\n");
	scanf("%d", &pos); 
	bit_ts(num,pos);
	printf("Resulting number\n");
	showbit(num);
	return 0;
}
