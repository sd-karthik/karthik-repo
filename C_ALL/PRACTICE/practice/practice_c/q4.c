/********************************double have different fechting mechanism from memory not like int******************************/

#include<stdio.h>

typedef union
{
	double PI;
	int B;
}MYUNION;


int main()
{
	MYUNION numbers;
	numbers.PI = 3.14;
	numbers.B = 50;
	
	printf("B===========%d\n",numbers.B);
	printf("PI==========%lf\n",numbers.PI);
	return 0;
}
