#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//char *(*fun)(char *dest, const char *src);
//int (*fun)(const char *s1, const char *s2);
#define MAX 1024
int (*fun)(const char *format, ...);
//unsigned int (*fun)(const char *);
//char* (*fun)(char *, char * );
int main()
{

	char str1[10] = "ven";
//	char str2[10] = "ven";
//	char *str3 = NULL;
	fork();
	printf("PID %d\n",getpid());

//	str2 = (char *)malloc(10);
//	str3 = (char *)malloc(10);

	unsigned char *p;
	unsigned int q;
	unsigned int count = 0;
	unsigned int i = 0;

/*	while(p != NULL) {

		p = (int *)malloc(1024 * MAX);

//		printf("addrs %p\n",p);
		
		count = count + 1;
	}*/

	getchar();
	scanf("%x",&q);	
/*	while(i < 239) {
	p = (unsigned char *)q;
	printf("%x ",*p);
	q++;
	i++;
	}
	printf("\n");*/
//	count = strlen(str1);	
	//printf("%x\n",&strlen); 
	fun = q;
//	printf("fun %x\n",fun);
//	fun = printf;
//	strcpy(str3,str1);
	i = (*fun)("helloo %x\n",q);	 
//	printf("%x\n",str2[0]);
//	printf("%x\n",str2[1]);
//	printf("%x\n",str2[2]);
//	printf("%x\n",str2[3]);
	printf("i == %d\n",i); 
	printf("count == %d\n",count);
	//printf("%s\n",str3);
	

//	printf("MEMORY %d\n",count);
	getchar();
//	free(p);*/

	return 0;
}
	

	
