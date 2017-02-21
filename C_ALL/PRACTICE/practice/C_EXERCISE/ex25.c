#include <stdio.h>
#include <unistd.h>
int main()
{	
	int i;
	for(i = 0;i < 5;i++) {
	fprintf(stdout,"hello-out");

		sleep(1);
		fprintf(stderr,"hello-err\n");
     }
	__fpurge(stdout);
	sleep (4);
	puts("\n");
    return 0;
}
