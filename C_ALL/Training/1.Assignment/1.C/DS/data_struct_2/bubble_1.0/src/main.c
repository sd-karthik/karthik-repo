//main.c

//Program of bubble sorting

//Author: Karthik

//DOC: 08/12/16

#include "header.h"

int main(void)
{
	int arr[MAX];	//Array with MAX number of elements
	int size;		//size of the array
	int i;			//loop variable

	printf("Bubble sorting\n");

	//Array input
	printf("Enter the size of the array\n");	
	scanf("%d", &size);

	printf("Enter the elements into the array\n");
	for( i =0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	//Bubble sorting function call
	bubble(arr, size);

	//display the result
	printf("The Bubble sorted array\n");
	for(i = 0; i < size ; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
