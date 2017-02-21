# include <stdio.h>

int main()
{
	FILE * fp;
	char * a;
	int c;
	fp = fopen("malloc3.c","r");
	if (fp == NULL){
		printf("fp => error\n");
		exit(1);
	}
//	printf ("hello");
//	fflush (stdout);
	if (NULL == (a = malloc(50))){
		printf("malloc error\n");
		exit(1);
	}
	fclose(fp);
//	printf("hello");
	fflush(fp);
	c = fread(a, 1, 100, fp);
	printf("%s\n", a);
	printf("c = %d\n", c);
	return 0;
}
