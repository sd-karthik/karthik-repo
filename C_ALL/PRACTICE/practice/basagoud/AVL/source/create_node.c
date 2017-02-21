# include "header.h"

struct list * create_new_node()
{
		struct list * new_node = NULL;

		if(NULL == (new_node = (struct list*) malloc(sizeof(struct list)))) {
				perror("Malloc error\n");
				exit(2);
		}

		printf("Enter the value\n");
		scanf("%d", &(new_node -> key));
		
		new_node -> right = NULL;
		new_node -> left = NULL;
		new_node -> height = 1;

		return new_node;
}

