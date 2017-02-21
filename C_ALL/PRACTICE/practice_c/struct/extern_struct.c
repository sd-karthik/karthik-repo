 # include <stdio.h>
struct demo {
		int a;
		int b;
};
extern struct demo obj;
int main()
{
		printf("%d\n%d\n", obj.a,obj.b);
		return 0;
}

