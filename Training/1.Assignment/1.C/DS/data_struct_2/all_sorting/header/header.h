//header.h

//Header files 

//Author : Karthik

//DOC : 23/12/16

#include<stdio.h>
#include<stdlib.h>

#define NUM_MAX 100
#define M_ALLOC_C(str) str = (char *) malloc(sizeof(char ) * NUM_MAX)
#define M_ALLOC_I(str) str = (int *) malloc(sizeof(int ) * NUM_MAX)
#define VALID_MEM(str) if(NULL == str) {    \
                        printf("Error: Malloc Failed\n");}
#define VALID_FGETS(str) if(NULL == fgets(str, NUM_MAX, stdin)){    \
                            printf("Error: fgets Failed\n"); }

int selection_sort(int *, int );
int bubble(int *, int );
void swap(int *, int *);


