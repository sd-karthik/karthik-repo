 #include <stdio.h>

int main()
{
		int a = 10;
		int * p = &a;
		printf("%p %p %d %p\n", &p, p, *p, &a);
		return 0;
}
