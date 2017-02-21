//program Operations on single linked list 

#include"header.h"

struct node{
	int data;
	struct node *link;
}arr[10];

void main()
{
	int choice; // user choice
	int item; 	//item value

	printf("Welcome to SLL(Single Linked List)\n");
	printf("Enter your option\n");	//options

	printf("1. Insert at the beginning\n");
	printf("2. Insert at the end\n");
	printf("3. Insert at a given position\n");
	printf("4. Insert before a given position\n");
	printf("5. Insert after a given position\n");
	printf("6. Insert before a given number\n");
	printf("7. Insert after a given number\n");
	printf("8. Insert at the middle\n");
	printf("9. Insert at penultinate node\n");	
	pritnf("Any other number to exit\n");
	ch = getchar(stdin);

	choice = char_int(ch);

	switch(choice)
	{
	
		case 1: printf("Inserting at the beginning\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				in_beg(item);
				printf("Inserted Successfully\n");
				break;

		case 2: printf("Inserting at the end\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				in_end(item);
				printf("Inserted Successfully\n");
				break;

		case 3: printf("Inserting at given position\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				printf("Enter the position \n");
				scanf("%d", &pos);
				in_pos(item, pos);
				printf("Inserted Successfully\n");
				break;

		case 4: printf("Inserting before the given position\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				printf("Enter the position \n");
				scanf("%d", &pos);
				in_before(item, pos);
				printf("Inserted Successfully\n");
				break;

		case 5: printf("Inserting after the given position\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				printf("Enter the position \n");
				scanf("%d", &pos);
				in_before(item, pos);
				break;

		case 6: printf("Inserting before the given number\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				printf("Enter the number \n");
				scanf("%d", &num);
				in_before(item, num);
				break;
					
		case 7: printf("Inserting after the given number\n");
				printf("Enter the node element to insert\n");
				scanf("%d", &item);
				printf("Enter the number \n");
				scanf("%d", &num);
				in_before(item, num);
				break;
		
