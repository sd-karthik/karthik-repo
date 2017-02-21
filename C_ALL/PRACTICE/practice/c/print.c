#include <stdio.h>
# include <string.h>

int main()
{
		char * str = "hello";

		char * temp = NULL;
		int j = 1;

		while(j <= strlen(str)) {
				temp = str;
				while(*temp) {
						printf("%.*s\n", j, temp);
						temp++;
						if(strlen(temp) < j) {
								break;
						}
				}
				j++;
		}
		return 0;
}

