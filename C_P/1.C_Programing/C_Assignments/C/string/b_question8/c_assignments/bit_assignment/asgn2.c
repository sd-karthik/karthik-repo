//  Sandeep S K
//  10/11/2016
//  swap bit values between s and d of two numbersi.

#include <stdio.h>

#define MAX 50

int bit_swap(int num1, int num2, int sou, int dest); //function to swap bits   

extern int showbit(int num); // function to represent bits 

extern int valid(char str[MAX]);

int main()

{
	char str[MAX];
	unsigned int num1;
	unsigned int num2;
	unsigned int sou;
	unsigned int dest;
	
	printf ("enter number 1:\n");  // number  to be manipulated
    fgets (str , MAX , stdin); 
   	num1 = valid(str);
	
	printf ("enter number 2:\n");  // number  to be manipulated
	fgets (str , MAX , stdin);                                                  
    num2 = valid(str); 
	
	printf ("s_bit of number 1:\n"); //  source bit position 
	fgets (str , MAX , stdin);                                                  
    sou = valid(str); 
	
	printf ("d_bit number of 2:\n"); // destintaion bit position
	fgets (str , MAX , stdin);                                                  
    dest = valid(str); 
	
	printf("before swapping bit values:\n");
	showbit (num1);
	showbit (num2);

	bit_swap (num1, num2, sou, dest);
	return 0;

}

int bit_swap(int num1, int num2, int sou, int dest)

{
	int s_bit;
	int d_bit;

	s_bit =  ( num1 & ( 1 << sou)) >> sou;   // isolate source bti
	d_bit = ( num2 & ( 1 << dest )) >> dest; // isolate destination bit
	num1 = num1 & ( ~ (1 << sou)); 
	num2 = num2 & ( ~ (1 << dest )); //clear source and destination bit positions
	num1 = num1 | ( d_bit << sou ); // "or" destination bit at source bit
	num2 = num2 | ( s_bit << dest); // "or" source bit to destination bit

	printf("after swapping  bit values:\n");
	showbit(num1);
	showbit(num2);
	return 0;
}

