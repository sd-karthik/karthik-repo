# include <stdio.h>

int main(void)
{

		int a = 12;
		void * ptr = (int *)&a;
		printf("%d\n", *ptr);

		return 0;
}
