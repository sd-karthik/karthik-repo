#include"header1.h"

int main(int argc,char *argv[])
{
	struct EH mach[2];
	FILE *fp;
	char e_ty[10];
	char e_mach[10];
	char e_ver[10];
	char e_ent[10];
	int i=0;
	printf("enter e_ident");
	fgets(mach[i].e_ident,MAX,stdin);
	
	printf("enter e_ty\n");
	fgets(e_ty,MAX,stdin);
	mach[i].e_type = valid(e_ty);
	
	printf("enter e_mach\n");
	fgets(e_mach,MAX,stdin);
	mach[i].e_machine = valid(e_mach);
	
	printf("enter e_ver\n");
	fgets(e_ver,MAX,stdin);
	mach[i].e_version = valid(e_ver);
	
	printf("enter e_ent\n");
	fgets(e_ent,MAX,stdin);
	mach[i].e_entry = valid(e_ent);

	if (NULL == (fp = fopen(argv[1],"w+"))){
		printf("file not created\n");
		exit(0);
	}
	fwrite(&mach[i],sizeof(struct EH),1,fp);
	fclose (fp);
}
