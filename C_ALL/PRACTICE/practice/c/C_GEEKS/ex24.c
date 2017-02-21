# include <stdio.h>

int add(int x, int y)
{
		return printf("%*c%*c",  x, ' ' ,  y, ' ');
}

int main()
{
		int num;
		int num2;

		printf("Enter first number\n");
		scanf("%d", &num);
		printf("Enter second number\n");
		scanf("%d", &num2);
		printf("\nSum = %d", add(num, num2));
		putchar(10);
		return 0;
}
