# include <stdio.h>
void fun1()
{
	return ;
}

void fun2()
{
		fun1();
}

void fun()
{
		fun2();
}
void main()
{
		fun();
}
