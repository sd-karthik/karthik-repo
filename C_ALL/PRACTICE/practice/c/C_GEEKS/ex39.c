#include <stdio.h>
int main()
{
		char str[] = "geeksforgeeks";
		int i;
		for(i=0; str[i]; i++)
				printf("\n%c%c%c%c", str[i], *(str+i), *(i+str), i[str]);

//		printf("\n");
		putchar(10);
		return 0;
}

