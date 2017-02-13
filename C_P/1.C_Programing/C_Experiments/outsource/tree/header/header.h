#include <stdio.h>
#include<stdlib.h>

#define MAX 100

int a2i(char *);

void binary(int );

void creat();

void display();

struct node{                // Structure declaration
    struct node *lchild;    //left child address pointer
    struct node *rchild;    //right child address pointer
    int data;               //data storing
};


