//selection.c

//Selection Sorting function

//Author : Karthik

//DOC : 23/12/16

#include "header.h" 

int selection_sort(int *arr, int size)
{ 
	int i;	
	int j;
	int min;		//minimum position

	M_ALLOC_C(arr);	//memory allocation
	
	printf("-------------------------------------------\n");
	printf("------------ SELECTION SORTING ------------\n");	

	for( i = 0; i < (size - 1); i++ )
	{	
		min =  i;

		for( j = 0; j < (size - 1); j++)	
		{
			if( arr[j] < min )
			{
				min = j;
			}
		swap( &arr[i], &arr[min]);	//Swapping funtion

		}
	}

	return 0;
}
