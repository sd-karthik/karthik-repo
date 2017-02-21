#include <stdio.h>

int main(void)
{
	int i;
	int power_of_ten[5] = {
							0x0001,
							0x00A,
							00100,
							01000,
							010000,
						};
	
	for (i = 0; i < 5; ++i)
		printf("%x ", power_of_ten[i]);
	printf("\n");
	
	return 0;
}
