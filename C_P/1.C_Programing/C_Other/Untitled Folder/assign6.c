#include<stdio.h>
 
extern int showbit(int num);

unsigned int left_rotate_bits (unsigned int num);//function declerations
unsigned int right_rotate_bits (unsigned int num);
unsigned int left_rotate_n_bits (unsigned int num, int n);
unsigned int right_rotate_n_bits (unsigned int num, int n);

int main ()
{

	unsigned int num, n;
	unsigned int left_rot, right_rot, left_n_rot, right_n_rot;

		printf("\n Enter a num \n ");
		scanf("%d", & num);
		printf("\nenter number of bits to be rotated:");
		scanf("%d" , &n );

		printf("the number is:");

		showbit( num );

		left_rot = left_rotate_bits(num);
	 	printf(" \nnumber rotated 1 bit left: \n");
		showbit(left_rot);
	
    	right_rot = right_rotate_bits(num);
		printf("\n number rotated 1 bit right: \n");
		showbit(right_rot);
	
    	left_n_rot = left_rotate_n_bits(num, n);
		printf("\nnumber rotated n bits right:\n");
		showbit(left_n_rot);
	
    	right_n_rot = right_rotate_n_bits(num, n);
	   	printf("\nnumber rotated n bits left:");
		showbit(right_n_rot);

	return 0;
}

unsigned int left_rotate_bits(unsigned int num)//definition for left rotate

{ 
	num = ( num & 1 == 1) ? (( num >> 1 ) ^ ( 1 << 31 )) : num >> 1;  
	return num;
}

unsigned int right_rotate_bits(unsigned int num)//definition for right rotate
{
	num =  ((num>>31) & 1 == 1) ? (num<<1)^1 : num<<1;
	return num;
}


unsigned int left_rotate_n_bits(unsigned int num, int n)//rotation of n bits

{  int i;
	for(i=1;i<=n;i++)
	{ 
		num = ( num & 1 == 1) ? (( num >> 1 ) ^ ( 1 << 31 )) : num >> 1;
	}  

	return num; }

unsigned int right_rotate_n_bits(unsigned int num, int n)//rotation of n bits
{ 

	int i;
	for(i=1;i<=n;i++)
	{

		num =  ((num>>31) & 1 == 1) ? (num<<1)^1 : num<<1;
	} return num;
}

