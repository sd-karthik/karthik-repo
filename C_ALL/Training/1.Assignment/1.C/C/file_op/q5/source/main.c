#include"header.h"

int main()
{
	struct EH arr[2];
	FILE *fp;
	int i;
	char ident[MAX];
    char *type = (char*) malloc (sizeof(char)*MAX);
    char *machine = (char*) malloc (sizeof(char)*MAX);
    char *version = (char*) malloc (sizeof(char)*MAX);
    char *entry = (char*) malloc (sizeof(char)*MAX);

	fp = fopen("info.db", "w+");

	printf("Enter the elements to the structure\n");

	for(i = 0; i <2; i++)
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
	for(i = 0; i <2; i++){
		fwrite(&arr[i], sizeof(struct EH), 1, fp);
	}

	fclose(fp);
	return 0;
}
