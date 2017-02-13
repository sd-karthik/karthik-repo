#include <stdio.h>
#include <stdlib.h>

#define MAX 64

typedef struct link {
	struct link *next;
	struct link *prev;
}link;

typedef struct task {
	long state;
	int pid;
	int flags;
	int prio;
	unsigned char fpu_counter;
	struct link tasks;
	char rcu_read;
	int tgid;
	char comm[16];
	unsigned int rt_prio;
}task;

task *get_address(link *head,char *str);

int main()
{
	link *head;
	task *addr = NULL;
	task t;
	char *str = NULL;

	str = (char *)malloc(sizeof(char)*MAX);
	head = (link *)malloc(sizeof(link)*MAX);
	addr = (task *)malloc(sizeof(task)*MAX);

	head -> next = &(t.tasks);
	
	t.state = 60;
	t.pid = 10;
	t.flags = 0;
	t.prio = 1;
	t.fpu_counter = 'c';
	t.tasks.next = NULL;
	t.tasks.prev = NULL;
	t.rcu_read = 'r';
	t.tgid = 7;
	strcpy(t.comm,"geetha");
	t.rt_prio = 2;
	strcpy(str,"tasks");
	printf("%s\n",str);
	addr = get_address(head -> next,str);
	printf("%p\n",addr);
	task *t3 = NULL;
	
	printf("%d",*addr);
	return 0;
}

task *get_address(link *head,char *str)
{
	task t2;
	int m,n;
	printf("%s\n",str);
	m = &(t2.tasks);
	n = &t2;
	m = m - n;
	n = head;
	head = n-m;
	return head;
}

