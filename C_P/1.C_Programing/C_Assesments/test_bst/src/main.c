//main.c

//Binary Search Tree :Test

//Author : Karthik

//DOC: 14/12/201

#include "header.h"

NODE *root = NULL;       //root node pointer
NODE *current = NULL;    //current node pointer  
NODE *next = NULL;		//next node pointer

int main()
{
	int ele; 			//to insert the element
	char *cele = NULL;			
	int opt;			//options
	char *copt = NULL;

	cele = (char *) malloc(sizeof(char)*MAX);

	MEM_ALLOC(root);
	MEM_ALLOC(current);
	MEM_ALLOC(next);

	while(1) {
		printf("******* Binary Search Tree ******* \n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		fgets(copt, MAX, stdin);
		opt = a2i(copt);
//		scanf("%d", &opt);
	
		switch(opt) 
		{
			case 1: printf("Insertin...\n");
					printf("Enter the element to insert\n");	
					fgets(cele, MAX, stdin);
					ele = a2i(cele);
//					scanf("%d", &ele);
					create(ele);
					break;

			case 2: printf("Deletion...\n");
					printf("Enter the element to delete\n");
					fgets(cele, MAX, stdin);
					ele = a2i(cele);
//					scanf("%d", &ele);
					delet(ele);
					break;
				
			case 3: printf("Display...\n");
					display(root);
					break;

			case 4: return 0;
		}
	}
	return 0;
}
