#include "header1.h"
extern int f;
iextern int r;
extern count;
void display(void)
{
	int x;
	int temp;
	temp =count;
	x = f+1;
	if (count != 0){
		printf("elements are : \n ");
		while (temp){
			printf("%d\t",queue[x]);
			x++;
			temp--;
			if(x == (limit))
			x=0;
		}
	}
		else{
				printf("queue empty\n");
			}
	
		
}




