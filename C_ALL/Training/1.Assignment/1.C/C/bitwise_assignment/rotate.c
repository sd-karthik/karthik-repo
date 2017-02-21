#include<stdio.h>

extern int showbit(int num);

unsigned int left_rotate_bits(unsigned int num)
{
	return (((num >> 31) & 1) ? ((num << 1) | 1): num << 1);
}

unsigned int right_rotate_bits(unsigned int num)
{
	return ((num & 1) ? ((1 << 31) | (num >> 1)) : num >>1);
}

unsigned int left_rotate_nbits(unsigned int num, int n)
{
	int i;

	for(i=1; i<=n;i++) {
		num=((num >> 31) & 1) ? ((num << 1) | 1): (num << 1);
		}
	return num;
}


unsigned int right_rotate_nbits(unsigned int num, int n)
{
	int i;

	for(i=1; i<=n;i++) {
		num=(num & 1) ? ((1 << 31) | (num >> 1)) : num >> 1;
		}
	return num;
}

int main(void)
{
	int num;
	int n;
	
	printf("Welcome to Rotate Program\n");
	printf("Enter the number to Rotate\n");
	scanf("%d", &num);
	
	showbit(num);
	printf("Left Rotation of the number by 1 bit\n");
	showbit(left_rotate_bits(num));
	printf("Right Rotation of the number by 1 bit\n");
	showbit(right_rotate_bits(num));
	printf("Enter the number of bits to left rotate\n");
	scanf("%d", & n);
	showbit(left_rotate_nbits(num, n));	
	printf("Enter the number of bits to right rotate\n");
	scanf("%d", & n);
	showbit(right_rotate_nbits(num, n));
	return 0;
}

