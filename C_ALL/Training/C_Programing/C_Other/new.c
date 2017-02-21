#include<stdio.h>
#if 0
void main()
{
	int a = 10;
	a=5++;
	printf("%d",a);
//	int a[100] = { [10 ... 20] = 10, [30 ... 40]= 20};
//	printf("%d %d %d %d\n", a[9], a[29], a[10], a[30]);

}
#endif

#if 0
int a = 5;

int main()
{
    int a=10;

  {
        extern int a;
        printf("global: %d\n", a);
    }
    printf("local: %d\n", a);
    return 0;
}
#endif

#if 1
int a;
int main(void)
{
    int i;
    if(scanf("%d",i))
	{
		printf("%d", i);
	}
}
#endif
