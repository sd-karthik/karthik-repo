#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

#if 0
int main()
{
	FILE *fp;
	char str1[10];
	char str2[10];
	char str3[20];

	fp = fopen("file1.txt", "w+");
	if(fp == NULL)
	{
		printf("file doesn't exist\n");
		return 0;
	}
	
	if((fprintf(fp, "file opened successfully")) < 0)
	{
		printf("Fprintf failed\n");
		return 0;
	}
	
	if((fprintf(fp, "file edited successfully\n")) < 0)
	{
		printf("Fprintf failed\n");
	}

	
	fseek(fp, 16, SEEK_SET);
	perror("fseek");

	if((fscanf(fp, "%s" "%s" "%s", str1, str2, str3)) == EOF)
	{
		perror("fscanf");
		return 0;
	}

	printf("before rewind: %s %s %s", str1, str2, str3);
	rewind(fp);
	printf("after rewind: %s %s %s", str1, str2, str3);
	fscanf(stdout, "%s %s %s", str1, str2, str3);	
	fclose(fp);

//	fp= fopen("file3.txt", "w+");
//	if((fprintf(fp, "good afternoon")) < 0)
//	{
//		perror("fprintf failed\n");
//	}
//	fclose(fp);
}

#endif

#if 0

int main(int argc , char *argv[])
{
	FILE *fp1;
	FILE *fp2;
	int b = 10;
	int *a = &b;

	if(argc != 2)
	{
		printf("%s",argv[0]);
	}
	else 
	{	

		fp1 = fopen(argv[1], "w+");
	}

	if(fp1 == NULL)
	{
		printf("file1.txt doesn't exist\n");
		return 0;
	}
	
	fp2 = fopen("file2.txt", "w+");
	if(fp2 == NULL)
	{
		printf("file2.txt doesn't exist\n");
		return 0;
	}
	
	fwrite(a, sizeof(int), 1, fp1);
	fprintf(fp2, "%d", *a);
/*	fscanf(fp1, "%d", *a);
	fscanf(fp2, "%d", *a);
	printf("before rewind: %d",);
	printf("before rewind: %d",*c);
	rewind(fp1);
	rewind(fp2);
	
	printf("after rewind: %d", *b);
	printf("after rewind: %d", *c);
	fscanf(stdout, "%d", *a);	
*/	fclose(fp1);
}
#endif


#if 0//not working
void main()
{
	int fd;
	int buf[7];

	if((fd =open("file4.txt", O_CREAT, 666)) == -1)
	{
		printf(" file could not be opened\n");
	}
	
write(fd, "Written", 7);
perror("write");
if((fd=open("file4.txt", O_RDWR, 666)) == -1)
{
	printf(" file could not be opened\n");
}
close(fd);
}
#endif

#if 0 

void main()
{
	int n;
	int c;
//	printf("Enter the number and character\n");
	scanf("%d%d",&n, &c);
	printf("%d%d", n,c);

	fscanf(stdin,"%d%d", &n, &c);
	printf("%d%d", n, c);
}

#endif

#if 0
int main(void)
{

struct tag{

	int num = 10;

	} var = {5};

printf("var.num = %d\n (&var) -> num = %d\n", var.num, (&var) -> num);

}
#endif

#if 0

int main(void)

{

struct a {

int a;

struct b{

char a;

char b;

}si;

};

printf("%d\n", sizeof(struct b));

return 0;

}

#endif

#if 0
struct A{

    enum { Monday=1, Tuesday=3, Wednesday};

    int a;

    int b;

};

int main(void)

{

    printf("%d\n", sizeof(struct A));

    return 0;

}
#endif

#if 0
struct marks{

int p:3;

int c:3;

int m:2;

};

void main(void)

{

struct marks s = {2, -6, 5};

printf("%d %d %d", s.p, s.c, s.m); 

}

#endif

#if 1
struct {
      char a;
      char b;
      char c;
}obj;

int main()
{
	printf("%d", sizeof(obj));
	return 0;
}
#endif
