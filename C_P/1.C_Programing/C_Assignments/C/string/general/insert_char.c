#include"header.h"

char* insert_char(char *str, char ch, int p)
{
	int i;
	int length = str_len(str);

	for(i = (length - 1); i >= p; i --)
		str[i+1] = str[i];
	str[p] = ch;
	str[length + 1] = '\0';
	
	return str;
}
