/* Page walk ( 10 : 10 : 12)
 * 
 * DOC : 12 / 02 / 17
 * 
 * AUTH : KARTHIK
 * 
 * Description: The page index in the page table will be of the form 10:10:12
 *				-> task_struct->mm->pgd->pgd gives the first 10 bit which is
 * 				-> index in the page table in first level to the second level.
 * 				-> send a address of the variable from main to ioctl for page walk
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main( void )
{
	static int var = 10;
	int *ptr = NULL;
	int fd;

	ptr = (int*) malloc(sizeof(int));
	*ptr = 20;

	fd = open("/dev/myChar", O_RDWR);

	if (fd < 0)
		perror("Unable to open the Device");
	else
		printf("File Opened Successfully %d\n", fd);

 	ioctl(fd, getpid(), &var);	
	
//	getchar();
	close(fd);

	return 0;
}
