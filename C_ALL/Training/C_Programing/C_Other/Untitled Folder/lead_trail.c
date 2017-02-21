/* write functions to count the leading set or clear bits
   and count the trailing set or clear bits */

//Date of creation : 13/ 11/ 2016

#include<stdio.h>

extern int showbits(int );  //call function showbits() from file showbit.c

int cnt_leading_set_bits(int );
int cnt_leading_cleared_bits(int );
int cnt_trailing_cleared_bits(int );
int cnt_trailing_set_bits(int );

int main(void)
{
	int num;               //number taken as input
	int leading_set;       //count of leading 1's
	int leading_clear;     //count of leading 0's
	int trailing_clear;    //count of trailing 0's
	int trailing_set;      //count of trailing 1's

	printf("Enter a number to count the number of leading or trailing bits\n");
	scanf("%d", &num);

	showbits(num);

	leading_set = cnt_leading_set_bits(num);
	printf("The number of leading set bits are %d\n", leading_set);

	leading_clear = cnt_leading_cleared_bits(num);
	printf("The number of leading clear bits are %d\n", leading_clear);

	trailing_clear = cnt_trailing_cleared_bits(num);
	printf("The number of trailing clear bits are %d\n", trailing_clear);

	trailing_set = cnt_trailing_set_bits(num);
	printf("The number of trailing set bits are %d\n", trailing_set);

	return 0;
}

//function to count the number of 1's at leading end
int cnt_leading_set_bits(int num)
{
	int i;
	int leading_set = 0;
	
	for (i = 31; i >= 0; i--) {

		if (num & (1 << i))   //if num bit at position i is 1
			leading_set++;        //increment count
		else
			break;
	}
	return leading_set;
}


//function to count the number of 0's at leading end
int cnt_leading_cleared_bits(int num)
{
	int j;
	int leading_clear = 0;

	for (j = 31; j >= 0; j--) {

		if (num & (1 << j) == 0)   //if num bit at position i is 0
			leading_clear++;           //increment count
		else
			break;
	}
	return leading_clear;
}


//function to count number of 0's at trailing end
int cnt_trailing_cleared_bits(int num)
{
	int k;
	int trailing_clear = 0;

	for (k = 0; k <= 31; k++) {

		if (num & (1 << k) == 0)   //if num bit at position i is 0
			trailing_clear++;          //increment count
		else
			break;
	}
	return trailing_clear;
}


//function to count number of 1's at trailing end
int cnt_trailing_set_bits(int num)
{
	int l;
	int trailing_set = 0;

	for (l = 0; l <= 31; l++) {

		if (num & (1 << l))   //if num bit at position i is 1
			trailing_set++;           //increment count
		else
			break;
	}
	return trailing_set;
}
