//finding the amount of virtual address through program
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

long double my_atoi(char *str);

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int k = 1;
	char *buf1;
	char *buf2;
	char *difference;
	char *result;
	int i;
	int j;

	long double a;
	long double b;
	long double c = 0;


	if(NULL == (buf1 = (char *)malloc(sizeof(char)*32))){
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if(NULL == (buf2 = (char *)malloc(sizeof(char)*32))){
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if(NULL == (difference = (char *)malloc(sizeof(char)*32))){
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if(NULL == (result = (char *)malloc(sizeof(char)*32))){
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while(argc - 1)
	{
		if((fp = fopen(argv[k],"r")) == NULL)
		{
			perror("file cant open\n");
			exit(0);
		}

		while((ch = fgetc(fp)) != EOF)
		{
			printf("%c",ch);
		}
		rewind(fp);

		while((ch = fgetc(fp) != EOF)) {
			fseek (fp, -1, SEEK_CUR);

			i = 0;
			while((ch = fgetc(fp)) != '-')
			{
				*(buf1 + i) = ch;
				i++;
			}
			*(buf1+i) = '\0';
			printf("%s\t",buf1);
			a = my_atoi(buf1);
			j = 0;	

			while((ch = fgetc(fp)) != ' ')
			{
				*(buf2 + j) = ch;
				j++;
			}
			*(buf2+j) = '\0';
			printf("%s\n",buf2);
			b = my_atoi(buf2);

			c =   c + b - a;
			while ((ch= fgetc(fp)) != '\n');

		}
		k++;
		argc--;
		fclose(fp);
	}

	c = (float)c/(1024*1024);
	printf("address = %f MB\n",(float)c);

	return 0;
}
long double my_atoi(char *str)
{
	long double num = 0;
	int i = 0;

	while(*(str+i)!='\0') {
		if(*(str+i) >= '0' && *(str+i)<='9') {
			num = (num*16) + *(str+i) - '0';
		}
		else if (*(str+i) >= 'a' && *(str+i) <= 'f') {
			num = num * 16 + *(str+i) - 87;
		}
		i++;
	}
	return num;
}
