//File : main.c

/*Name : Binary Search Tree with function

 1. Insert
 2. Delete
 3. Display
*/

//Author: Karthik

//DOC : 15/12/16

#include "header.h"

int main(void)
{
	char *opt;
	MEM_ALLOC(opt);
	VALIDATE_MEM_ALLOC(opt);
	
	root = NULL;
	MEM_ALLOC_S(root);
	VALIDATE_MEM_ALLOC(root);

	printf("******* Binary Search Tree *******\n");
	while (1) {
		printf("Select the operation to perform:\n");
		printf("1. Insert\n2. Display\n3. Delete\n4. Exit\n");
		fgets(opt, NUM_MAX, stdin);

		switch (a2i(opt)) {
			case 1:
					create();
					break;
			
			case 2:
					if (root) {
					display(root);
					} else {
					printf("Tree doesn't exist\n");
					}
					break;
			
			case 3:
					delet();
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
