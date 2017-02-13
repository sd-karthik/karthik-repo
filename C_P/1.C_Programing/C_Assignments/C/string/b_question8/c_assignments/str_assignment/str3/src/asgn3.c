//to return the address of the first occurrence of character 'c' in the given string buf

#include"header1.h"

int main()

{
	char n[MAX];
	char *sbu=NULL;//source string
    char *add;// buffer to hold address
	char c;//charcter
		
	printf("enter string\n");
	
	
	if (NULL == (sbu = (char *)malloc(sizeof(char)))){
		printf("malloc failed\n");
		exit(0);
	}
	if ((NULL == fgets(sbu, MAX, stdin)) || (*sbu == 10)){
		printf("enter input\n");
    	exit(0);
	}	
                                           
	printf("CHARACTER to be recognized:\n");
	c = getchar(); 	


	add = char_add_instr(sbu,c);// invoke function
	
	printf("character %c address is:%p\n",c,add);
	
	return 0;
}

