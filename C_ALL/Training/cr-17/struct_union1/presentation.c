#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//creation of structure

#if 0
typedef struct student {
	int rollno;
	int total;
}student;
int main ()
{
	student s1;
	struct student s2;
	return 0;
}
#endif
#if 0
struct point {
	int x;
	int y;
	int z;
};
int main()
{
	struct point p1 = {.y = 0,.x = 1,.z = 2};
	printf("%d%d%d\n",p1.x,p1.y,p1.z);
	return 0;
}
#endif
#if 0
struct comp {
	int folders;
	char name[10];
};
int main()
{
	struct comp access;
	access.folders = 200; 
	access.name[ ] = "globaledg";   
	printf("%s\n",access.name);
	printf("%d\n",access.folders);
	return 0;
}
#endif
#if 0
int main()
{
	struct {
		int i;
		char c;
	}myvar = {.c = 'A',.i = 100};
	printf("%d %c \n",myvar.i,myvar.c);
	return 0;
}
#endif
//finding the size of structure
#if 0
struct st {
	int x;
	static int y;
	const int z;
	register int a;
	volatile int b;
}head;
int main()
{
	printf("%d\n",sizeof(struct st));
	printf("%d\n",head.z);
	printf("%d\n",head.b);
	return 0;
}
#endif
#if 0
struct data {
	int a1;
	char s1;
	int *p;
	int arr[5];
}a[2];
int main()
{
	int start;
	int last;
	start =&a[1].a1;
	last = &a[0].a1;
	printf("size of structure : %d\n",start - last);
	return 0;
}
#endif
#if 0
struct book {
	char bookname[30];
	int contents;
	int pages;
};
struct book book = {"C by khernighan and richie",20,300};
int main()
{
	printf("size of structure : %d\n",sizeof(book));
	return 0;
}
#endif
#if 0
struct student {
	int id;
	char name[20];
	float percentage;
};
int main()
{
	struct student record = {0};
	printf("%d \n",sizeof(record));
	return 0;
}
#endif
//pointer to structure
#if 0
int main()
{
	struct company {
		char name[10] = "globalede";
		int employee = 200;
	};
	struct company *ptr;
	printf("%d\n",ptr -> employee);
	printf("%s\n",ptr->name);
	return 0;
}
#endif
#if 0
struct company {
	int employee;
	char name[10];
	float percentage;
}global,*edge;
void fun() 
{
	edge =&global;
	printf("name of company = %s\n",edge -> name);
	printf("no of employee =%d\n",edge->employee);
	printf("percentage of company = %f\n",edge->percentage);
	printf("name of company = %s\n",global.name);
	printf("no of employee =%d\n",global.employee);
	printf("percentage of company = %f\n",global.percentage);
}

int main()
{
	global.employee = 200;
	strcpy(global.name, "globaledge");
	global.percentage = 100;
	fun();

	return 0;
}
#endif
#if 0
struct data {
	int len;
	char *name;
}*ptr;
int main()
{
	ptr = (struct data *)malloc(sizeof(struct data) * 1);
	ptr -> len = 30;
	ptr -> name = "programming";
	printf("%d\n",ptr->len);
	printf("%s\n",ptr->name);
	printf("%d\n",++ptr->len);
//	printf("%d\n",(++ptr)->len);
//	printf("%d\n",(ptr++)->len);
	printf("%s\n",ptr->name);
	printf("%s\n",ptr->name++);
	printf("%s\n",(ptr->name)++);
	printf("%s\n",ptr++->name);
	return 0;
}
#endif

