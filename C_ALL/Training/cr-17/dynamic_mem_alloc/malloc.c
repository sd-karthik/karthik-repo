#include <stdio.h>
#include <stdlib.h>

#if 0//calloc malloc difference
int main()
{
	int i;
	int *p =(int *)malloc(sizeof(int)*1);
	int *q =(int *)malloc(sizeof(int)*1);
	*(p+0)=12;
	*(p+1)=13;
	*(p+2)=1;
	free(p);

	int *s =(int *)calloc(sizeof(int),1);
	for(i=0;i<16;i++)
	printf("%d\n",*(s+i));
}

#endif
#if 0 //sys call
int main ( )
{
    int *p = NULL;
    p = (int *) sbrk (10);
   if (p == (void *) -1) {
        perror("sbrk");
        return -1;
        }
    int i;
    for ( i  = 0; i < 10; i++ )
    printf (" %d = %d\n", i, p[i]);
    return 0;
}

#endif
#if 0 // range 

int main ( void )
{
	int *ptr;
	ptr = malloc ( 13);
	int i;
	printf ( "sizeof ptr is %d \n", sizeof (ptr));
	printf ( " %d \n",* (ptr-1));
	for (  i = 0; i < 30; i++ ){	
		printf ( "%d\t = %d\n", i, ptr[i]);
		}
	return 0;
}

#endif

// using realloc

#if 0
int main()
{
    int *ptr, i , n1, n2;
    int *ptr2;
	

    ptr = (int*) malloc(1);
//	ptr2 = (int*) malloc(1);

    printf("Address of previously allocated memory: %p\n",ptr);
//	printf("Address of previously allocated memory ptr2: %p\n",ptr2);
    
  
    ptr = realloc(ptr, 13);
    printf("new ptr:%p\n",ptr);
    return 0;
}
#endif
#if 0 // validations
int main(void)
{
    int *pi, num;
 
    pi = (int *)malloc(num * sizeof(int));
 
    /* make sure if chunk is allocated or not */
    if (pi == NULL) {
            /* allocation failed, exit program */
    }
 
    /* else use the chunk */
 
    /* after your're done, free up memory */
    return 0;
}
#endif

#if 0 // twice free
int main ( )
{

    int *pi;
    int n = 10;

    pi = malloc(n * sizeof(int));

    /* all are invalid */
    //free(pi + 5 );  /* freeing a part of it */

    /* free up more than once */
    free(pi);
    free(pi);
    return 0;
}
#endif
#if 0 //validation
int main ( )
{
	int *p;
	p = malloc (-5);
	if (p == NULL){
	printf("failed\n");
	exit(1);
	}
	printf("%d\n",p);
	free(p);
}

#endif

#if 0

int main(void)

{
	int* p = malloc(12);
	
	int* q = malloc(12);
	*p = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;
	*(p + 3) = 9;

	*q = 4;
	*(q + 1) = 5;
	*(q + 2) = 6;
	*(q + 3) = 7;

	printf("address of p : %p\n", p);

	
	printf("first : %d\t%d\t%d\t%d\n", *p,*(p + 1), *(p + 2), *(p + 3));
	printf("first : %p\t%p\t%p\n", (p + 1), (p + 2), (p + 3));

	printf("address of q : %p\n", q);

	printf("Second : %d\t%d\t%d\t%d\n", *q,*(q + 1), *(q + 2), * (q + 3));

	printf("first : %p\t%p\t%p\n", (q + 1), (q + 2), (q + 3));

//	free(q);

}
#endif

#if 0
int main(void)

{
	int* p = malloc(12);
	*(p-1) = 16;
	*p = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;
	//*(p + 3) = 31;
//	*(p + 4) = 26;
	int* q = malloc(12);
	*q = 4;
	*(q + 1) = 5;
	*(q + 2) = 6;
//	*(q + 3) = 7;

	printf("address of p : %p\n", p);

	
	printf("first : %d\t%d\t%d\t%d\n", *p,*(p + 1), *(p + 2), *(p + 3));	printf("first : %p\t%p\t%p\n", (p + 1), (p + 2), (p + 3));

	printf("address of q : %p\n", q);
	printf("Second : %d\t%d\t%d\t%d\n", *q,*(q + 1), *(q + 2), * (q + 3));

	printf("first : %p\t%p\t%p\n", (q + 1), (q + 2), (q + 3));

	free(p);
	
	return 0;

}

#endif

#if 1 // heap size

int main(viod)
{
    int *ptr = NULL;
    unsigned int cnt = 0;
	printf("%d\n",getpid());
    while(ptr = malloc(1024*1024)){
        cnt += 1024*1024;
        *ptr = cnt;
        printf ("Count = %u\n", cnt);
    }
	getchar();
    return 0;
}


#endif

#if 0 
int main ( )
{
    int *ptr;
    ptr = malloc ( 10);
    printf("%p \n",ptr);
    ptr = malloc ( 10);
    printf("%p \n",ptr);
    free(NULL);
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
