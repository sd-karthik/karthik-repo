// Swap of bits
// Sandeep S K
// 10/11/2016
// swap the bit values between s and d of a bit number.

#include <stdio.h>

#define MAX 50

int bit_swap(int num, int sou, int dest); //function to swap bits   

extern valid(char s[30]);

extern int showbit(int num); // function to represent bits 

int main()

{
   unsigned int num;
   unsigned int sou;
	unsigned int dest;
	char str[50];
	
	printf ("enter number:\n");  // number  to be manipulated
	fgets (str , MAX , stdin);

	num=valid(str);
	
	printf ("s_bit number:\n"); //  source bit position 
	fgets (str , MAX , stdin); 

	sou=valid(str);
	
	printf ("d_bit number:\n"); // destintaion bit position
	fgets (str , MAX , stdin); 

	dest=valid(str);
	
	showbit (num);

	bit_swap (num, sou, dest);	

	return 0;
}

int bit_swap(int num, int sou, int dest)

{
	int s_bit;
    int d_bit;
	s_bit = (num & (1 << sou)) >>sou;   // isolate source bti
			d_bit = (num & ( 1<< dest )) >> dest; // isolate destination bit
	num = num & (( ~ (1 << sou)) & ( ~ ( 1 << dest ))); //clear source and destination bit positions
	num = num | (d_bit << sou ); // "or" destination bit at source bit
	num = num | (s_bit << dest); // "or" source bit to destination bit
	showbit (num);
	
	return 0;

}
