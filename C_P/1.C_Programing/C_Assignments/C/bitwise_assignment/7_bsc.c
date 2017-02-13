//7_bsc.c

//Program to count set bits and clear bits 

#include<stdio.h>

extern int showbit();
int count_bit_set(int snum);
int count_bit_clear(int cnum);

int main()
{
	int num;
	int scount;
	int ccount;

	printf("Enter the num\n");
	scanf("%d", & num);
	showbit(num);
	printf("The count of set bits= %d\n",count_bit_set (num));
	printf("The count of clear bits= %d\n",count_bit_clear(num));

	return 0;
}

int count_bit_set(int n)
{
	int i;
	int count;
	
	for(i=0;i<=31;i++) {
		if(1 & (n >> i)) {
			count ++;
	 	}
	}
	return count;
}

int count_bit_clear(int n)
{
	int i;
	int count=0;
	
	for(i=31;i>=0;i--) 
	{
		if((1 & (n >> i))!=1) {
			count ++;
	 	}
	}
	return count;
}
