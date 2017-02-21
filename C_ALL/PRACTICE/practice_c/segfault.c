# include <stdio.h>

struct A {
		int a;
		int b;
		int c;
};
struct A * obj;

int main()
{
	obj = (struct A *) malloc (sizeof(struct A));
	obj -> a = 10;	
	printf("%d\n",obj -> a);
	return 0;
}
