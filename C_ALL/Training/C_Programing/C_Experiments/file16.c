#include<stdio.h>

int  main()
{
	int a =256;
	int b;

	FILE *fp = NULL;
		
	fp = fopen("test16.txt", "w+");

	fwrite(&a, sizeof(a), 1, fp);
	
//	fprintf(fp,"%d", a);
	rewind(fp);
	a= 10;
//	fscanf(fp,"%d", &b);
	fread(&a, sizeof(char), 2,fp);
	
	printf("%d", a);
	
	fclose(fp);
	return 0;
}
