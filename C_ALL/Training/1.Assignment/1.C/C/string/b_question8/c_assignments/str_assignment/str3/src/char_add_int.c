#include "header1.h"

char *char_add_instr(char *buf , char c)
{
	
    
	while(c != *buf){
		if(*buf++ == '\0'){
			printf("not found\n");
			exit(0);
		}
	}
    printf("character found:\n");
		return buf;




}
