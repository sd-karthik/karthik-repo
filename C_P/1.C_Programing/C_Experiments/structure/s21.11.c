#include<stdio.h>

#pragma pack(1)

#if 0
stuct batch
{
	int id;
	char name[100];
	char batch_id[10];
} e1, e2, college[10];

void main()
{
	int i = 0;
	batch e2 = {502, "kk", "cr_17"};
	e1.name[10] = "Karthik";
	e1.id = 5041;
	e1.batch_id = {"cr_17"};
	
	for(i = 0; i < 10; i++)
		{
			scanf("%d", &colleg[i].id);
			//scanf("%s", &college[i].name):
			//scanf("%s", &collge[i].batch_id);
			fgets(college[i].batch_id, 10, stdin);
			fgets(college[i].name, 10, stdin);			

		}
	for(i = 0; i < 10; i++)
	{
		printf("%d", colleg[i].id);
		printf("%s", college[i].name):
		printf("%s", collge[i].batch_id);
			
	}
#endif

#if 0
// Snippet:23.11.16

struct batch
{
	int x;
	char ch;
	char arr[];
};

int main()
{
	struct batch e1, *e2, e3[10];
	e1.x = 1;
	e1.ch = 'a';
	e1.arr="abcdefghi";
	e2 = &e1;
i	
	printf("e2->%d\t(*e2).x->%d\n", e2-> x, (*e2).x);
	printf("e2->%c\t, (*e2).x->%c\n", e2-> ch, (*e2).x);
	printf("e1=%s\n",e2->arr);
i	return 0;
}
#endif

#if 0
// structure q1
void main()
{
	struct tag{
		int num = 10;
	} var = {5};
	printf("var.num = %d\n(&var) -> num = %d\n", var.num, (&var)->num);
}

#endif		
