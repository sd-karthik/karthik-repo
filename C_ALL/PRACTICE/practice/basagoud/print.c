# include <stdio.h>

int main(void)
{
		char i;
		int num = -2147483649;

		num = printf("%20d\n", num);
		printf("%d\n", num);


		for (i = sizeof(int)*8 - 1 ; i >= 0; i--)
				printf("%d", (num & (1 << i) )? 1 : 0);
		return 0;
}
