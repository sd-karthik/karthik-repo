#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "helzlo";
	char ch = 'a';
	int ret ;

	ret = strchr(str, ch);

	printf("%s\n", ret/*strchr(str, ch)*/);

	return 0;
}

