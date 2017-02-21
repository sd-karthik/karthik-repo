#include<stdio.h>

extern int showbit(int num);// extern showbit function

#if 0
//Program 1: Program to Find whether the given number 
int main(void)
{
	int num; // num is the user defined number
	int count=0; // count is the for counting the number of 1's
	int i;

	printf("********************************************\n");	
	printf("Welcome to Power of 2 program\n");
	printf("Feel free to type any valid number\n");
	if(scanf("%d",& num)) {
		showbit(num);
		printf("\n");
		for( i = 0; i <= 31; i++) { //for counting the number of set bits
			if((num >> i) & 1) {
				count++;
				}
			}
		if(count == 1)	{	//power of 2 contains number of bits equal to 1
			printf("%d is Power of 2\n", num);
		} 
		else {
				showbit(num);
				printf("\n%d is not a power of 2\n", num);//Display message
		}
	}  
	else
		printf("Oh no!! Invalid input\nTry Again....");
	printf("\n***********************************************\n");
	return 0;
}

#endif

#if 1 
//Program 2: Program to count the number of bits in number

int main(void)
{
	int num;//num is user input number
	int i;//i for looping operation
	int count=0;// count is for counting the number of 1's in a number
	
	printf("******************************************\n");
	printf("Welcom to Counting of setbits in a number\n");
	printf("Enter a number\n");
	if(scanf("%d", & num)) {		
		showbit(num);
		for( i = 0; i <= 31; i++) { //for counting the number of set bits
			if((num >> i) & 1) {
				count++;
			}
		}
		printf("\n");
		showbit(num);// number display in binary form
		printf("\nNumber of set bits in %d is: %d\n", num, count);
	}
	else
		printf("Ohh No.!! Invalid input\nPlease try again...\n");
	printf("*********************************************\n");
	return 0;
}
#endif
