#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
		  struct stat st;

		    // stat() returns -1 on error. Skipping check in this example
		    stat("hello.txt", &st);
			  printf("File size: %d bytes\n", st.st_size);

			    return 0;
}
