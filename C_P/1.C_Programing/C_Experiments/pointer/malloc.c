#include<stdio.h>

void main()
{
	int i;
	int **p;
	int row = 2;
	int col = 3;
	int j;
	char *a = (char *)malloc(sizeof(char));

	for(i = 0; i < row; i++)
	{
		*(p+i)  = (int *) malloc (sizeof(int)*col) ;
	}

	printf("Input\n");
	printf("%p\n%p\n", *p, (*p+1));

	/*for(i = 0; i< row; i++)
	{
		for(j = 0; i <col; i++)
		{
			scanf("%d", *(*(p + row)+col));
		}
	}

	for(i = 0; i< row; i++)
	{
		for(j = 0; i <col; i++)
		{
			printf("%d", *(*(p + row)+col));
		}
		printf("\n");
	} */
}
