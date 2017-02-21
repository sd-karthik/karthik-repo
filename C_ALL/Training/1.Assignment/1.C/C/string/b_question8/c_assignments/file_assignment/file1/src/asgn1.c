#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv)

{
	FILE *fp;
	char ch;	
	if(NULL == (fp = fopen(*(argv+1),"w+"))){
		printf("file not created\n");
		exit(0);
	}
	
	fprintf(fp,"%s %s %s","Hi","I'm","SAndeep");
	rewind(fp);
	do{
		ch = fgetc(fp);
		
		if (feof(fp)){
			break;
		}


		if (ch <= 'Z' && ch >= 'A'  ){
			ch = ch + 32;
		}
		fseek(fp,-1,SEEK_CUR);

		fprintf(fp,"%c",ch); 
	}while (1);
	
	fclose(fp);
	return 0;


}
