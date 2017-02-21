#include<stdio.h>
#define PRINT(...) fprintf(stdout,__VA_ARGS__)
int main()
{

	int num = 10;

	PRINT("x....%d\n%d\n%f\n",num,(num - 1),12.324);

	return 0;
}
