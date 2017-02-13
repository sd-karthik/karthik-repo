5//File : insert.c

//Name : Binary Search Tree : Insertion Function

//Author : Karthik

//DOC : 14/12/16

#include "header.h"

extern NODE *root;       //root node pointer
extern NODE *current;    //current node pointer  
extern NODE *next;       //next node pointer

 *create()
{

	current->lchild = NULL;
	current->rchild = NULL;
	current -> data = 0;
	return current;
}

void insert(int element)
{
//	struct node *next;

	if( root== NULL )
	{
		current = create();
		root = current;                                                      
	    current -> data = element;
		printf("%d is Inserted\n", current->data);                              
     }                                                                           
                                                                                  
    else if( (current->lchild == NULL ) && (current->rchild == NULL))           
    {                                                                           
 		if(current->data < element)                                             
		 {                                                                       
	        current -> rchild = next;       
			next = create();                                                    
    		next -> data  = element;                                            
 //          next -> lchild = NULL;                                              
//          next -> rchild = NULL;                                              
			printf("%d is rprecious\n", current->data);                         
		    current = next;                                                     
			printf("%d is Inserted\n", next->data);                                                                        
         }                                                                       
                                                                                
        else {                                                                  
	            current -> lchild = next;                                           
	            next = create();                                                    
	            next -> data  = element;    
   	 //          next -> lchild = NULL;                                              
	 //          next -> rchild = NULL;                                              
	             printf("%d is rprecious\n", current->data);                         
				printf("%d is Inserted\n", current->data);	
	}

	else if( (current->lchild == NULL ) && (current->rchild == NULL))
	{
		if(current->data < element)
		{
			current -> rchild = next;
			next = create();
			next -> data  = element;
//			next -> lchild = NULL;
//			next -> rchild = NULL;
			printf("%d is rprecious\n", current->data);
			current = next;
			printf("%d is Inserted\n", next->data);	
		
		}

		else {	
			current -> lchild = next;
			next = create();
			next -> data  = element;
//			next -> lchild = NULL;
//			next -> rchild = NULL;
			printf("%d is rprecious\n", current->data);
			current = next;
			printf("%d is Inserted\n", next->data);	
		
		}
	}

}
