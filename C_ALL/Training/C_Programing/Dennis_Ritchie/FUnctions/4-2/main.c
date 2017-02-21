#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
#define N_MAX 20
#define MALLOC_CHAR(str) if(NULL == (str = (char*)malloc(sizeof(char)*N_MAX)))\
							printf("malloc failed\n")
#define VAL_FGETS(str) if(NULL == (fgets(str, N_MAX, stdin))) \
							printf("fgets failed\n")
#define RM_NL(str) for(i = 0 ; i < *(str+i); i++);\
						*(str+i) = '\0'; 

int main()
{
	char *str = NULL;
	double num;
	int i;

/*	if(NULL == (str = (char*)malloc(sizeof(char)*N_MAX)))
	{
		printf("malloc failed\n");
		exit(0);
	}
*/

	MALLOC_CHAR(str);

	printf("Enter a number for atof\n");
	
/*	if(NULL == (fgets(str, N_MAX, stdin)))
	{
		printf("fgets failed\n");
		exit(0);
	}
*/
	VAL_FGETS(str);
	RM_NL(str);
	num = ato_f(str);

	printf("The number after conversion:\n%f\n", num);
	
	return 0;
}
	
