// Program 3 : Program to remove comments in a c file

#include"header.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	FILE *fpc;
	char ch;
		
	if((!(fp = fopen(argv[1],"r+")))&&(fpc = fopen(argv[2], "w+")))
			{
				printf("error: fopen failed");
				exit(0);
			}
	else {
		while(( ch = fgetc(fp)) != EOF)
		{
			if( ch == '/')
			{
				if(( ch = fgetc(fp))  == '*' )
				{
					
					while((ch=fgetc(fp)) == '*') {
						if((ch = fgetc(fp)) == '/');					
					}
				}
				else if( ch == '/')
				{
					while(( ch = fgetc (fp) ) != '\n');
				}
				fseek( fp, -1, SEEK_CUR);
			}	
			else
			{
				fpc = fputc(ch, fp);
			}
		}
		fcloseall();
	}
	
	return 0;
}	
