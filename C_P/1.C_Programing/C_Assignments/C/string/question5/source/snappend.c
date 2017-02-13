#include"header.h"

char* snappend(char *src, char *dst, int size)
{
	int d_len = str_len(dst) - 1;
	int s_len = str_len(src); 
	int i;
	int j;

	for(i = d_len, j = 0; i < (size + d_len); i++, j++) {
		*(dst+i) = *(src+j);
	}
	
	*(dst + d_len + size) = '\0';	

	return dst;
	
}
