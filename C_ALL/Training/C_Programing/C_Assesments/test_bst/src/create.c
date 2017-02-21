// Function definition for creating a child

#include "myheader.h"

void create_child(int element) {
	char ele[10];

	NODE *create = NULL;
	M_ALLOC(create);
	VALID_M_ALLOC(create);

	create->l_child = NULL;
	create->r_child = NULL;

	insert_child(create);
}
