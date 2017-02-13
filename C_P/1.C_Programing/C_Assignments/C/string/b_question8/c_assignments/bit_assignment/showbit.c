#include<stdio.h>
int showbit (int a)

{
	int i;
        for(i=31; i>=0;i--) {
        printf ("%d",(a&(1<<i))?1:0);
        }
	printf ("\n");
}

