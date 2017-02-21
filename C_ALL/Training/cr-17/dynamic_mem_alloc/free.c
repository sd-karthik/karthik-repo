#include<stdio.h>
#include<stdlib.h>
#if 0
int main()
{	
	int *p = (int *)calloc(sizeof(int),4);
	
	int *q = (int *)calloc(sizeof(int),4);
	int *r = (int*)calloc(sizeof(int),1);

	printf("p:%d\n",*(p-1));
	printf("p:%p\n",p);

	printf("q:%p\n",q);
	//printf("q:%s\n",q);
	printf("q:%d\n",*(q-1));
//	r ="a";
	printf("r:%p\n",r);
	free(p);
	free(r);
	free(q);
	printf("p after:%p\n",*(p));
	printf("q after:%p\n",*(q));
	printf("r after:%p\n",*(r));

	return 0;
}
#end if
#if 0//how much bytes freed when we free
int main ( )
{
    char *p = NULL;
    p = (char *)malloc ( 10);
    *p = 'h';
    *(p +1 ) = 'e';
    *(p + 2 ) = 'l';
    *(p +3 ) = 'l';
    *(p +4 ) = 'o';
    *(p +5 ) = 'a';
    
    printf ( "%c %c %c %c %c %c \n", *p, *(p +1), *(p +2), *(p +3),*(p +4),*(p +5));
    free (p);
    printf ( "%c %c %c %c %c %c\n", *p, *(p +1), *(p +2), *(p +3),*(p +4),*(p +5));

    return 0;
}
#endif
#if 0//how much bytes freed when we free
int main ( )
{
    int *p = NULL;
    p = (int *)malloc ( 10);
    *p = 10;
    *(p +1 ) = 20;
    *(p + 2 ) = 30;
    printf ( "%d %d %d \n", *p, *(p +1), *(p +2));
    free (p);
    printf ( "%d %d %d \n", *p, *(p +1), *(p +2));

    return 0;
}
#endif
#if 0// free 

int main(void)
{
    int *ptr = malloc(1);
    printf ("address = %p\n", ptr);
    int a = 19;
    ptr = &a;
    printf ("address = %p\n", ptr);
    free(ptr);
    return 0;
}


#endif

#if 0  // twice free
int main(void)
{
    int *ptr = malloc(1024);
    int *pptr = ptr+1;

    printf ("addres of pptr = %p and ptr = %p\n", pptr, ptr);
    free(ptr);
    free(pptr);
    ptr = NULL;
    pptr = NULL;
    return 0;
}



#endif
