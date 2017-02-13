#include<stdio.h>

int showbit(int num)
{

	int i;

	for(i =(sizeof(int)*4)-1; i >= 0; i--)
	{
		if( (i+1) % 8 == 0)
		{
			printf(" ");
		}
		
		printf("%d", 1 & (num >> i));
	}

	return 0;
}

int main()
{

	int num;

	scanf("%d", &num);

	printf("\nnum= %d\nBits=\n", num);
	showbit(num);

//	num = ~(~(num)-1);
	num = -~num;

	printf("\nnum = %d\n", num);
	showbit(num);

	return 0;

}
