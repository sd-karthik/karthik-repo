//function to append 2 strings

#include"header.h"

char* sappend(char *src, char *dst)
{
	int d_len = str_len(dst)-1;
	int s_len = str_len(src)-1; 
	int i;
	int j;

	for(i = d_len, j = 0; i <= (s_len + d_len); i++, j++)
		dst[i] = src[j];

	return dst;	//returns address of dst
}
