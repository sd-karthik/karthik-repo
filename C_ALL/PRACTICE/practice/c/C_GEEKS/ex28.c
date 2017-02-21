# include <stdio.h>
# include <stdlib.h>

int main ( void )
{
		char * lineptr = NULL;
		int n = 10;

		/*	
		gets (lineptr); //requires memory allocation for lineptr
		
		printf("%s\n", lineptr);
		*/
		printf("%d\n", n);
		
		//allocates memory in order of 120 bytes,minimum 120 bytes
		getline(&lineptr, &n, stdin);

		printf("Entered string is --> %s\n", lineptr);
		printf("size allocated for lineptr --> %d\n", n);
		
		free(lineptr);
		lineptr = NULL;
		
		return 0;
}
