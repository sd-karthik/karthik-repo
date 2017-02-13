//DOC_kk : 20/1/17
//Fork and execlp command understanding

#include<stdio.h>

int main()
{
	int fd[2];

	pipe(fd);

	if ( (childpid = fork() ) == -1){
		fprintf(stderr, "FORK failed");
		return 1;
	} 
	else if( childpid == 0) {
		close(1);
		dup2(fd[1], 1);
		close(fd[0]);
		execlp("/bin/sh","/bin/sh","-c",parameters,NULL);
	}

	wait(NULL);
	read(fd[0], result, RESULT_SIZE);
	printf("%s\n",result);
	return 0;
}
