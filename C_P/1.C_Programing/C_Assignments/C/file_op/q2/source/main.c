//Program to find the string in a file
#include<stdio.h>
#include<stdlib.h>


#define MAX 20

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int count = 0;
	char buf[100] = {0};
	char *str;

	str = (char *) malloc(sizeof(char) * MAX);
	
	printf("Enter the string to search\n");
	fgets(str, MAX, stdin);
	
	fp = fopen(argv[1], "r+");

	while((fscanf(fp, "%s", buf)) != EOF)
	{
		while((fscanf(fp, "%s", buf)) != '\n')
		{
			count++;

			if(strcmp(buf, str) == 0)
			{
				break;
			}
		}
	}

	printf("The number of words= %d\n", count);
	fclose(fp);
	return 0;
}
