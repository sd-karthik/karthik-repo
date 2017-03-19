//File: header.h

//header files for binary tree

//Author: Karthik

//DOC : 14/12/16

#ifndef  _header_h
#define _header_h 1


#include <stdio.h>
#include <stdlib.h>


#define MAX 10		//Maximum value as 100
#define M_ALLOC(str) str = (NODE *) malloc(sizeof(NODE))
#define VALID_M_ALLOC(str) if (!(str)) {\
					printf("Memory allocation failed!\n");\
					exit(1);\
				}

int create(int );	//insertion function declaration
void delet(NODE *);	//deletion function declaration
void display();		//Display function
int a2i(char *);
int str_len(char *);

typedef struct node{
    int data;               //data to store integer value
    struct node *rchild;    /*self referential pointer for 
                                left child address storage*/
    struct node *lchild;    /*self referential pointer for
                                 left child address storage*/
}NODE;
#endif
