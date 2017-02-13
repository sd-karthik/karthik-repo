#include<stdio.h>

extern int showbit(int num);
void main()
{
	int num;
	int s,c,t;
	int res;
	
	printf("enter num \n");
	scanf("%d", &num);
	showbit(num);
	printf("enter set,clear,toggle\n");
	scanf("%d%d%d",&s, &c ,&t);
	printf("\n");
	res=(((num | (1 << s)) & (~(1 << c))) ^ (1<<t));
	showbit(res);
}
