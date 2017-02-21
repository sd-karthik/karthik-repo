//Program to toggle even and odd position

#include<stdio.h>

extern int showbit(int num);//show bit extern 

int even_bit_toggle(int num) // function to toggle even bits
{
	int i;
	
	for(i=31; i>=0; i--) {
			if(i%2 == 0) {
				printf("%d", 1 ^ (1 & (num >> i)));
			}
			else {
				printf("%d", 1 & (num >> i));
			}
	}
	
	return 0;
}

int odd_bit_toggle(int num) // function to toggle odd bit
{
	int i;
	
	for( i=31; i>=0; i--) {
		if(i% 2== 0) {
			printf("%d", 1 & (num >> i));
		}
		else {
			printf("%d", 1 ^ (1 & (num >> i)));
		}
	}
	return 0;
}

int main(void)
{
	int num;// num is a number to toggle
	int opt;// option for toggle

	printf("WELCOME TO TOGGLE EVEN OR ODD BIT\n");
	printf("Enter a number\n");
	scanf("%d", & num);
	showbit(num);
	printf("Enter your option for toggle\n1.Even bit\n2.Odd bit\n");
	scanf("%d", & opt);
	
	printf("Resulting number=\n");
	switch(opt) {
		case 1 : even_bit_toggle(num);
 				break;
		case 2 : odd_bit_toggle(num);
				break;
		default: printf("Invalid option\n");
				break;
	}
	printf("\n");
	return 0;
}
