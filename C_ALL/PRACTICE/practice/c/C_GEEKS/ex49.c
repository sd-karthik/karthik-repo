# include <stdio.h>
int main()
{
		int i ;
		i = (printf("Hello"), printf(" All Geeks "));
		printf("\n i --> %d\n", i);

		i = printf("Hello"), printf(" All Geeks ");
		printf("\n i --> %d\n", i);

		return 0;
}
