#include<stdio.h>

int main()
{
	int i =0;
	char ch[4] = { 1,2,3,4};

	int *n = & ch[0];

//	for(i =0; i < 4; i++)
	printf("%d ", (n + i));

	return 0;
}
