#include<stdio.h>

int showbit(int num)
{
	int i;
	for(i=((8*sizeof(int))-1); i>=0; i--) {
		if(((i+1) % 8)==0) {
			printf(" ");
		}
		printf("%d", ((num >> i) & 1));
	}
	return 0;
} 
