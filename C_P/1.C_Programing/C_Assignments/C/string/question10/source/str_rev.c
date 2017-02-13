#include"header.h"

void str_rev(char* str1, char* str2, int n)
{
	int i;
	for(i=0; i <n; i++) {
		str2[i] = str1 [n-i-1];
	}
}
