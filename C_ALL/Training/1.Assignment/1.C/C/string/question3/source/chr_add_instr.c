// function to find first occurence of the character

#include"stdio.h"

char *chr_add_instr(char *buf, char c)
{
	int i;

	for(i = 0; buf[i] ; i++) {
		if(buf[i] == c) {
			return (buf+i);
		}}
//		printf("char not found\n");
	return 0;
	
}
