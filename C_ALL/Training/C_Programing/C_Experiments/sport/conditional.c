#include"stdio.h"

#ifndef MACRO
//printf("ifdef\n");
#endif

#ifndef MAX
	#define MIN 10
#else
	#define MIN 20
#endif

#define greater(a,b) (a > b)

#define NAM ((num & 1) && printf("odd\n")) || printf("even\n");

#define CMD
int main()
{
// Define another macro if MACRO NUM is defined 
	int num = 61;
#ifndef MIN
	#define MAX 30
#else
	#define MAX 40 
#endif

	printf("Greater no=%d\n", (greater(1,5)*1) + ((!greater(1,5))*5));

	printf("MACRO RESOLVED : \n%d\n%d\n",MIN, MAX);
	printf("MACRO cmd : \n%d",CMD);

	NAM;
	return 0;
}
