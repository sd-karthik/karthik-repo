#include<stdio.h>

extern int showbit(int num);

int main()

{

	int num;
        int s;
        int d;

	printf("enter a number :"); //enter a number
	scanf("%d", &num); // what what bits to be swapped

	printf("enter bit numbers to be swapped:");
	scanf("%d %d",&s,&d);

	if((( num >> s ) & 1) == ( ( num >> d) & 1)){ //checking nums equal or not
		printf("numbers swapped %d",showbit(num));
	} 
         else{ 
                num = (1<<s) ^ num; //changing s bit
		num = (1<<d) ^ num; // changing bit d
		printf("swapped: %d",showbit(num));
	}
}
