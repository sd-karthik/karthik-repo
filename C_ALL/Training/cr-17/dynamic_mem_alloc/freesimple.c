#include<stdio.h>

int main(void)
{
	int *p = malloc(10);
//	printf("%d\n",*(p-1));
//	*(p+3)=32;
	int *q = malloc(10);	
	int *r = malloc(10);	

	int i;
	
	free(p);
	free(q);
    free(r);
	//printf("%p\n",(p-2));
	//*(p+3)=16;
	//free(q);
	//free(q);
//int *r=malloc(10);
	printf("p:%p\n",p);
	printf("q:%p\n",q);
//	printf("%p\n",s);
	printf("r:%p\n",r);
//	int *q = malloc(13);

	for (i = 0;i<=100;i++){   
	printf("%x\t",*(p+i) );
   }
	
	//free(p);
//	printf("%#x\n", *r);

	return 0;
}
