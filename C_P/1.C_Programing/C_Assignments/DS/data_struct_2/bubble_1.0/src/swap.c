//swap.c

//Swapping Function

//Author : Karthik

//DOC: 08/12/16


#include "header.h"

// Swap function 
void swap(int *num1, int *num2)
{
	int temp;	//temporary variable to swap

	temp = *num2;
	*num2 = *num1;
	*num1 = temp;
	
}

