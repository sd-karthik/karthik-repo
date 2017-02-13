#include<stdio.h>

int main()
{
	int arr[100];
	int sum=0;
	int size;
	int i;

	printf("Enter size of the array\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(i = 0; i < size ; i++) {
		scanf("%d", &arr[i]);
		sum= sum + arr[i];
	}
	printf("Total sum=%d\n",sum);
}
