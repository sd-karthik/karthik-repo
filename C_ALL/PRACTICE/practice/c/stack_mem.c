# include <stdio.h>
#if R
# include <alloca.h>
int main()
{
		int count = 1;
		char * p;
		while(1) {
				if(NULL == (p = alloca( 1024 * 1024))) {
						break;
				}
				printf("%d\n",count);
				count++;
		}
		return 0;
}
# endif
#if S
#include <malloc.h>

int main()
{
		int count = 0;
		char * p;
		while(1) {
				if(NULL == (p = malloc( 1024 * 1024 ))){	
						break;
				}
				count++;
		}
		printf("%d\n",count);
		return 0;
}
#endif