//operations on structure variables and passing the structures
#if 0
struct test {
	char str[20];
};
int main()
{
	struct test st1,st2,st3;
	//st3.str = "globalgdeg";
	strcpy(st1.str,"globaledge");
	st2 = st1;
	st1.str[0] = 's';
	printf("%s\n",st1.str);
	printf("%s\n",st2.str);
	printf("%s\n",st3.str);
	return 0;
}
#endif
#if 0
struct student {
	int id;
	char name[20];
	float percentage;
};
struct student fun(struct student record) 
{
	struct student ret;
	struct student ret1;
	ret = record; //copying the structure
	ret1.id = ret.id;
//	ret1.name = ret.name;
	strcpy(ret1.name, ret.name);
	ret1.percentage = ret.percentage;
	return ret1;
}
int main() 
{
	struct student record;
	struct student record1;
	record.id = 12345;
	strcpy(record.name, "globalegde");
	record.percentage = 100;
	record1 = fun(record);
	printf("id = %d\n",record1.id);
	printf("name = %s\n",record1.name);
	printf("percentage = %f\n",record1.percentage);
	return 0;
}
#endif
#if 0
struct company {
	int employee;
	char name[10];
	float percentage;
};
void fun(struct company *edge)
{
	printf("no of employee =%d\n",edge->employee);
	printf("name of company = %s\n",edge -> name);
	printf("percentage of company = %f\n",edge->percentage);
}
int main()
{
	struct company global;
	global.employee = 200;
	strcpy(global.name, "globalegde");
	global.percentage = 100;
	fun(&global);
	return 0;
}
#endif


#if 0
struct st {
	int x;
	struct st next;
};
int main()
{
	struct st temp;
	temp.x = 10;
	temp.next = temp;
	printf("%d\n",temp.next.x);
	return 0;
}
#endif
/*#if 0
struct node {
	int i;
	float j;
}(*s)[10];
int main()
{
	printf("%d\n",((s[0])->i));
}
#endif*/


//self referntioal structures
#if 0
struct node {
	int data;
	struct node *nextptr;
	struct node1 *nextptr1;
}node;
int main()
{
	node.nextptr = NULL;
//	printf("%p\n",node.nextptr);
//	printf("%p\n",node1.nextptr1);
	return 0;
}
#endif
#if 0

#endif
#if 0
struct book {
	char name[20];
	int pages;
	char author[10];
	float price;
};
int main()
{
	int i;
	struct book b[3] = {{},{"c in depth",700,"richie",200},
						{"C",500,"kernighan"} };
	b[0].name[1]= 'G';
	printf("%s\n",b[0].name);
	for(i = 0; i < 3; i++) {
	printf("name = %s\n",b[i].name);
	printf("pages = %d\n",b[i].pages);
	printf("author = %s\n",b[i].author);
	printf("price = %f\n",b[i].price);
	}


	return 0;
}
#endif
#if 0
int main()
{
	struct {
		int a[2];
	}arr[] = {{1},{2}};
	printf("%d %d %d %d \n",arr[0].a[0],arr[0].a[1],arr[1].a[0],arr[1].a[1]);
	return 0;
}
#endif
#if 0
int main()
{
	struct {
		int a[2];
	}arr[] = {1,2};
	printf("%d %d\n",arr[0].a[0],arr[0].a[1]);
}
#endif
#if 0
int main()
{
	struct {
		int a[2];
		int b;
	}arr[] = {[0].a = {1},[1].a = {2},[0].b = 1,[1].b = 2};
	printf("%d %d %d and",arr[0].a[0],arr[0].a[1],arr[0].b);
	printf("%d %d %d ",arr[1].a[0],arr[1].a[1],arr[1].b);
	return 0;
}
#endif
//nested structures
#if 0
struct t{
	struct x{
		int a;
	}in[5];
};
int main()
{
	struct t out;
	out.in[3].a = 345;
	printf("%d \n",out.in[3].a);
	printf("%d \n",(&out)->in[3].a);
	printf("%d \n",(((&out)->in)+3)->a);
	printf("%d \n",(((&out)->in)+3)->a);
	printf("%d \n",(&(out.in)[3])->a);
	printf("%d \n",*(&(out.in[3].a)));
	return 0;
}
#endif
//struct hack
#ifdef EX2 
struct employee {
	int emp_id;
	int name_len;
	char name[0];
};
int main()
{
	struct employee e;
	printf("%d \n",sizeof(e));
	return 0;
}
#endif
#ifdef EX1 
struct employee {
	int emp_id;
	int name_len;
	char name[0];
}s1;
int main()
{
	struct employee *e;
//	e = (char *)malloc(sizeof(char) *128);
	e = malloc(sizeof(*e) + sizeof(char)*128);
	strcpy(s1.name, "globaledge");
	strcpy(e->name, "global edge");
	printf("%s\n",e->name);
//	printf("%s\n",s1.name);
	return 0;
}
#endif










