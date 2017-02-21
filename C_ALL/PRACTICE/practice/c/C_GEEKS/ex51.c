#include <stdio.h>

int main(void)
{
		int i;
		int power_of_ten[5] = {	00001, 00010,00100,	01000,10000};

		for (i = 0; i < 5; ++i)
				printf("%d ", power_of_ten[i]);
		printf("\n");

		return 0;
}
