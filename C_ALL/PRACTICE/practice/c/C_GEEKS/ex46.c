#include<stdio.h>
int fun()
{
		static int num = 40;
		return num--;
}

int main()
{
		for(fun(); fun(); fun())
		{
				printf(" %d \n", fun());
		}
		putchar(10);
		return 0;
}
