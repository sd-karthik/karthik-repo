/* Create s child process using fork() system call
*
*DOC : 23/1/17
*
*
*
*/

#include <stdio.h>
#include <errno.h>
#define MAX 20

int gvalue = 20;

#if ex1 
/* Parent Same , Child different
*
*/

int main(void)
{
	int pid;
	int value = 10;
	int *hvalue ;

	hvalue = (int *) malloc (sizeof(int));

	*hvalue = 30;
	
	pid = fork();

	wait();
	if(pid == 0) {	
		printf("<****************** CHILD *****************>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value,(unsigned int) &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue,(unsigned int) &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue,(unsigned int) &hvalue);
		printf(	"<******************************************>\n");
		
		value = 11;
		gvalue = 22;
		hvalue = 33;
	}
	else if(pid > 0) {
		printf("<****************** PARENT *****************>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else {
		printf("PID failed\n");
	}
	
	if(pid == 0) {	
		printf("<******* CHILD (After values changed) ********>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else if(pid > 0) {
		printf("<******* PARENT (After values changed) ********>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else {
		printf("PID failed\n");
	}
		
	return 0;
}
#endif

#if ex2 
/* Parent Different , Child same
*
*/

int main(void)
{
	int pid;
	int value = 10;
	int *hvalue ;

	hvalue = (int *) malloc (sizeof(int));

	*hvalue = 30;
	
	pid = fork();

	wait();
	if(pid == 0) {	
		printf("<****************** CHILD *****************>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value,(unsigned int) &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue,(unsigned int) &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue,(unsigned int) &hvalue);
		printf(	"<******************************************>\n");
		
	}
	else if(pid > 0) {
		printf("<****************** PARENT *****************>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
		value = 11;
		gvalue = 22;
		hvalue = 33;
	}
	else {
		printf("PID failed\n");
	}
	
	if(pid == 0) {	
		printf("<******* CHILD (After values changed) ********>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else if(pid > 0) {
		printf("<******* PARENT (After values changed) ********>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else {
		printf("PID failed\n");
	}		
	
	return 0;
}
#endif


#if ex3 
/* Parent Different , Child different
*
*/

int main(void)
{
	int pid;
	int value = 10;
	int *hvalue ;

	hvalue = (int *) malloc (sizeof(int));

	*hvalue = 30;
	
	pid = fork();

	wait();
	if(pid == 0) {	
		printf("<****************** CHILD *****************>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value,(unsigned int) &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue,(unsigned int) &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue,(unsigned int) &hvalue);
		printf(	"<******************************************>\n");
		
		value = 11;
		gvalue = 22;
		hvalue = 33;
	}
	else if(pid > 0) {
		printf("<****************** PARENT *****************>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
		value = 12;
		gvalue = 22;
		hvalue = 33;
	}
	else {
		printf("PID failed\n");
	}
	
	if(pid == 0) {	
		printf("<******* CHILD (After values changed) ********>\n"); 
		printf("PID = %d\t\t PPID = %d\n", getpid(), getppid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else if(pid > 0) {
		printf("<******* PARENT (After values changed) ********>\n"); 
		printf("PID = %d\n", getpid());
		printf(	"Local value = %d\t Address = %x\n", value, &value);
		printf(	"Global value = %d\t Address = %x\n", gvalue, &gvalue);
		printf(	"Heap value = %d \t Address = %x\n", hvalue, &hvalue);
		printf(	"<******************************************>\n");
	}
	else {
		printf("PID failed\n");
	}
		
	return 0;
}
#endif

#if ex4

int main()
{
	int pid;
	FILE *fp;

	fp = fopen("just.txt", "w+");
	
	if(NULL == fp)
	{
		perror("fopen failed\n");
		exit(0);
	}

	pid = fork();
//	wait();
	if(pid > 0)
	{
		printf("p-------------------------------p\n");
		printf("PARENT CONTEXT:\nPID=%d\n", getpid());

//		fp = fopen("just.txt", "w+");
		if(!(fprintf(fp, "GLobal edgeGlobal Edge Global Edge")))
		{
			printf("fprintf failed\n");	
			exit(0);
		}
		printf("Parent written successfully\n");
	
		close(fp);
		printf("parent fclose\n");
		printf("p--------------------------------p\n");
	}

	else if( pid == 0)
	{
		printf("c---------------------------------c\n");
		printf("CHILD CONTEXT:\nPID=%d\n", getpid());
		
		if(!(fprintf(fp, "Software limited")))
		{
			printf("fprintf failed\n");
			exit(0);
		}
		printf("Child written successfully\n");
		printf("c-----------------------------------c\n");
		close(fp);
		printf("Child FCLOSE\n");
	}
	getchar();
	return 0;
}

#endif

#if ex5
int main()
{

	int pid;

l2:	pid = fork();
	wait();
//	getchar();
	if(pid == -1)
	{
		printf("Failure\n");
	}

	else if(pid == 0)
	{
		printf("PID(if) = %d\n", getpid());
//		getchar();
	
	}
	else if(pid > 0)
	{
		printf("PID(else) = %d\n", getpid());
		goto l2;
	}
//	getchar();	
	return 0;
}
#endif

#if ex6
int main()
{
	}
#endif
