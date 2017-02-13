#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct node{
	char *str;
	struct node *next;
	struct node *prev;
}NODE;

NODE *head = NULL;
NODE *temp = NULL;
NODE *new = NULL;


void insert()
{
	int count = 0;
	int pos = 0;
	char *c_pos = (char*) malloc(sizeof(char ) * MAX);
	char *c_ele = (char*) malloc(sizeof(char ) * MAX);

	head = (struct node *) malloc(sizeof(struct node ));
	temp = (struct node *) malloc(sizeof(struct node ) * MAX);
	new = (struct node *) malloc(sizeof(struct node ) * MAX);

	printf("Enter the position\n");
	fgets(c_pos, MAX, stdin);
	pos = atoi(c_pos);
	
	printf("Enter the elements\n");
	fgets(c_ele, MAX, stdin);	

	if(head -> next == NULL)
	{
		head -> next = temp;
		temp -> prev = NULL;
		temp -> next = NULL;
		strcpy(temp->str, c_ele);
	}

	else{
		temp = head;
		
		while(temp->next != NULL)
		{
			if(pos == count)
			{
				new -> next = temp -> next;
				new -> prev = temp;
				strcpy(new->str, c_ele);
				temp-> next-> prev = new;
			}
			temp = new;
			return;
		}
		count++;
	}
	printf("Position not found\n");
}		

void display()
{
	temp = head;
	
	if(temp != NULL)
	{
		temp = temp -> next;
		display();
	}
	else {
		printf("%s ", temp -> str);
	}
}

void delet()
{
	int count = 0;
	int pos = 0;

	while(temp -> next != NULL)
	{
		temp = temp -> next;
		count++;
	}

	while(temp -> next != NULL)
	{
		if(count == pos)
		{
			temp-> prev-> next = temp-> next;
			temp-> next-> prev = temp-> prev;
			free(temp);
			return;
		}
		else {
				pos++;
		}
	}

}	

int main()
{
	char *c_opt = (char *) malloc(sizeof(char) * MAX);
	int opt;
	
//	temp->str = (char *) malloc(sizeof(char ) * MAX);

	printf("1.Insert\n2.delete\n3.display\n");
	printf("enter option\n");
	fgets(c_opt, MAX, stdin);
	opt = atoi(c_opt);
	
	while(1)
	{
		switch(opt)
		{
			case 1: insert();
					break;
			case 2: delet();
					break;
			case 3: display();
					break;
			default: printf("invalid\n");	
					 exit(0);
		}
	}
	return 0;
}

