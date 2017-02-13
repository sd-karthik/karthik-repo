#include<stdio.h>

  extern int showbit(int num);
  int count_bit_set(int num); // decleration of function
  int count_bit_clear(int num); //decleration of function

int main()
{
		int num, scount, ccount;
 
		printf("Enter the num\n");//entering number
		scanf("%d", & num);

		printf("the number is:"); 

		showbit( num );

		scount = count_bit_set ( num ); // calling a function
		printf("\nThe count of set bits= %d\n", scount);

		ccount = count_bit_clear( num ); // calling a function
		printf("\nthe count of clear bits=%d\n",ccount);

	return 0;
}

int count_bit_set(int num )// defining a function
{
		int i;
		int count = 0;

		for( i=0; i<=31; i++ ) {

			if( ( (num >> i) & 1 ) == 1 ) {
			count ++;
		}	}
		return count;
}

int count_bit_clear(int num)//defining a function 
{
		int i;
		int count = 0;

		for(i=0;i<=31;i++) {
		
			if( ( ( num >> i ) & 1 ) == 0 ) {
			count ++;
		}	}
	return count;
}
