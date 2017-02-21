#include<stdio.h>

#if ex1
void main()
{

	while(1)
	{
		fprintf(stdout, "Output");	
		fprintf(stderr, "error");
		sleep(1);
	}
}
#endif

#if ex2

void main()
{

	int a = 1;
	
	do{
		printf("%d\n",a);
		scanf("%d", &a);
	}while(a == 1);
}
#endif
