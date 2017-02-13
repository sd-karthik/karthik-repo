#include<stdio.h>

void main()
{
	int arr1[100][100];
	int arr2[100][100];
	int res[100][100];
	int row,column;
	int i,j;

	printf("Enter the row size and column size of a 2d array\n");
	scanf("%d%d", &row, & column);
	
	printf("Enter the elements of array1\n");
	
	for( i = 0; i < row; i++ ) {
			for( j=0; j < column; j++) {
				scanf("%d", &arr1[i][j]);
			}
		}

	printf("Enter the elements of array2\n");	
	for( i = 0; i < row; i++ ) {
			for( j=0; j < column; j++) {
				scanf("%d", &arr2[i][j]);
			}
		}
	
	printf("Sum of 2 2d arrays are:\n");

	for( i = 0; i < row; i++ ) {
		for( j = 0; j < column; j++ ) {
			res[i][j] = arr1[i][j] + arr2[i][j];
			
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}

