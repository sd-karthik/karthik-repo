#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int res;
	long long int lres;
	int res2;
	
	printf("num1, num2\n");
	scanf("%d%d", &num1, &num2);

	res = ((~num1) + 1) * ((~num2) + 1);
	lres = (num1 * num2);
	/*if(res < 0)
		res2 = (~res) + 1;
*/
	printf("\nActual product: %d * %d = %lld\n", num1, num2, lres);
	printf("\nproduct: %d * %d = %d\n", num1, num2, res);
	printf("\n2's Complement = %d\n", ((~res) + 1));
//	showbit(res2);
	return 0;
}
