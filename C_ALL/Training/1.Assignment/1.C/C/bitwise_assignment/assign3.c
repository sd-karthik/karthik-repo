//Program to copy n bits from source number to destination number
#include<stdio.h>

extern int showbit(int num); //extern showbit function
int bit_copy(int snum, int dnum, int n, int s, int d); //function bitcopy

int main()
{
	int snum;
	int dnum;
	int n;
	int s;
	int d;
	int res;
	
	printf("Enter the source number\n");
	scanf("%d", &snum);
	showbit(snum);	
	
	printf("\nEnter the destination number\n");
	scanf("%d", &dnum);
	showbit(dnum);
	
	printf("\nEnter the source bit position\n");
	scanf("%d", &s);
	
	printf("\nEnter the bits to be copied\n");
	scanf("%d", &n);
	
	printf("\nEnter the destination bit position\n");
	scanf("%d", &d);

	res = bit_copy(snum, dnum, n, s, d);// calling function
	printf("\nthe number with bit copy:\n");
	showbit(res);
	return 0;
}

int bit_copy(int snum, int dnum, int n, int s, int d)//function definition
{
	int i;
	int j;
	int k;
	for(i = 0; i < n; i++) {
		j = (snum >> (s-i)) & 1;
		k = (dnum >> (d-i)) & 1;
		if(j != k) {
			dnum = dnum ^ (1 << (d-i));
		}
	}
	return dnum;
}
