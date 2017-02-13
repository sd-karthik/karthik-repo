#include<stdio.h>

void arith(int a, int **b, int *add, int* sub, int* mul)
{
	*add = a + **b;
	*sub = a - **b;
	*mul = a ***b;
}

int main(void)
{
	int a;
	int b;
	int sum;
	int diff;
	int prod;
	int *p= &b;	
	printf("Enter the values for a,b\n");
	scanf("%d%d", &a, &b);

	arith(a, &p, &sum, &diff, &prod);

	printf("a+b=%d\na-b=%d\na*b=%d\n", sum, diff, prod);
	
	return 0;
}
