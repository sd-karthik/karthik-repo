#include "header1.h"

char *insert(char *str,const char ch, int pos)

{	
	int i=0;
	int j=0;
	while(*(str+i) !='\0'){
	if (i == pos){
		*(str+j) = ch;
		j++;
	}	
	else
		*(str+j) = *(str+i);

	j++;
	i++;
	}
	
	return str;

}
