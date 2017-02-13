// Sandeep S K
//12/11/16
// to toggle even and odd bits of a given number

#include <stdio.h>

#define MAX 50

void bit_cpy(int num1, int num2, int n,int sou, int dest); //function to swap bits   

extern int showbit(int num); // function to represent bits 

extern int valid(char str[MAX]);

int even_bit_toggle (int num);// function to toggle even bits

int odd_bit_toggle (int num);// function to toggle odd bits

int main()
{       
	char str[MAX];
	unsigned int num;
    
	printf ("enter number:\n "); //number to be manipulated
    fgets (str , MAX , stdin);                                                  
    num = valid(str); 
	
	printf(" ");
	showbit(num);
    
	printf("\nafter toggling even bits:\n ");
	even_bit_toggle(num);// call function 
	
	printf("\nafter toggling odd_ bits:\n ");
	odd_bit_toggle(num);

	return 0;
}
int even_bit_toggle(int num)
{
	int i,r,a;
	for(i=31 ; i>=0 ; i--){
		r=( num & (1<<i) ? 1 : 0);    //assign r with bit value of num
		if ((i%2) == 0)          //check for even position
				{ 
			 	a = !r;// toggle bit for even location
				printf("%d",(a));
				}	
		else 
		printf("%d",r);// odd position remains unchanged
		}
	return 0;
}
int odd_bit_toggle(int num)
{
    int i;
	int r;
	int a;
        for( i=31 ; i>=0 ; i-- ){ 
                r=(num & (1<<i) ? 1 : 0);//assign r with bit value of num
                if ((i%2) == 1) //check for odd position
               		{
			a = !r;//toggle bit for odd location
			printf("%d",(a));
			}
                else 
                printf("%d",r); // even bit position remains unchanged
	}
	return 0;
}

    
