#include<stdio.h>

void fun()
{
	int a[1] = {8};
	int c = 4;
 	int b[2] = {5, 7};
	
	b[b - a] = 3;
	printf("value at b[%d] ==> %d\n", b-a, b[b-a]);

	printf(" address of a ==> %p\n", a);
	printf(" address of b ==> %p\n", b);
	printf(" address of c ==> %p\n", &c);
	printf(" address of b[%d] ==> %p\n", a-b, &b[a-b]);
	printf(" address of b[%d] ==> %p\n", b-a, &b[b-a]);


	printf("value at b[3] ==> %d\n", b[3]);

	printf("value at a %d\n",  a[0]);
	b[a - b] = 6;

	printf("value at b[%d] => %d\n",  a-b, b[a-b]);
	printf("value at a %d\n",  a[0]);
	return ; 
} 
int main()
{
	int a;
	
	fun();
	
	a=5;
	printf("%d\n",a);
	return 0;
}
