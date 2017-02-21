/* Program for rounding floating point numbers */
# include<stdio.h>

int roundNo(float num)
{
		return num < 0 ? num - 0.5 : num + 0.5;
}

int main()
{
		float num = -1.23423;
		num = (float)roundNo(num);
		printf("%f",num);
		putchar(10);
		return 0;
}

