//checking the scope of static by declaring local or global

#include <stdio.h>
/* scope of variable if static is used local*/
#if 0
int main()
{
	static int a = 5;
	printf("address of a is %p\n",&a);
	printf("a = %d\n",a);
	
	{
	static int a = 10;
	printf("address of a is %p\n",&a);
	printf("a = %d\n",a);
	}
	printf("address of a after block is %p\n",&a);	
	printf("a = %d\n",a);
	
	return 0;
}
# endif
/*scope of variable if static is used global*/
#if 0
extern int fun();
extern int b;
static int a = 3;
int main()
{
	printf("address of a is %p\n",&a);
	printf("a = %d\n",a);
	{
	int a = 10;
	printf("address of a is %p\n",&a);
	printf("a = %d\n",a);
	}
	fun();
	return 0;
}
//int fun()
//{
//	printf("a = %d\n",a);
//	
//	return 0;
//}
# endif
