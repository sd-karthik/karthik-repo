#include <stdio.h>

#define MAX_ARR 100

int main()
{
	int arr[MAX_ARR];
	int i,n; 	//'i' for loop and 'n' for number of array elements
	int *ptr;       //ptr to point array
	printf("Enter the number of array  elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	ptr=&arr[0];
	printf("printing the array elements using the pointer\n");
	while(n--)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}
