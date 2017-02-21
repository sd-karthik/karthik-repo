//bubble.c

//Function of bubble sorting

//Author : Karthik

//DOC: 08/12/16

#include "header.h"

int *bubble(int arr[], int size)	//Function definition of bubble sort
{
	int i;
	int j;

	for(i = 0; i < ( size - 1); i++) {
		for(j = 0; j < ( size - i -1 ); j++) {
			if( arr[j] > arr[j + 1] )
			{
				//swapping
				swap( &arr[i], &arr[j + 1] );
			
			}
		}
	}
}
