//display.c

//Binary Search Tree : Display Function

//Author : Karthik

//DOC : 14/12/16

#include "header.h"

extern struct node *root;       //root node pointer
extern struct node *current;    //current node pointer  
extern struct node *next;       //next node pointer

void display(struct node *next)
{
	/*if(root == NULL) {
	while( root != current) {

		if((current -> lchild != NULL) || (current -> rchild != NULL))
		{	
			while((current->lchild != NULL) || (current->rchild != NULL))
			{
				if( current->lchild != NULL)
				{
					next = current->lchild;	
					current = next;
					display();
				}
				else {
					next = current->rchild;
					current = next;
					display();
				}
			}
		}
		else {
			printf("%d\t", current -> data);
		}
	}
*/

	if(next != NULL)
	{
		printf("%d\n", next -> data);
		
		display(next ->rchild);
		display(next ->lchild);
	}
		
}
