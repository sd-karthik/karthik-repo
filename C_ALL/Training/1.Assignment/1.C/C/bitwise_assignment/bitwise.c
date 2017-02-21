/*Program to swap a bit from source to destination position*/

#include<stdio.h>

extern int showbit(int num);	//Extern showbit function
int bit_swap(int num, int source, int destination);// function to swap bit
int main()
{
	int num;// num is a variable number
	int src;//src is source bit position
	int dst;//dst is destination bit position
	
	printf("**********************************************\n");
	printf("Welcome to BITSWAP Program\n");
	printf("Feel free to type any valid number\n");
	if((scanf("%d",&num))==1) {
		showbit(num);
		printf("Enter the source and destination position\n");
		scanf("%d%d", & src, & dst);
		printf("The Swapped bit:\n");
		showbit(bit_swap(num,src,dst));
	} else 
			printf("OH NO!! Invalid input\nTry again\n");
	printf("**********************************************\n");
	
	return 0;
}
	int bit_swap(int num, int src, int dst)// function to swap bitis
{
		return (num >> src == num >>dst)? num: num^ ((1 <<src)|(1<<dst));
}
