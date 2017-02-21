# include <stdio.h>
# include <string.h>

int main()
{
		char  ptr[] = "global edge software ltd";

		memmove (ptr + 20, ptr , 5);
		puts(ptr);
		return 0;
}
