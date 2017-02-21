# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>

int main()
{
	FILE *fp;
	char *s;
	int c;
	fp = fopen("hello.txt", "w");
	if (NULL == (s = malloc(50))){
		perror("malloc");
		exit(1);
	}

	printf("enter string\n");
	fgets(s, 35, stdin);
	c = fwrite(s, 20, 1, fp);
	return 0;
}
