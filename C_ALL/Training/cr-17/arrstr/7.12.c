#include<stdio.h>
#include<stdlib.h>

#define MAX 100

#if 1
void main()
{
	char a[3]= {'h', 'i', 'i'};
	
	printf("%c\n",a[6]);
}

#endif

#if 0

void main()
{
	printf(" %d\n");
}
#endif

#if 0

void main()
{
	char *buf = (char *) malloc(sizeof(char) * MAX);

	printf("Enter  string\n");
	fgets(buf, MAX, stdin);

	printf("%s\n", buf);
	printf("%c\n", *buf);
	printf("%p\n", buf);

}

#endif

#if 0  

void main()
{
	int *a = NULL;
//	*a = 10;
	
d	printf("%p\n", &a);
	printf("%d\n", a);
}

#endif

#if 0

void main()
{
	char buf[MAX];
		
	printf("Enter  string\n");
	fgets(buf, MAX, stdin);
	
	printf("%c\n", *buf);
	printf("%c\n", *(buf+1)+1);
}

#endif

#if 0 

void main()
{
	int a ;
	
d	scanf("%d", &a);
	printf("\n");
	printf("%d", a);
	printf("\n");
}
#endif

#if 0

void main()
{
	char a[10] ="global";
	printf("*a:%c\n *(a+1):%c\n &a:%p\n &a+1:%p\n *&a%p\n a[0]:%c\n *a+0:%c\n", *a, *(a+1), &a, &a+1, *&a, a[0], *a+0);

}

#endif

#if 0

void main()
{

	char *arr= "global";
	char arr1[] = "global";

	//*arr = 'c';
	// printf("%c", *arr);
	printf("%c", arr1[0]);
}

#endif

