#include<stdio.h>

int main()
{
		char arr[] = "geeks\0 for geeks";
		char *str = "geeks\0 for geeks";
		printf ("arr = %s, sizeof(arr) = %d \n", arr, sizeof(arr));
		printf ("str = %s, sizeof(str) = %d", str, sizeof(str));
		putchar(10);
		return 0;
}
