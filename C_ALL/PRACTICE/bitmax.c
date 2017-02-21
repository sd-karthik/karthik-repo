#include <stdio.h>

# if 1
#define MAX (-1)>>1
int main()
{
		int x = -16;
		int i;
		for(i = (8 * sizeof(int) - 1); i >= 0; i--) 
				printf("%d",((1 << i) & x) ? 1 : 0);
		printf("\n");
		return 0;
}
#endif 
#if 0
#define O_MASK 0x55555555
#define E_MASK 0xaaaaaaaa
int main ()
{
		int i ;
		int num = 0;
		int num1 = 15;
		num = (num | O_MASK);
		for(i = 31; i >=0 ;i--)  {
				printf("%d", ((1 << i) & num)? 1 : 0);
				if(i % 8 == 0)
						printf(" ");
		}
		printf("\n");
		for(i = 31; i >=0 ;i--)  {
				printf("%d", ((1 << i) & num1)? 1 : 0);
				if(i % 8 == 0)
						printf(" ");
		}

		printf("\n");
		num1 = ((num1 | E_MASK) & ~(O_MASK));
		for(i = 31; i >=0 ;i--)  {
				printf("%d", ((1 << i) & num1)? 1 : 0);
				if(i % 8 == 0)
						printf(" ");
		}
		printf("\n");

		 for(i = 31; i >=0 ;i--)  {
			printf("%d", ((1 << i) & num1)? 1 : 0)
					if(i % 8 == 0)
						printf(" ");
			printf("\n");
		return 0;
} 
#endif

