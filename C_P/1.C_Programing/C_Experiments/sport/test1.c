#include <stdio.h>

void fun();

int main()
{
	int a = 10;	
	int b= 20;	
	fun();
	printf("%d\n",a);
	printf("%d\n",b);
}

void fun()
{

	int a[1];
	__asm__("movl $0x804844f, %ebp"
        "");
	//printf("%d", a[1]);
//	a[10] = 20;

}
