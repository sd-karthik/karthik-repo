//File: header.h

//header files for binary tree

//Author: Karthik

//DOC : 14/12/16

#ifndef  _header_h
#define _header_h 1

#include <stdio.h>
#include <stdlib.h>

// MACRO definitions
#define MAX 5
#define M_ALLOC(str) str = (char *) malloc(sizeof(char) * NUM_LENGTH)
#define VALID_M_ALLOC(str) if (!(str)) {\
					printf("Memory allocation failed!\n");\
					exit(1);\
				}
#define M_ALLOC_S(str) str = (CHILD *) malloc(sizeof(CHILD))

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
void create_child(void);
void insert_child(CHILD *);
void display_tree(CHILD *);
void delete_node(void);
