#include<stdio.h>
#include<stdlib.h>

#define MAX 100

void endnode(int );

struct node{
	int data;
	struct node *next;
	struct node *before;
};

