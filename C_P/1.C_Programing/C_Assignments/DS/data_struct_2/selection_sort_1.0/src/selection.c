//selection.c

//Function for Selection Sorting

#include "header.h"

void selection(int f_arr[], int f_size)
{
	int i;
	int j;
	int position;

	for(i = 0; i < (f_size - 1); i++)
	{
		position = i;

		for(j = i+1; j < f_size; j++)
		{
			if( f_arr[position] > f_arr[j] )
            	position = j;
      }
      if ( position != i )
      {
		swap(&f_arr[position], &f_arr[i]);
      }
	}
}
