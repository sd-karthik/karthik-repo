#include<stdio.h>

union endian
{
	int a;
	char b;
}e;

int main()
{
	e.a = 256;
	e.b = e.a;
    if (!(e.b))
		printf("little endian\n");
	else
		printf("big endian\n");
}
