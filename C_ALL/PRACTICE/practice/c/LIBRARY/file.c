# include <stdio.h>
# include <mylib.h>

int main()
{
		int a = 10;
		int b = 20;
		int sum ;
		int diff;

		sum = add(a, b);
		
//		diff = sub(a,b);
		diff = add(a,10);
		printf("%d %d\n", sum , diff);
		
		return 0;
}
