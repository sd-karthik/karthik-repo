#include<stdio.h>

void main(int argc, char *argv[])
{
	FILE *fp;
	char c;
		
		fp = fopen(argv[1], "r+");
	
		while((c=fgetc(fp)) != EOF) {
			printf("%c", c);

	}
	fclose(fp);
}
