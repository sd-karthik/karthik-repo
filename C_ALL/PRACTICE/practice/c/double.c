# include <stdio.h>

union abc{
		double d;
		int i;
}a;

int main()
{
		a.d = 3.14;
		a.i = 50;

		printf("double ==> %.20lf\n", a.d); 
		printf("Int ==> %d\n", a.i);

		int * p = &a;

		int i;
		for(i = 31 ; i >= 0; i--) {
				printf("%d", ((*p & (1<< i)) ? 1 : 0));
		}
		p++;
		printf("\n");
		for(i = 31 ; i >= 0; i--) {
				printf("%d", ((*p & (1<< i)) ? 1 : 0));
		}

		return 0;
}
