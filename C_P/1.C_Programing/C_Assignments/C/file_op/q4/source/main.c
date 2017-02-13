#include"header.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int count = 0;
	char buf[100] = {0};
	fp = fopen(argv[1], "r+");

//	ch= fgetc(fp);

/*	while(ch!= EOF)
	{
		if((ch ==' ')||(ch=='\n')) {
			if((((ch = fgetc(fp))==' ') || (ch == '\n')) && (ch !=EOF))
			{
				count++;
			}
		}
	}
*/
	while((fscanf(fp, "%s", buf)) != EOF)
	{
		count++;
	}

	printf("The number of words= %d\n", count);
	fclose(fp);
	return 0;
}
