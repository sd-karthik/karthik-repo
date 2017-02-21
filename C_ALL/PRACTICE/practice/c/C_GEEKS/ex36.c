#include <stdio.h>

#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))

int array[] = {1, 2, 3, 4, 5, 6, 7};

int main()
{
		int i;

		for(i = -1;i <= (TOTAL_ELEMENTS-2); i++)
				printf("%d\n", array[i+1]);

		return 0;
}

