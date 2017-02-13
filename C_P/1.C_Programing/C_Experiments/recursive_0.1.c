#include <stdio.h>

int recurse(int num)
{
	while(num == 2);

	return num * recurse(num-1);
}

int main(void)
{
	int res = 0;
	int num;

	printf("enter the num\n");
	scanf("%d",&num);

	res = recurse(num);

	printf("%d\n", res);
 return 0; 
}
