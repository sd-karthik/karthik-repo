/* Page walk ( 10 : 10 : 12)
 * 
 * DOC : 12 / 02 / 17
 * 
 * AUTH : KARTHIK
 * 
 * Description: The page index in the page table will be of the form 10:10:12
 *				-> task_struct->mm->pgd->pgd gives the first 10 bit which is
 * 				-> index in the page table in first level to the second level.
 */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main( void )
{
	int fd;

	fd = open("/dev/myChar", O_RDWR);

	if (fd < 0)
		perror("Unable to open the Device");
	else
		printf("File Opened Successfully %d\n", fd);

 	ioctl(fd, getpid(), 10);	
	
//	getchar();
	close(fd);

	return 0;
}
