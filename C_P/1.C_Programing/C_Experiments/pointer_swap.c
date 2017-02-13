#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}

int main(void)
{
	int a;
	int b;
	
	printf("Enter 2 values to swap\n");
	scanf("%d%d", &a, &b);

	printf("The numbers before swap num1=%d\tnum2=%d\n", a, b);
	swap( &a, &b );
	
	printf("The numbers after swapping, num1=%d\tnum2=%d\n", a, b);
	return 0;
}
