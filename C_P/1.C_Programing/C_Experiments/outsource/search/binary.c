//binary.c                                                              
                                                                        
//Program for binary search                                             
                                                                        
//DOC: 07/12/16

//Author : Karthik

#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX];   //user defined array
    int num;        //number to search
    int size;       //size
    int i;
	int max;
	int min;
	int mid;

    printf("Binary Search\n");
    printf("Enter the size of array\n");
    scanf("%d", &size);

    printf("Enter the elements to array\n");
    //  fgets(arr, MAX, stdin);

    for( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search\n");
    scanf("%d", &num);
	
	max = size - 1;
	min = 0;
    mid = (max+min)/2;

	//binary serach operation
	while(min <= max)
	{
		if(arr[mid] == num) {
			printf("Number %d is found at position: %d\n", num, mid+1);
			return 0;
		}
		if(arr[mid] < num)
		{
			min = mid + 1;
			mid = (max + min)/2;
		}
		else {
			max = mid - 1;
			mid = (max + min)/2;
		}	
 	}
	
	printf("Element is not found\n");
    return 0;
}


