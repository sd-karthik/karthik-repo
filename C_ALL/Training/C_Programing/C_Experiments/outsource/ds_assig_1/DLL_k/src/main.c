//main.c

//Program of double link list 

//Author: Karthik

//DOC: 09/12/16

#include "header.h"

struct node *current = NULL;// (struct node *)malloc(MAX*sizeof(struct node));   
struct node *head = NULL;//(struct node *)malloc(MAX*sizeof(struct node));   
	
int main()
{
	int element;	//Element into the node
	int option;		//select option
	int pos;		//position
	int no = 0;		//Node Increment count
	char *c_ele = (char *) malloc (sizeof(char) * MAX);
	char *copt = (char *) malloc (sizeof(char) * MAX);
	char *cpos = (char *) malloc (sizeof(char) * MAX);

	printf("Double Linked List\n");
	printf("Enter your option\n");

	while(1){
		printf("1.Insert at begining\n"
				"2.Insert at endnode\n"
				"3.insert at position\n"
				"4.display\n5.exit\n"
				"6.insert after given position\n"
				"7.position before inserted\n"
		    	"8.Insert at the mid node\n"
				"9.Penultimate node\n"
 				"10.Insert before num\n"
				"11.insert after a given num\n"
				"12.del at beg\n"
				"13.del at end\n"
				"14.DEL at Pos\n"
				"15.del before pos\n"
				"16.del afetr pos\n"
				"17.del mid node\n"
				"18.del penultimate node\n"
				"19.del bef ele\n"
				"20.del after ele\n");
	
	fgets(copt, MAX, stdin);
	option = a2i(copt);
	
		switch(option)
		{
			// Insert at the beginning
			case 1 :printf("Enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);
					no++;
				 	inbeg(element);
					break;
				
			//Insert at the end
			case 2 :printf("Enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);					
					no++;
					inend(element);
					break;
			
			
/*			case 3 :printf("Enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);
					no++;
					printf("position to be inserted\n");
					fgets(cpos, MAX, stdin);
					pos = a2i(cpos);
					if (pos > no)
						printf("invalid position\n");
					else
						posnode(element,pos);		
					break;
*/
			//Display of double linked list
			case 4 :display();
					break;

			case 5 :exit(0);
			
/*			case 6 :printf("Enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);
					no++;
					printf("position after to be inserted\n");
					fgets(cpos, MAX, stdin);
					posnode(element,num+1);		
					break;

			case 7 :printf("enter value for node\n");
					fgets(c_ele, MAX, stdin);c_ele = a2i(c_ele);
					no++;
					printf("position before to be inserted\n");
					fgets(cpos, MAX, stdin);
					posnode(element,num-1);		
					break;

			case 8 :printf("enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);
					no++;
					posnode(element,(no/2)+1);		
					break;

			case 9 :printf("enter value for node\n");
					fgets(c_ele, MAX, stdin);
					element = a2i(c_ele);
					no++;
					posnode(element,(no-1));		
					break;

			case 10 :printf("value of node\n");
					 fgets(c_ele, MAX, stdin);
					 element = a2i(c_ele);
					 printf("enter search element\n");
					 fgets(cpos, MAX, stdin);
					 pos = a2i(pos);
					 no++;
				     selementinb(element,pos);	
				     break;

			case 11 :printf("value of node\n");
					 fgets(c_ele, MAX, stdin);
					 element = a2i(c_ele);
					 printf("enter search element\n");
					 fgets(cpos, MAX, stdin);
					 pos = a2i(pos);
					 no++;
				     selementina(element,pos);	
				     break;

			case 12 :no--;
					 delbeg();
					 break;
			
			case 13 :no--;
					 delementnd();
					 break;

			case 14 :printf("enter pos\n");
					 scanf("%d",&num);
					 no--;
					 delpos(num);
					 break;
	
			case 15 :printf("enter pos\n");
					 scanf("%d",&num);
					 no--;
					 delpos(num-1);
					 break;
			case 16 :printf("enter pos\n");
					 scanf("%d",&num);
					 no--;
					 delpos(num+1);
					 break;
                       
			case 17 :no--;
					 delpos((no/2)+1);
    				 break;

			case 18 :no--;  
					 delpos(no);
					 break;
            
			case 19 :no--;
					 printf("enter search elementment\n");
					 fgets(c_ele, MAX, stdin);
					 element = a2i(c_ele);
					 delbel(element);
					 break;    
												
			case 20 :no--;
					 printf("enter search elementment\n");
					 fgets(c_ele, MAX, stdin);
					 element = a2i(c_ele);
					 delael(element);
					 break;    
*/												
			default:printf("invalid input\n");
					 break;	
		}
	}
	return 0;
}	
