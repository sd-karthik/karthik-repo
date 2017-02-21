# include <stdio.h>

int main()
{
	FILE *fp;
	char *p = malloc (100);
	printf("this text is redirected to stdout\n");
	/*fp = freopen("malloc3.c","a+",stdin);
	printf("pramod\n");
	*/
	fgets(p, 50, stdin);
	printf ("p==> %s\n", p);
	if (fp == NULL)
		printf("error\n");
//	gets(p);
//	printf("hai lavanya rhis text is redirected to file.c\n");
//	fclose(fp);
	return 0;
}
