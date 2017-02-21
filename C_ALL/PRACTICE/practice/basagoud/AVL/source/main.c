# include "header.h"

int main(void)
{
		struct list * root = NULL;
		struct list * new_node = NULL;

		int choice;
		do {
				printf("----------MENU------------\n");
				printf("1: INSERT\n2:DISPLAY\n3:EXIT\n");
				printf("--------------------------\n");

				printf("Enter choice\n");
				scanf("%d", &choice);

				switch(choice) { 
						case 1 : 
								new_node = create_new_node();
								root = insert_node(root, new_node);
								break;
						case 2 :
								display(root);
								printf("\n");
								break;
						case 3:
								exit(2);
				}
		}while(1);
	return 0;
}
