# include <stdio.h>
int main()
{
		int first = 50, second = 60, third;
		third = first /* Will this comment work? */ + second;
		printf("%d /* And this? */ \n", third);

		putchar(10);
		return 0;
}
