// Function to create a child

#include "header.h"

void create(void) 
{
	char *ele = NULL;
	MEM_ALLOC(ele);
	VALIDATE_MEM_ALLOC(ele);
	
	NODE *create = NULL;
	MEM_ALLOC_S(create);
	VALIDATE_MEM_ALLOC(create);

	printf("Enter the element:\n");
	fgets(ele, NUM_MAX, stdin);

	create->data = a2i(ele);
	create->l_child = NULL;
	create->r_child = NULL;

	insert(create);
}
