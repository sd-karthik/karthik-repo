/*****************macro have global scope *******************
*/
#include <stdio.h>
int fuc();


int main()
{

	#define MAX  100
	fuc();
	return 0;
}
int fuc()
{
	printf("Max ===%d\n" ,MAX);	
	return 0;
}
