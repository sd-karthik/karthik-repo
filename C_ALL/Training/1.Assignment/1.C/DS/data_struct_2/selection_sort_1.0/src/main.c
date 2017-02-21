//main.c   

//Program of selection sorting     

//Author: Karthik
                                         
//DOC: 08/12/16 
 
#include "header.h" 

int main(void) 
{ 
    int arr[MAX];		//Array with MAX number of elements 
	char c_arr[MAX];
	char c_size[MAX];
    int size;			//size of the array 
    int i;				//loop variable 
 	
	printf(BLUE "---------------------------------------\n" RESET );
    printf(GREEN "******* Selection Sorting *******\n" ); 
 
    //Array input 
    printf("Enter the size of the array\n" RESET);     
/*	if(fgets(size, MAX, stdin) == NULL) 
	{
		printf(RED "fgets failed!\n" RESET);
		exit(0);
	}
	size = a2i(c_size);
 */
	scanf("%d", &size);
    printf(GREEN "Enter the elements into the array\n" RESET); 
/*    for( i = 0; i < size; i++) { 
    	if((fgets(&c_arr[i]), MAX, stdin) == NULL) 
		{
			printf(RED "fgets failed!\n" RESET);
			exit(0);
		}
	} 
 */
    for( i = 0; i < size; i++) { 
 //   	arr[i] = a2i(c_arr[i]);
		scanf("%d", &arr[i]);
	}

	//Selection sorting function call 
    selection(arr, size); 
 
    //display the result 
    printf(GREEN "The Selection sorted array\n" RESET); 
    for( i  = 0; i < size; i++) {
		printf("%d\n", arr[i]); 
    }

	printf(BLUE "------------------------------------------\n" RESET);
 
    return 0; 
}

