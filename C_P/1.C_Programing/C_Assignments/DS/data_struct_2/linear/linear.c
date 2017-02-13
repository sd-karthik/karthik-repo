//main.c

//Program of linear sorting

//DOC: 08/12/16

#include<stdio.h>

#define MAX 100     //MAX is maximum value
int main(void)
{
    int arr[MAX];   //Array with MAX number of elements
    int size;       //size of the array
    int i;
    int j;
    int temp;
	int min;

    printf("Bubble sorting\n");

    //Array input
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    printf("Enter the elements into the array\n");

    for( i =0; i <size; i++) {
        scanf("%d", &arr[i]);
    }

    //linear sorting 
    for(i = 0; i < (size -1 ); i++) {  
        for(j = 0; j< (size - i -1); j++) {    
            if( min > arr[j] )
            {
                //swapping
                arr[j] = arr[j]; 
            }
        }
		arr[j] = arr[i];
		arr[i] = min;
    }

    //display the result
    printf("The Bubble sorted array\n");
    for(i = 0; i < size ; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
             
