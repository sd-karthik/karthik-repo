#include<stdio.h>

void fun()
{
	int a[1] = {6};
	int c = 4;
 	int b[2] = {5, 7};
	
	b[b - a] = 3;
	printf("value at b[%d] ==> %d\n",b-a, b[b-a]);
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
