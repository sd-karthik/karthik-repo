//Sandeep S K
//14/11/2016
//10.the ‘n’ bits that begin at position p set to 
//the right most n bits of y, leaving the other bits unchanged
#include <stdio.h>

#define MAX 50

void set_bit( int y, int x, int n, int p); //function to swap bits   

extern int showbit(int num); // function to represent bits 

extern int valid(char str[MAX]);

#define MAX 50

int main()

{	
	char str[MAX];
    unsigned int y;
    unsigned int x;
	unsigned int n;
	unsigned int p;
        
    printf ("enter number y:\n");  // number 1 to be manipulated
    fgets (str , MAX , stdin);                                                  
    y = valid(str); 
        
	printf ("enter number x:\n");  // number 2 to be manipulated
    fgets (str , MAX , stdin);                                                  
    x = valid(str);    
    
    printf ("number of right n most bits :\n"); //number of bits to be copied
    fgets (str , MAX , stdin);                                                  
    n = valid(str); 

    printf ("position of x num:\n"); //   position of bits in destination
    fgets (str , MAX , stdin);                                                  
    p = valid(str);  

    showbit (x); 
    showbit (y);
    
	set_bit (x,y,n,p); //call function to copy bits
	
	return 0;
}   
    
void set_bit(int x, int y, int n, int p)
    
{   
        int s_bit;
        int d_bit;
        s_bit = ( y  & (~((~0) << n)));   // isolate n source btis from y
        x = x & ( ~ ( (~ ((~0) << n)) << (p))   ) ;// clear bits of x  to be replaced by source bits
        x = x | (s_bit << p);// 'or' destination number  to shifted isolated bits
        showbit (x);
}

