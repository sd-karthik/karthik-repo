#include	<stdio.h>

#define foo(m, n) #m ## #n

int main()
{
		char * kl = "hello";

	printf("%s\n", foo(k, l));

}
