# include <stdio.h>

# define MAX_SIZE (8 * sizeof(int) - 1)

# define ADD(a,b) while(b = ((((a ^= b) ^ b) & b) << 1))
int main()
{
		int a = 10 , b = 20;
		int i;
		ADD(a,b);
		for ( i = MAX_SIZE ;i >= 0; i--) {
			printf("%d",((1 << i)& a)?1:0);
		}
		printf("\n");
		return 0;
}
