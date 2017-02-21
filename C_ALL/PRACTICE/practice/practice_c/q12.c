/***********************************************bit field concept*********************************************/

#include <stdio.h>

int main(void)
{
	struct str{
		int i: 1;
		int j: 2;
		int k: 3;
		int l: 4;

	};

	struct str s;

	s.i = 0;
	s.j = 2;
	s.k = 7;
	s.l = 10;

	printf(" i: %d \n j: %d \n k: %d \n l: %d \n", s.i, s.j, s.k, s.l);
	printf(" size %d \n", sizeof(s));

	return 0;
}
