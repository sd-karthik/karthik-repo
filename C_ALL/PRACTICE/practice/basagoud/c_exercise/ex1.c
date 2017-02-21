#include <stdio.h>
int main()
{
	int x = 6, y = 13, r;
//	r = y ^ ((x ^ y) & -(x < y));
	r = y ^ ((x ^ y) & ((x < y)?0xffffffff:0x0));
	printf("min:%d \n", r);
	return 0;
}
