# include <stdio.h>
# if 0

int main()
{
		int a[2];
		a[3] = 6523;
		printf("a[2] ==> %d\n", a[2]);
		printf("a[3] ==> %d\n", a[3]);

		return 0;
}
# endif

#if 1 
int a [2];

int main()
{

		auto fun();
		printf("In main function\n");
		auto fun( ){
				printf("In auto function\n");
				a[3] = 6523;
				printf("a[2] ==> %d\n", a[2]);
				printf("a[3] ==> %d\n", a[3]);
				return ;
		}
		fun();
		return ;
}
# endif

