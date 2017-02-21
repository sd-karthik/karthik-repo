#include<stdio.h>
#include<stdlib.h>

#if 1
int divint(int, int);

int main()
{
        int x;
        int y;

        printf("enter variables to divide\n");
        scanf("%d%d", &x, &y);

        printf("result=%d\n", divint(x, y));

        x = 3;
	y = 0;

	printf("result=%d\n", divint(x, y));
	
	return 0;
}

int divint(int a, int b)
{
	return a / b;
}
#endif

#if 0
int main()
{
        int *p = NULL;
        printf("pid = %d\n", getpid());
        getchar();
        printf("%d",*p);
        return 0;
}
#endif


