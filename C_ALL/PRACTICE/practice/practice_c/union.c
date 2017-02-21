#include <stdio.h>

struct val{
	char val : 2;
	int val1 : 3;
}new;
union val1{
	char val : 2;
	int val1 : 3;
}new1;

int main()
{
	printf("size - %d\n", sizeof(new));
	printf("size1 - %d\n", sizeof(new1));
	return 0;
}
	
