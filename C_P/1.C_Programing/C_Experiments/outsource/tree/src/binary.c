//File : binary.c

//Name : Binary Search Tree

//Author : Karthik

//DOC : 13/12/16

#include "header.h"

extern struct node *root ;       //root node pointer
extern struct node *current;    //current node pointer  

void create()
{
	
	root = current;	
	current->lchild = NULL;
	current->rchild = NULL;
}

void binary(int ele)
{
	struct node *next;

	while(1)
	{
		if( root == NULL )
		{
			create();
			current -> data = ele;
		}

		else if( (current->lchild == NULL ) && (current->rchild == NULL))
		{
			if(current->data < ele)
			{
				current -> rchild = next;
				next -> data  = ele;
				next -> lchild = NULL;
				next -> rchild = NULL;
				current = next;
				break;
			}

			else {	
				current -> lchild = next;
				next -> data  = ele;
				next -> lchild = NULL;
				next -> rchild = NULL;
				current = next;
				break;
			}
		}
	}
}

/*void display()
{
	printf("Display 
*/
