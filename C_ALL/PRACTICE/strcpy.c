# include <stdio.h>
# include <string.h>
int main()
{
		char a[8] = "hihello";
		strcpy(&a[3], a);
		printf("%s\n", a);
		return 0;
}
