/**********************************************size of operartor**********************************************/

#include <stdio.h>
#include <string.h>
 
int main()
{
	char arr[] = "geeks\0 for geeks";
	char *str = "geeks\0 for geeks";
	printf ("arr = %s, sizeof(arr) = %d \n", arr, sizeof(arr));
	printf ("arr = %s, strlen(arr) = %d \n", arr, strlen(arr));
	printf ("str = %s, sizeof(str) = %d\n", str, sizeof(str));
//	printf("%d\n",__typeof__(arr));

	return 0;
}
