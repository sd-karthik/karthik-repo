//  Sandeep S K
//  11/11/2016
//  copy  n bit values from s to d of two numbers.

#include <stdio.h>

#define MAX 50

void bit_cpy(int num1, int num2, int n,int sou, int dest); //function to swap bits   

extern int showbit(int num); // function to represent bits 

extern int valid(char [MAX]);

int main()

{
	char str[MAX];    
    unsigned int snum;
    unsigned int dnum;
    unsigned int sou;
    unsigned int dest;
  	unsigned int n;
    printf ("enter number 1:\n");  // number 1 to be manipulated
    fgets (str , MAX , stdin);                                                  
    snum = valid(str); 
    
	printf ("enter number 2:\n");  // number 2 to be manipulated
    fgets (str , MAX , stdin);                                                  
    dnum = valid(str); 
	
	printf ("number  of bits to be replaced:\n"); //number of bits to be copied
	fgets (str , MAX , stdin);                                                  
    n = valid(str); 
    
	printf ("s_bit  position of snum:\n"); //  source bit position 
    fgets (str , MAX , stdin);                                                  
    sou = valid(str); 
    
	printf ("d_bit position of dnum:\n"); // destintaion bit position
    fgets (str , MAX , stdin);                                                  
    dest = valid(str);
    
 	printf("two numbers to manipulated\n");
    showbit (snum);
    showbit (dnum);
    bit_cpy (snum, dnum, n, sou, dest); //call function to copy bits

	return 0;
}

void bit_cpy(int num1, int num2, int n, int sou, int dest)

{
    int s_bit;
    int d_bit;
    
	s_bit = ( num1 >> ( sou+1-n )) &  ~ (( ~0 ) << n);   // isolate n source btis 
    num2 = num2 & ( ~ (( ~ (( ~0 ) << n )) << (dest+1-n))   ) ;// clear bits to be replaced by source bits
	num2 = num2 | ( s_bit << dest+1-n );// 'or' destination number  to shifted isolated bits
    
	printf("after manipulation\n");
	showbit (num2);                                                                   
}
