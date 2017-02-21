# include <stdio.h>

int main()
{
	FILE *fp;
	char c;
	fp = fopen("fflush.c","r");
	while (1){
		c = fgetc(fp);
		if(feof(fp))
			break;
		printf("%c",c);
	}
	printf("hi\n");
	fflush(fp);
	fclose(fp);
	return 0;
}
