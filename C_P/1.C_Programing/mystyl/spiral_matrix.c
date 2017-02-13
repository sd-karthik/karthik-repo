#include<stdio.h>


int main(void)
{
	int row = 4;
	int col = 5;
	int a[4][5] = { {0,1,2,3,4}, {5,6,7,8,9}, {10,11,12,13,14}};
	int i = 0;
	int j = 0;

/*	while(row == 0 && col == 0)
	{	
*/		printf("Inside while\n: row*col= %d", row*col);
		for(j = 0; j < col; j++)
		{
			printf("%d ", a[i][j]);
			row--;
			i--;
		}
		for(i = 0; i < row; i++)
		{
			printf("%d ", a[i][j]);
			col--;
			i--;
		}
		for(;j > 0; j--)
		{
			printf("%d ", a[i][j]);
		}
		for(; i > 0; i++)
		{
			printf("%d ", a[i][j]);
		}
//	}

	return 0;
}
