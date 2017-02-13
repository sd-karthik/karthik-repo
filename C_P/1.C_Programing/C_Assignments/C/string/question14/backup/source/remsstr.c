// remsstr.c

//function to remove substring in string

//DOC: 06/12/16

#include "header.h"

char *remsstr(char *str, const char *sstr)
{
	int pos;
	int count;
	int i;
	int j = 0;
	char *temp;

	temp = (char*) malloc( sizeof(char) * MAX);

	str_cpy(temp, str);
	printf("copied= %s\n", temp);	
	//for checking the substring sstr in the copy of the string(temp)
	printf("len=%d",(str_len(temp)-1));
	for(i = 0; i < str_len(temp)-1 ; i++, j++) {
		if( *(temp + i) == *(sstr + j)) {
			printf("insideif:*(temp+i)=%c\t*(sstr+j)=%c\n",*(temp+i),*(sstr+j));
			for(j = 0, count = 0; *temp; j++, i++) {
				if( *(temp + i) == *(sstr + j)) {
					count++;
					pos = i - count;
				}
				else {
					break;
				}
			}
		}
	}

	// for removal of the substring
	if(count == 0) {
		return str;
	}
	else {
		for(i = 0; i < pos; i++) {
			*(str + i) = *(temp + i);
		}
		for(i = pos + count; *temp; i++) {
			*(str + i) = *(temp + i);
		}
	*(str + i + 1) = '\0';
	}
	return str;
}
			
		
