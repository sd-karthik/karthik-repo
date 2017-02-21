//Sandeep S K
//12/11/2016
// to left rotate and right rotate a single bit and multiple bits too

#include <stdio.h>

#define MAX 50

extern int valid(char str[MAX]);

#define left_rotate_bits(num) \
showbit((num << 1) | ((num >> 31) & 1));// macro to left roatate bits

#define right_rotate_bits(num) \
showbit((num >> 1) | ((num) & 1) << 31);// macro  to right rotate bits 

#define left_rotate_nbits(num,n)\
showbit((num << n) | (num >> (31-n) & (~0) >> (31-n)));
//macro to left rotate n bits 

#define right_rotate_nbits(num,n) \
showbit((num >> n) | ((( num & ( ~ ((~0) <<n )))) << (32-n)) & (~0));
// macro to right rotate n bits


int main()
{	
	unsigned int num,n;
	char str[MAX];

	printf("give number:\n");
	fgets (str , MAX , stdin);                                                  
    num = valid(str); 
	
	printf("bits to be rotated left or right:\n");
    fgets (str , MAX , stdin);                                                  
    n = valid(str);  // number of bits by which number to be manipulated
        
	printf("after left  rotation:\n");
    left_rotate_bits(num);    // call macro
	
	printf("after right roatation\n");
	right_rotate_bits(num);
        
	printf("after left n bit roatation\n");
	left_rotate_nbits(num,n);

	printf("after right n bit roatation\n");
	right_rotate_nbits (num,n);

	return 0;
}
