//Sandeep S K
//12/11/16
//a macro getbits (x,p,n) that retuns (left adjusted) 
//n-bit field of x that begins at position p.

#include <stdio.h>

#define MAX 50

extern int valid(char str[MAX]);

#define getbits(x,p,n) int i; for (i=p ; i < (p+n) ; i++){\
				if ((x >> i) & 1)  printf("1");else printf("0");}
int main()
{	
	char str[MAX];
	unsigned int x;
	unsigned int p;
	unsigned int n;
	
	printf("enetr x value:\n");// number to be manipulated
	fgets (str , MAX , stdin);                                                  
    x = valid(str);                                                             
	
	printf("number of position\n");//positon of number 	
	fgets (str , MAX , stdin);                                                  
    p = valid(str);                                                             
    
	printf("number of bits\n");// number of bits to be manipulated
	fgets (str , MAX , stdin);                                                  
    n = valid(str);                                                             
                    
	showbit(x);
	
	printf("bits extracted\n");
	getbits(x,p,n);
    return 0;
}
