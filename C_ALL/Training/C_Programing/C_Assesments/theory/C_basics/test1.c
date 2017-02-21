#include<stdio.h>
#include<stdlib.h>

#if ex1
void main()
{
	int num;
	
	printf("Enter a num\n");
	scanf("%d", &num);

	if(( num >> (sizeof(int)*8) -1) && 1)
	{
		printf("Negative\n");	
	}
	else {
		printf("Poisitive\n");
	}
}
#endif

#if ex2
void main()
{
	int num;
	
	printf("Enter a num\n");
	scanf("%d", &num);
	
	if( num & 1)
	{
		printf("ODD\n");
	}
	else {
		printf("EVEN\n");
	}
}
#endif
		
