//main.c

//To write and read into a binary file

#include"header.h"

int main(int argc, char* argv[])	// accept file name using command
{
	struct EH arr[2];// structure declaration
	FILE *fp;		//file pointer
	int i;
	char *cnum=(char*) malloc(sizeof(char));
	int num;
	char ident[MAX];
    char *type = (char*) malloc (sizeof(char)*MAX);
    char *machine = (char*) malloc (sizeof(char)*MAX);
    char *version = (char*) malloc (sizeof(char)*MAX);
    char *entry = (char*) malloc (sizeof(char)*MAX);

	// Creating and writing into the file using fwrite

	if((fp = fopen(argv[1], "w+")) == NULL)
	{
		printf("fopen failed\n");
		exit(0);
	}
	
	printf("File write opration\n");
	printf("Enter the number of entries\n");
	fgets(cnum, MAX, stdin);
	num = a2i(cnum);

	printf("Enter the elements to the structure\n");
	
	//Writing entries into the file

	for(i = 0; i < num; i++)
	{
		printf("Enter the e_ident name\n");
		fgets(arr[i].e_ident, MAX, stdin);
			
		printf("e_type:\n");
		fgets(type, MAX, stdin);
		arr[i].e_type = a2i(type);

		printf("e_machine:\n");
		fgets(machine, MAX, stdin);
		arr[i].e_machine = a2i(machine);
		
		printf("e_version:\n");
		fgets(version, MAX, stdin);
		arr[i].e_version = a2i(version);
		
		printf("e_entry:\n");
		fgets(entry, MAX, stdin);
		arr[i].e_entry = a2i(entry);
	
	}

	for(i = 0; i < num; i++){
		fwrite(&arr[i], sizeof(struct EH), 1, fp);
	}

	//Reading the file using fread
	
	printf("\nFile read operation\n");
	for(i = 0; i < num; i++)
	{
		fread(&arr[i], sizeof(struct EH), 1, fp);
	
		printf("e_ident:\n%s",arr[i].e_ident);
		printf("e_type:\n%d\n",arr[i].e_type);
		printf("e_machine:\n%d\n",arr[i].e_machine);
		printf("e_version:\n%d\n",arr[i].e_version);
		printf("e_entry:\n%d\n",arr[i].e_entry);

	}

	fclose(fp);

	return 0;
}
