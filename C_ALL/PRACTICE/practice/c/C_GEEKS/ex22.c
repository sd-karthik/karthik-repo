# include <stdio.h>

int main(void)
{
		void arr[100];

		arr[90] = 100;

		printf("%d\n", (int*) arr[90]);
		return 0;
}
