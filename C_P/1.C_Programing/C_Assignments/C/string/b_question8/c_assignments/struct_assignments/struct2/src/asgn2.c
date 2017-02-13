#include <stdio.h>
#pragma pack(1)

union sample 
{
	int a:5;
	int b:10;
	int c:5;
	int d:21;
	int e;
}a1;

int main()

{
	a1.e = 15;
	printf("%d:size of union\n%d:a\n%d:10\n%d:c\n%d:d\n%d:e"
	,sizeof(a1),a1.a,a1.b,a1.c,a1.d,a1.e);
}
