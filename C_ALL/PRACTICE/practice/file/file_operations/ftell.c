# include <stdio.h>
# include <stdlib.h>
# include <malloc.h>
int main ()
{
	FILE *fp ;
	char *p = NULL;

	p = malloc (100);

	fp = fopen ("hello.txt", "rw+");

	if (fp == NULL) {
		perror ("fopen");
		exit (2);
	}

	fread (p, 1, 10, fp);
	printf ("p ==> %s\n", p);
	fread (p, 1, 10, fp);
	printf ("p ==> %s\n",  p);
	printf ("pos %ld\n", ftell (fp));
	//rewind (fp);
	fseek (fp, 15, SEEK_CUR);
	fseek (fp, 15, SEEK_SET);
	fseek (fp, -15, SEEK_END);
	fread (p, 1, 10, fp);
	printf ("p ==> %s \n", p);
	printf ("pos %ld \n", ftell (fp));
	return 0;
}
