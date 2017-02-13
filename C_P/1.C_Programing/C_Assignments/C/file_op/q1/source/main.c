#include"header.h"

int main(void)
{
	FILE *fp1;	// file descriptor
	FILE *fp2 = NULL;
	char c;

	fp1 = fopen("file1.txt" , "w+");
	fp2 = fopen("file1.txt", "w+");

	if(fp1 == NULL)
	{
		printf("file doesn't exist\n");
		return 0;
	}
	printf("File opened successfully\n");

	if((fprintf(fp1, "4GloBaL eD#-ge")) < 0)
	{
		printf("Fprintf failed\n");
		return 0;
	}

	printf("File written successfully\n");
	rewind(fp1);

	while((c = fgetc(fp1)) != EOF) 
	{
		( c >= 'A' && c <= 'Z' ) ? fputc( (c+32), fp2) : fputc(c, fp2);
	}
	printf("Text inside File converted to lowercase\n");
	fcloseall();
	return 0;
}
