# include <stdio.h>

int main()
{
	char str[8];
	int num =  scanf("%4s", str);
	
	num = printf("num ==> %d string ==> %s\n", num, str);

	printf("num ==> %d\n", num);

	return 0;
}
