#include "header1.h"                                                            
                                                                                
extern int f;
extern int r;
extern count;
void dequeue (void)                                                          
                                                                                
{
	int ele;                                                                               
    if (count == 0) 
        printf("queue empty\n");                                                 
    else{
		if (f == (limit-1))
		f = -1;
		f++;
		count--;
		ele = queue[f];
		
		printf("queue[%d]:%d \n",f,ele);                                                         
		
        }                                                                       
}                                                                               
                                                                                
      
