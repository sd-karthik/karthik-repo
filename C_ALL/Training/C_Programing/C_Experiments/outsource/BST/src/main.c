
#include "myheader.h"

int main(void) {
	char *opt;
	M_ALLOC(opt);
	VALID_M_ALLOC(opt);
	
	root = NULL;
	M_ALLOC_S(root);
	VALID_M_ALLOC(root);

	printf("----BINARY SEARCH TREE----\n");
	while (1) {
		printf("Select the operation to perform:\n");
		printf("1. Insert\n2. Display\n3. Delete\n4. Exit\n");
		fgets(opt, MAX, stdin);

		switch (a2i(opt)) {
		case 1:
			create_child();
			break;
		case 2:
			if (root) {
				display_tree(root);
			} else {
				printf("Tree doesn't exist\n");
			}
			break;
		case 3:
			delete_node();
			break;
		case 4:
			printf("Program is closed\n");
			exit(0);
		default:
			printf("Invalid input!\n");
		}
	}

	return 0;
}
