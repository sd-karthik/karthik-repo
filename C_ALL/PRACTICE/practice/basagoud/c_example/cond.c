# include <stdio.h>
int main()
{
#define MAX  
//#define MIN 

#ifdef MAX
#ifndef MIN
		printf("hello\n");
#endif
#endif
#ifndef MAX
		printf("HAI\n");
#endif

		return 0;
}
