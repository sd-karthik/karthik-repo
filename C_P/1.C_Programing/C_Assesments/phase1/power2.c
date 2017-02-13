#include <stdio.h>

int main(void)
{
	int count = 0;
	int i;
	int num;

	printf("Enter no. to check power of 2\n");
	scanf("%d", &num);

//	num = num >> 1;
	
	for( i = 0; i < (sizeof(int) * 8) ; i++ )
	{
		if((( num >> i ) &1)== 1)
		{
			printf("loop %d : %d\n", i , num); 
			count++;
		}
}

	if( count == 1 )
	{
		printf("Power of 2\n");
		return 0;
	}

	printf(" Not Power of 2 \n");
	return 0;

}
