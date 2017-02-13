#include"header1.h"
#include<stdlib.h>
#include<string.h>
#define MAX 50

/*int str_len (str);

int strsp(char *sbu, char *dbu);

int str_cmp(char *sbu,char *dbu,int l1, int l2);
*/
int main()

{
	FILE *fp;
	char c;	
	char *str=(char *)malloc(MAX*sizeof(char));
	char *str1=(char *)malloc(MAX*sizeof(char));
	int count=0;
	int i;
	int num;
	
	printf("enter a string\n");
	if (NULL == (fgets(str,MAX,stdin))){
	printf("input failed\n");
	exit(0);
	}
	if(NULL == (fp = fopen("a.txt","w+"))){
		printf("file not created\n");
		exit(0);
	}
	
	fprintf(fp,"%s %s %s \n%s %s %s \n%s %s %s %s","Hi","I'm","sandeep","how",
				"are","you","where","are","you","?");
	rewind(fp);
	fclose(fp);
	
	fp = fopen("a.txt","r+");



	do{
		
	        if (0 == fscanf (fp,"%s",str1)){
				printf("reading failed\n");
				exit(0);
			}
			if ((strcmp(str1," "))==0){
			printf("\n");
			count++;
			}
			printf("count:%d",count);
			
//			printf("%s",str1);
			
//			c =fgetc(fp);
			/*printf("%c",c);
			if (c == '\n'){ // Increment count if this character is newline     
                count = count + 1;   
				printf("%c",c);                                           
            }
//			printf("line:%d",count);

			if(strcmp(str1,str) == 0){
			printf("%s found at line %d",str,count);
*/			
				 
	}while (feof(fp) == 0);



	fclose(fp);

	return 0;
}

/*int str_cmp(char *sbu,char *dbu,int l1, int l2)
{ 
	int flag = 2;  
    int i;	

		while (*sbu != '\0')
			{
				if(*sbu == *dbu)
					flag=0;
				else if(*sbu  > *dbu)
					return 1;
				else if(*sbu < *dbu)
					return -1;
			sbu++;
			dbu++;								
			}
		return flag;	
	


int str_len (char *str)
{
	int i=0;
	while(*str++ ){
	i++;
	}
	return (i-1);
}
*/
