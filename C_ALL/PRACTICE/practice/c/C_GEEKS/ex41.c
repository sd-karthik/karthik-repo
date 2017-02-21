# include <stdio.h>

int main()
{
		int c = 15;
		printf("%d\n%d\n%d", c, c <<= 2, c >>= 2);
		putchar(10);
		return 0;
}

