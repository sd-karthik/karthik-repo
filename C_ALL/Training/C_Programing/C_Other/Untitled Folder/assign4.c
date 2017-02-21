#include<stdio.h>

extern int showbit(int num);

void even_bit_toggle (int num ); // decleration of function
void odd_bit_toggle (int num); //decleration of function

int main()
{

	int num ;

	printf("enter a number");
	scanf("%d",&num);
	even_bit_toggle (num);//calling a function
	odd_bit_toggle  (num);// calling a function
	return 0;
}

void even_bit_toggle(int num) //function defnition
{

int i;

	for(i = 31; i >= 0; i--) {

		if(i % 2 == 0)	{
                  num = ((1<<i)^num); //toggling even bits
		
		}

 	}
       printf("\n even toggled number: \n");
        showbit(num);
    
}

void odd_bit_toggle(int num) //definition of function
{

    int i;
    
    for(i = 31; i >= 0; i--) {
 
     if(i % 2 != 0) {
                num = ((1<<i)^num);  //toggling odd bits
    }
    
    }
           printf("\n odd toggled number: \n");
           showbit(num);
}
         


