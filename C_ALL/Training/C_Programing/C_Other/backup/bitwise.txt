#include<stdio.h>

extern int showbit(int num);
int bit_swap(int num, int source, int destination);
int main()
{
	int num;
	int src;
	int dst;
	
	printf("**********************************************\n");
	printf("Welcome to BITSWAP Program: by Karthik\n");
	printf("Feel free to type any valid number\n");
	if((scanf("%d",&num))==1) {
		showbit(num);
		printf("Enter the source and destination position\n");
		scanf("%d%d", & src, & dst);
		printf("The Swapped bit:\n");
		showbit(swap(num,src,dst));
	} else 
			printf("OH NO!! Invalid input\nTry again\n");
	printf("**********************************************\n");
	
	return 0;
}
	int swap(int num, int src, int dst)
{
		return (num >> src == num >>dst)? num: num^ ((1 <<src)|(1<<dst));
}
