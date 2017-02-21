#include <stdio.h>

int main()
{
	char *p = "hai";
	char q[] = "hello";
	int n;

	printf("Address of p ==> %08x\n", (unsigned ) p);
	printf("Address of q ==> %08x\n", (unsigned ) q);
	n = p - q;

	printf("%08x\n",(unsigned) n);
	return 0;
}
