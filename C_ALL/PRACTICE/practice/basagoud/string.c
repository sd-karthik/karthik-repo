# include <stdio.h>

int main()
{
		char str[2][20] = {"hello world"};

		char ** p = (char **)&str;
		printf("%.5s\n", (char*)p);

		return 0;
}
