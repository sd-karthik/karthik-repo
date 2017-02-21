//Sandeep S K
//12/11/16
//a macro to test and set a bit position in a number.

#include <stdio.h>

#define MAX 50

# define bit_ts(num,bit_pos)\
(((num >> bit_pos) & 1) ? showbit(num) :\
showbit(num | (1 << bit_pos)))  //macro to set a bit postion.A bit remains
							    //if it is set,else
								// 1 is left shifted to get bit set 

extern int showbit(int num); // function to represent bits 

int main()

{	
	char str[MAX];
    unsigned int num;
    unsigned int bit_pos;
    unsigned int n;
    
	printf ("enter number 1:\n");  // number 1 to be manipulated
    fgets (str , MAX , stdin);                                                  
    num = valid(str); 
	
	showbit(num);
    
	printf ("bit  position to be set or reset:\n"); //  source bit position to be set 
    fgets (str , MAX , stdin);                                                  
    bit_pos = valid(str); 
    
	bit_ts(num,bit_pos);//calling a macro
          
	return 0;    
}                                                                    

