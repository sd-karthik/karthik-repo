// Function to insert a child into the tree

#include "myheader.h"

void insert_child(CHILD	*create) {
	CHILD *insert = NULL;
	MEM_ALLOC(insert);
	VALIDATE_MEM_ALLOC(insert);

	
	if (root == NULL) {
		root = create;
	} else {
		insert = root;
		while (1) {
			if ((create->data) > (insert->data)) {
				if ((insert->r_child) == NULL) {
					insert->r_child = create;
					break;
				} else {
					insert = insert->r_child;
				}
			} else {
				if ((insert->l_child) == NULL) {
					insert->l_child = create;
					break;
				} else {
					insert = insert->l_child;
				}
			}
		}
	}
}
