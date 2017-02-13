// stack program
#include"header.h"

int main(void)
{
	int opt;
	int element;
	top = -1;
	
	printf("Welcome to stack\n");
	while(1) {
	printf("Enter your option\n");
	printf("1.PUSH\n2.POP\n3.DISPLAY\nANY OTHER NUMBER TO EXIT\n");
	scanf("%d", &opt);
	printf("top=%d\n", top);
	
	
	switch(opt)
	{
		case 1 : printf("PUSH operation\n");
				 printf("Enter the element to push\n");
				 scanf("%d", &element);
				 push(element);
				 break;

		case 2 : printf("POP operation\n");
				 element = pop();
				 printf("POPED element is = %d\n", element);
				 break;

		case 3 : printf("Display of stack\n");
				 disp();
				 break;

		default: printf("Exiting\n");
				 exit(0);
	}
	}
	return 0;
}
				 
