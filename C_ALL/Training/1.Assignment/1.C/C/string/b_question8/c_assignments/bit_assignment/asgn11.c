//Sandeep S K
//14//11//16
//a function invert (x,p,n) that returns x with n bits that begin at
// position p inverted, leaving others unchanged.

#include <stdio.h>

#define invert(x,p,n) showbit(x ^ (~((~0) << (p)) << (n)));

#define MAX 50

int valid(char str[MAX]);

int main()
{
	char str[MAX];
	unsigned int x;
	unsigned int p;
	unsigned int n;
    
	printf("eneter x num:\n"); // enter x value
	fgets (str , MAX , stdin);                                                  
    x = valid(str); 	
	
	printf("enetr position\n");// enter postion
	fgets (str , MAX , stdin);                                                  
    p = valid(str); 
	
	printf("enter number of bits\n");//enter numbe rof bits
	fgets (str , MAX , stdin);                                                  
    n = valid(str); 
	
	showbit(x);
	printf("inverted values\n");
	invert(x,p,n);
    
	return 0;
}
