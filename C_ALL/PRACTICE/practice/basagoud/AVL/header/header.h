#ifndef __HEADER__H
#define __HEADER__H

# include <stdio.h>
# include <stdlib.h>

struct list {
		int key;
		struct list * left;
		struct list * right;
		int height;
};

struct list * create_new_node();
struct list * insert_node(struct list * , struct list * );
void display(struct list * );
int getBalance(struct list * );
int height(struct list * );
int max(int , int );
struct list * leftRotate(struct list * );
struct list * rightRotate(struct list * );

#endif
