#include<stdio.h>
# if LOGN2
unsigned int Log2n(unsigned int n)
{
		return (n > 1)? 1 + Log2n(n/2): 0;
}

int main()
{
		unsigned int n = 3;
		printf("%u", Log2n(n));
		putchar(10);
		return 0;
}
#endif

# if LOGN

unsigned int Logn(unsigned int n, unsigned int r)
{
		return (n > r-1)? 1 + Logn(n/r, r): 0;
}

int main()
{
		unsigned int n = 256;
		unsigned int r = 4;
		printf("%u", Logn(n, r));
		putchar(10);
		return 0;
}
#endif
