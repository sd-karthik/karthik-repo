//sort.c

//All sorting methods

//DOC : 20/12/16

//Author : Karthik

/*
#include<stdio.h>
#include<stdlib.h>

#define NUM_MAX 10s
#define M_ALLOC_C(str) str = (char) malloc(sizeof(char *) * MAX)
#define M_ALLOC_I(str) str = (int) malloc(sizeof(int *) * MAX)
#define VALID_MEM(str) if(NULL == str) {	\
						printf("Error: Malloc Failed\n");}
#define VALID_FGETS(str) if(NULL == fgets(str, MAX, stdin)){	\
							printf("Error: fgets Failed\n"); }
*/
#include "header.h"

int main(void)
{
	char *c_option = NULL;
	int option;
	char *c_number = NULL;
	int number;	
	char *c_size = NULL;
	int size;
	int *array = NULL;
	int i;

	M_ALLOC_C(c_option);
	VALID_MEM(c_option);
	M_ALLOC_C(c_number);
	VALID_MEM(c_number);
	
	while(1) {
		printf("--------------------------------------------\n");	
		printf("------------- SORTING METHODS --------------\n");
		printf("--------------- MAIN MENU ------------------\n");
		printf("1.BUBBLE\n2.SELECTION\n3.INSERTION\n4.MERGE\n5.QUICK"
			   "\n6.Exit\n");
		printf("Enter your option\n");
 	
		VALID_FGETS(c_option);
		option = atoi(c_option);

		printf("Enter size of array\n");
		VALID_FGETS(c_size);
		size = atoi(c_size);

		array = (int) malloc(sizeof(int) * size);
		
		printf("Enter the elements into thE ARRAY\n");
		for( i = 0; i < number; i++)
		{
			VALID_FGETS(c_number);
			array[i] = atoi(c_number);
		}
		while(1) {
			switch(option)
			{
				case 1 ://Bubble Sorting method
						bubble_sort(array, size);

				case 2 ://Selection Sorting
						selection_sort(array, size);	
	
/*				case 3 : //insertion sorting
						insertion_sort(array, size);
	
				case 4 : //merge sorting
						merge_sort(array, size);

				case 5 : //quick sorting 
						quick_sort(array, size);
*/
				case 6 : //Exit the program
						printf("Program Exiting\n");
						return 0;

				default: //Invalid case
						printf("Invalid option\n");
			
			}
 		}
	}
		
		return 0;
}
