#include<stdio.h>

int main()
{
	int a[2][2] = {{2, 3},{1, 4}};

	int i,j;

	for(i=0; i<2; i++) {
			for(j=0; j<2; j++)
				printf("%d ",a[i][j]);
	}

	printf("\n");
}



