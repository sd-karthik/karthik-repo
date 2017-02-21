#include <stdio.h>
struct st{
	int i;
	int j;
	float f;
	int k;
	char ch;
}p = {1,2,.k=4, 5.0};


int main()
{
//	struct st p = {1,2,.k=4, 5.0};

	printf("%f\n", p.f);
}
