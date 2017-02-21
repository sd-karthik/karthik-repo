#include"header.h"

int main()
{
	int opt;
	int element;
	front = -1;
	rear = -1;

	printf("Welcome to Queue\n");
	while(1) {
		printf("Enter your option\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\nChoose other option to exit\n");
		scanf("%d", &opt); 
		
		printf("top=%d\n", front);
	
    	switch(opt)                            
    	{                                                        
        	case 1 : printf("Enqueue operation\n");      
					 printf("Enter the element to insert\n");
                	 scanf("%d", &element);
          	       	 enqueue(element);  
            	     break; 
                           
			case 2 : printf("Dequeue operation\n"); 
        	         element = dequeue();
					 printf("Deleted element is = %d\n", element);
					 break;                                        
                                                              
        	case 3 : printf("Display of Queue\n");
            	     disp();                                  
            	     break;                           
                                                               
       		default: printf("Exiting\n");
            	     exit(0);
	    } 
	}
	return 0;                                                          
}
