# include <stdio.h>

int main()
{
		int num1 = 7;
		int num2 = 8;

		printf("%d\n", ((num1 | num2) & ~(num1 & num2)));
		return 0;
}
