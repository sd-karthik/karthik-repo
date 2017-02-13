//main.c

//Binary Search Tree

//Author : Karthik

//DOC: 12/12/2016

#include "header.h"

struct node *root = NULL;       //root node pointer
struct node *current = NULL;    //current node pointer  

int main()
{
	int ele;		//to insert the element
	char *cele = NULL;			
	int opt;		//options
	char *copt = NULL;

	printf("Binary Tree \n");
	printf("1.Insert\n2.Display\n3.Exit\n");
	copt = fgetc();
	opt = a2i(copt);
	
	switch(opt) 
	{
		case 1: printf("Insertin...\n");
				printf("Enter the element to insert\n");	
				cele = fgetc();
				ele = a2i(cele);
				binary(ele);
				break;

		case 2: printf("Display...\n");
				//display();
				break;

		case 3: exit(0);

	}

	return 0;
}
