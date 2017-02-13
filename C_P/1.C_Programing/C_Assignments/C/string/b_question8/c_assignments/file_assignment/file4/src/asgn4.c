#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
	FILE *fp;
	int count = 0;
	char c;
	if(NULL == (fp = fopen(argv[1],"w+"))){
		printf("file not created\n");
		exit(0);
	}
	
	fprintf(fp,"%s %s %s \n","hey","i'm","sandeep");
	fprintf(fp,"%s %s %s \n","i,m","from","hubli");	
	fprintf(fp,"%s %s %s %s \n","nice","to","meet","you");
	fprintf(fp,"%s %s %s %s \n",".","i'm","fine","thank you");
	rewind(fp);

	while (feof(fp) == 0){
		c = fgetc(fp);
		if (c == ' ' ){
		count++;
		}
	}
	printf("number  of words:%d \n ",count);
	return 0 ;
}
