#include"header.h"

int main(int argc , char *argv[])
{
	int i;

	if(argc == 0)
		printf("NO files are present\n");

	printf("No of file int the folder is %d\n",argc - 1);//print no of files

	for(i = 1;i < argc; i++)
		printf("%s\n",argv[i]);
	return 0;
}

