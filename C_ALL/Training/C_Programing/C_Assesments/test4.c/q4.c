#include <stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct node{
	int data;
    struct node *lchild;
    struct node *rchild;
}NODE;

NODE *root = NULL;
NODE *new = NULL;
NODE *temp = NULL;

void display(NODE *current)
{
	NODE *temp1 = (NODE *) malloc(sizeof(NODE) * MAX);
	temp1 = current;

	printf("Preorder traversing Display\n");

	if((temp-> lchild != NULL) || (temp -> rchild != NULL))
	{
		printf("%d\t", temp-> data);
		display(temp1 -> lchild);
		display(temp1 -> rchild);
	}
}

int main()
{
    char *c_opt = (char *) malloc(sizeof(char) * MAX);
    int opt;

	root = (struct node *) malloc(sizeof(struct node) * MAX);
	temp=(struct node *) malloc(sizeof(struct node) * MAX);
	new =(struct node *) malloc(sizeof(struct node) * MAX);
    printf("1.delete\n2.display\nany other:quit\n");
    printf("enter option\n");
    fgets(c_opt, MAX, stdin);
    opt = atoi(c_opt);

    while(1)
    {
        switch(opt)
        {
            case 1: insert();
/                  break;
            case 2:	temp = root;
					 display(temp);
                    break;
            default: printf("quiting\n");
                     exit(0);
        }
    }
    return 0;
}
