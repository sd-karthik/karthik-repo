#include<stdio.h>

int main()
{
	unsigned char a[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
	int r = 3;
	int c = 3;
	int i = 0, j = 0;
	int ccount = 0;
	int rcount = 0;
	int count = 2;
	while(count--)
	{
	for(; j < c-ccount; j++)
	{	
		printf("%d ", a[i][j]);
	}

	for(; i <= r - rcount; i++)	
	{	
		printf("%d ",a[i][j]);
	
	}

	for(j = r - rcount; j > 0 + rcount; j--)
	{	
		printf("%d ", a[i][j]);
	}
	
	
	for(i = c - ccount; i > 0 + ccount; i--)	
	{	
		printf("%d ",a[i][j]);
	}
	ccount++;
	rcount++;
	j = ccount;
	i = rcount;
	}
	return 0;
	
}
