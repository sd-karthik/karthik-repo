# include <stdio.h>

# define NUM(num)   ((num << 3 )| num)
int main()
{

		int num = 7;
		num = NUM(num);
		printf("%d\n", num);
		return 0;
}
