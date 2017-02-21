# include <stdio.h>

# if 1

int main() 
{
		typedef int *i;
		int j = 10;
		i *a = &j;    
		printf("%d", **a);
		putchar(10);
		return 0;
}
#endif

# if 0

int main() 
{
		typedef int *i;
		int j = 10;
		i k = &j; 
		i *a = &k;    
		printf("%d", **a);
		putchar(10);
		return 0;
}
#endif



