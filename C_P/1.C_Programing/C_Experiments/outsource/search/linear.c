//linear.c

//Program for linear search

//DOC: 07/12/16

//Author : Karthik


#include <stdio.h>

#define MAX 100

int main()
{
	int arr[MAX];	//user defined array
	int key;		//key
	int ch;			//character
	int size;		//size
	int i;

	printf("Linear Search\n");
	printf("Enter the size of array\n");
	scanf("%d", &size);

	printf("Enter the elements to array\n");
	//	fgets(arr, MAX, stdin);
	
	for( i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the character to search\n");
	scanf("%d", &ch);

	//Linear serach operation
	for( i = 0; i < size; i++)
	{
		if( arr[i] == ch)
		{
			printf("element %d found at pos =%d\n", ch, i);
			return 0;
		}
	}
	
	printf("Element is not found\n");
	return 0;
}
	
