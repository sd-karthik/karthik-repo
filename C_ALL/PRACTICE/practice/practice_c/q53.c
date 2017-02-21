/*****************************print name using function pointer*******************************
*/
#include <stdio.h>
void name (void);
int main()
{
	int (*fun)(const char*,...) = printf;
	fun("Basagoud\n");

}

