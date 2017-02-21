//Sandeep S K
//12/11/16
//functions which will count the number of bits set and  cleared in num 

#include <stdio.h>

#define MAX 50

void count_bit_set_clr(int num); // function to count set and cleared bits

extern int valid(char str[MAX]);

int main ()
{
	char str[MAX];
	int i;
	unsigned int num;

	printf("enter number :\n");
	fgets (str , MAX , stdin);                                                  
    num = valid(str); 
	count_bit_set_clr(num);// call function
	
	return 0;
}

void count_bit_set_clr(int num)
{
	int i;
	int r;
	int count_set=0;  //
	int count_clr=0;  // count variables
	for (i=31 ; i>=0 ; i--)
	{
		r = num & (1<<i) ? 1 : 0; // r assigned with each bit 
		if(r == 1)          // check for 1 or 0
		{
			printf("%d",r); 
			count_set++;   // increment for r=1
		}
		else
		{
			printf("%d",r);
			count_clr++;  // increment for r=0

		}

	}
	printf ("\n bits set:%d and bits cleared:%d \n",count_set,count_clr);
}



