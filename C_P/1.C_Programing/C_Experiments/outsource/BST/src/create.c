// Function to create a child

#include "myheader.h"

void create_child(void) {
	char *ele = NULL;
	M_ALLOC(ele);
	VALID_M_ALLOC(ele);
	
	NODE *create = NULL;
	M_ALLOC_S(create);
	VALID_M_ALLOC(create);

	printf("Enter the element:\n");
	fgets(ele, NUM_LENGTH, stdin);

	create->data = my_atoi(ele);
	create->l_child = NULL;
	create->r_child = NULL;

	insert_child(create);
}
