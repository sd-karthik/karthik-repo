#include <stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct node{
    int data;
    struct node *link;
}NODE;

NODE *temp = NULL;
NODE *head = NULL;

void delet(struct node *);

int main()
{
    char *c_opt = (char *) malloc(sizeof(char) * MAX);
    int opt;

	temp = (NODE *) malloc(sizeof(NODE)*MAX);
	temp = (NODE *) malloc(sizeof(NODE)*MAX);
    
	printf("delete the right of largest data node\n");
    printf("enter option\n");
    fgets(c_opt, MAX, stdin);
    opt = atoi(c_opt);

    while(1)
    {
        switch(opt)
        {
            case 1: delet(temp);
	                break;
//	        case 2: temp = head;
//                  display(temp);
//                  break;
            default: printf("quiting\n");
                     exit(0);
        }
    }
    return 0;
}

void delet(struct node *temp)
{
	struct node *temp1 = (struct node*) malloc(sizeof(struct node) * MAX);
	temp1 = temp -> link;
	
	while(temp -> link != NULL)
	{
		if(temp -> data > temp1 -> data)
		{
			head = temp1 -> link;
			temp -> link = temp1 ->link;
		}
		else
		{
			temp = temp -> link;
			temp = temp1 -> link;
		}
	}
}
