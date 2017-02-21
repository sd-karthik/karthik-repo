#include "header1.h"                                                                                                                                                                                                                              

int main()


{
	int ele;	
			
	int  ch;

	 
	printf("1:enqueue\n2:dequeue\n3:display\n4:exit\n");

	scanf ("%d",&ch);
	switch(ch)
	{
		case 1 :	printf("enter value\n");
					scanf("%d",&ele);
					enqueue (ele);
					main();
					break;

		case 2 :    dequeue ();
					main();
					break;
	
		case 3 : 	display();
					main();
					break;
	
		case 4 :    break;
		
		default :printf("invalid choice\n");    
			
		}		 
}

















