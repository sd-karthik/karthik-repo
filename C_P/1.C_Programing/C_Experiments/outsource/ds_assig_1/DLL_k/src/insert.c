#include "header.h"

extern struct node *current;
extern struct node *head;

void inbeg(int ele)
{                                                       
	struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));
	if(head == NULL){   
		temp->data = ele;     
		temp->next = NULL;      
		temp->before = NULL;
		head = temp;
		current = temp;  
	}                                                        
	else{                                                   
		temp->data = ele;                                          
		temp->next = head;
		temp->before = NULL;
		head->before = temp;                                        
		head = temp;                                           
	}
} 

void inend(int ele)
{
	struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));
	if(head == NULL){
		inbeg(ele);
	}
	else{
		temp->data = ele;
		temp->before = current;
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

void posnode(int ele,int num)
{	
	struct node *pos=NULL;
	struct node *temp = (struct node *)malloc(MAX*sizeof(struct node));
	int nval=1;

	pos = head;

	if (num == 1){
		inbeg(ele);
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
		pos = pos->next;          
	}
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
