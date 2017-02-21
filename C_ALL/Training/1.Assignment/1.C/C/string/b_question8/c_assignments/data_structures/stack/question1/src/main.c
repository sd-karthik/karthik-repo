#include "header1.h"                                                                                                                                                                                                                              
int main()

{
	int value;	
	
	int  ch;

	printf("1:push\n2:pop\n3:display\n4:exit\n");

	scanf ("%d",&ch);
	switch(ch)
	{
		case 1 :	printf("enter value\n");
					scanf("%d",&value);
					push (value);
					main();
					break;

		case 2 :    pop ();
					main();
					break;
	
		case 3 : 	display();
					main();
					break;
	
		case 4 :    break;
		
		default :printf("invalid choice\n");    
			
		}		 
}

