# include <stdio.h>
#include <string.h>

int main()
{
		char  a[1] = "g";
		char  b[] = "edge";

		char * c = strcat(a,b);

		printf("String after concat ==> %s\n", a);

		return 0;
}
