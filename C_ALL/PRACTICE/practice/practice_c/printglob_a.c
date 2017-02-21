# include <stdio.h>

int a = 10;
int main()
{
		int a = 5;
		{
				extern int a;
				printf("%d\n",a);
		}
		return 0;
}
