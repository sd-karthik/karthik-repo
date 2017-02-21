#include <stdio.h>
#include <string.h>
int main()
{
	char a[11] = "occupation";
	char b[6] = "apple";
	char c[3] = "hi";
	strcpy(a,c);
	
	printf("%s %s %s \n",a,b,c);
	return 0; 	
}
