//File : header.h

//Name :  Header file for Binary Search Tree program

//Author : Karthik

//DOC : 15/12/16

// headerguards
#ifndef _header_h
#define _header_h 1

// C header files
#include <stdio.h>
#include <stdlib.h>

// MACRO definitions
#define NUM_MAX 5
#define MEM_ALLOC(str) str = (char *) malloc(sizeof(char) * NUM_MAX)
#define VALIDATE_MEM_ALLOC(str) if (!(str)) {\
					printf("Memory allocation failed!\n");\
					exit(1);\
				}
#define MEM_ALLOC_S(str) str = (NODE *) malloc(sizeof(NODE))

// Structure definition for tree
typedef struct tree {
	int data;
	struct tree *l_child;
	struct tree *r_child;
}NODE;
struct tree *root;

// Function declarations
int a2i(char *);
int str_len(char *);
void create(void);
void insert(NODE *);
void display(NODE *);
void delet(void);

#endif
