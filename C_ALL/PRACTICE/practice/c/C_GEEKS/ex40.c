#include<stdio.h>
int main()
{
		int x = 56, p = 10;
		int size = printf("%-*d %d", x, p, 20);

		printf("\nsize ==> %d", size);

		putchar(10);
		return 0;
}
