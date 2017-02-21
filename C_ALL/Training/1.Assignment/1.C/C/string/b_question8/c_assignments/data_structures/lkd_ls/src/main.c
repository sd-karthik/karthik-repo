#include <stdio.h>
#include <stdlib.h>                                                                                                                             
#define MAX 50

struct node{                                                                    
    int data;                                                                   
    struct node *next;                                                          
    }; 


void endnode(int ele);
void insbeg(int ele);
void display(void);
void posnode(int ele,int num);
void seleinb(int ele,int sele);
void seleina(int ele,int sele);
void delbeg(void);
void delend(void);
void delpos(int num);
void delbel(int sele);
void delael (int sele);
struct node *current = NULL;// (struct node *)malloc(MAX*sizeof(struct node));   
struct node *head = NULL;//(struct node *)malloc(MAX*sizeof(struct node));   
	


int main()
{
	int ele;
	int sele;
	int ch;
	int num;
	int no=0;
	while(1){
		printf("1.insert at begining\n2.endnode\n"
			   "3.insert at position\n4.display\n5.exit\n"
		       "6.insert after given position\n7.position before inserted\n"
		       "8.enter mid node\n9.penultimate node\n10.Insert before num\n"
		       "11.insert after a given num\n12.del at beg\n13.del at end\n"
			   "14.DEL at Pos\n15.del before pos\n16.del afetr pos\n"
			   "17.del mid node\n,18.del penultimate node\n19.del bef ele\n"
			   "20.del after ele\n");

		scanf("%d",&ch);
				
		switch(ch)
		{
			case 1 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
				 	insbeg(ele);
					break;
	
			case 2 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					endnode(ele);
					break;
	
			case 3 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					printf("position to be inserted\n");
					scanf("%d",&num);
					if (num > no)
					printf("invalid position\n");
					else
					posnode(ele,num);		
					break;

			case 4 :display();
					break;

			case 5 :exit(0);
			
			case 6 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					printf("position after to be inserted\n");
					scanf("%d",&num);
					posnode(ele,num+1);		
					break;

			case 7 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					printf("position before to be inserted\n");
					scanf("%d",&num);
					posnode(ele,num-1);		
					break;

			case 8 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					posnode(ele,(no/2)+1);		
					break;

			case 9 :printf("enter value for node\n");
					scanf("%d",&ele);
					no++;
					posnode(ele,(no-1));		
					break;

				
			case 10 :printf("value of node\n");
					 scanf("%d",&ele);
					 printf("enter search element\n");
					 scanf("%d",&sele);
					 no++;
				     seleinb(ele,sele);	
				     break;

			case 11 :printf("value of node\n");
					 scanf("%d",&ele);
					 printf("enter search element\n");
					 scanf("%d",&sele);
					 no++;
				     seleina(ele,sele);	
				     break;

			case 12 :no--;
					 delbeg();
					 break;
			
			case 13 :no--;
					 delend();
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
					 printf("enter search element\n");
					 scanf("%d",&sele);
					 delbel(sele);
					 break;    
												
			case 20 :no--;
					 printf("enter search element\n");
					 scanf("%d",&sele);
					 delael(sele);
					 break;    
												
			default:printf("invalid input\n");
					 break;	
		}
	}
	return 0;
}	
	
void endnode(int ele)
{
	struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));
	if(head == NULL){
		temp->data = ele;
		temp->next = NULL;
		head = temp;
		current = temp;
	}
	else{
		temp->data = ele;
		temp->next = NULL;
		current->next =  temp;
		current = current->next;
	}
}

void display(void)
{	
	int num1=0;	
	struct node *disp;		

	disp = head;
	while(disp != NULL){
		num1++;
		printf("linked list element %d is %d\n",num1,disp->data);
		disp = disp->next;
	}
}

void insbeg(int ele)
{                                                                                                                    
    struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));         
	if(head == NULL){                                                           
        temp->data = ele;                                                       
        temp->next = NULL;                                                      
        head = temp;                                                            
        current = temp;                                                         
    }                                                                           
    else{    	                                                         
    	temp->data = ele;                                                       
    	temp->next = head;                                                     
	    head = temp;                                                       
	}
} 

void posnode(int ele,int num)
{	
	struct node *pos=NULL;
	struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));
	int nval=1;

	pos = head;

	if (num == 1){
	   temp->data = ele;                                                       
       temp->next = pos;
	   head = temp; 
	}
	else{
		while(nval < (num-1)){
			pos = pos->next;
			nval++;
		}
		temp->data = ele;
		temp->next = pos->next;
		pos->next = temp;
	}
}

void seleinb(int ele,int sele)                                         
{                                                                               
    struct node *pos=NULL;                                                      
    struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));         
    struct node *prv=NULL;                                                                 
   
	pos = head;                                                                 
                                                                                
    while(pos->data != sele){                                                      
   		prv = pos;
		pos = pos->next;                                                                                                                            }                                                                           
    temp->data = ele;                                                           
    temp->next = pos;                                                     
    prv->next = temp;                                                           
                                                                                
}

void seleina(int ele,int sele)                                                  
{                                                                               
    struct node *pos=NULL;                                                      
    struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));         
    struct node *prv=NULL;                                                      
    pos = head;                                                                 
                                                                                
    while(pos->data != sele){                                                                                                                   
	    pos = pos->next;                                                            
    }                                                                           
    temp->data = ele;                                                           
    temp->next = prv;                                                           
    pos->next = temp;                                                           
                                                                                
}                                                                               
                                                                                
void delbeg(void)
{	
	if(head == NULL)
		printf("list empty\n");
	else{
	struct node *vac=NULL;
	printf("link list element cleared :%d\n",head->data);
	vac = head;
	head = head->next;
	free(vac);
	}
}  

void delend(void)
{
	struct node *prv = NULL;
	if(head == NULL)
	printf("empty list\n");
	else{
		current = head;
		prv = current->next; 
		while (prv->next != NULL){
		current = prv;
		prv = current->next;
		}
	free(prv->next);
	current->next = NULL;
	}	
}
void delpos(int num)
{                                                                               
    struct node *pos=NULL;                                                      
    struct node *vac=NULL;         
    int nval=1;                                                                 
	if (num == 1){
		delbeg();
	} 
	else{                                                                               
    	pos = head;
		vac = pos->next;                                                                 
    	while(nval < (num-1)){   
			pos = vac;                                               
			vac = pos->next;                                                    
        	nval++;                                                             
        }                                                                       
        pos->next = vac->next;
		free(vac);                                                                                                           
   }                                                                        
} 

                                                                               
void delbel(int sele)                                                  
{                                                                               
    struct node *pos=NULL;                                                      
    struct node *prv=NULL;                                                      
    struct node *vac=NULL;                                                                            
    pos = head;                                                                 
    vac = head;                                                                            
    while(pos->data != sele){                                                   
        prv = vac;
		vac = pos;                                                              
        pos = pos->next;                                                                                                                            }
    prv->next = pos;
	free(vac);                                                           
                                                                                
}                                                                               

void delael (int sele)                                                           
{                                                                               
    struct node *pos=NULL;                                                      
    struct node *prv=NULL;                                                      
                                                         
    pos = head;                                                                 
                                                                       
    while(pos->data != sele){                                                   
                                                                    
       	prv = pos;                                                              
        pos = pos->next;                                                                                                                            }
    prv = pos->next;
	pos->next = prv -> next;                                                            
    free(prv);                                                                  
                                                                                
}  
 
