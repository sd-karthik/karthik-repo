//delet.c

//Binary Search Tree : Function for deletion

//Author : Karthik

// DOC: 14/12/16

#include "header.h"

extern struct node *root ;       //root node pointer           
extern struct node *current ;    //current node pointer          
extern struct node *next;       //next node pointer   

void delet(int ele)
{
	if( current->data != ele)
	{
		while(current->data != ele)
		{
			if(current->data > ele)
			{
				next = current -> lchild;
				current = next;
				delet(ele);
			}
			else {
				next = current -> rchild;
				current = next;
				delet(ele);
			}
		}
	}
}
