/* Name : Independent applications working on shared memory.
 *
 *	-> nausea and panacea working on the shared memory data.
 *	-> nausea will initially write an array of 10 integers.
 *	-> integer values are (time() mode array index) onto shared memory.
 * 	-> panacea will read all the elements and print.
 *	-> its also re-initialise all the values to zero.
 *	-> synchronisation is done using semaphores
 *
 * DOC 		: 08 / 02 / 2017
 *
 * AUTHOUR	: KARTHIK
 *
 *Function 	: 	-> shm_open
 *				-> ftruncate
 *				-> mmap
 *
 */

#include "errors.h"

int main(void)
{
	char *addr;
	int fd;
	off_t offset = 0;
	size_t length;
	
	/* Open, get size, memory map */
	if ((fd = shm_open("/shared_mem", O_CREAT | O_RDWR | O_TRUNC, 0666)) == -1)
		err_abort(shm_open);

	if ((ftruncate(fd, offset)) == -1)
		errno_abort(ftruncate);

	if ((mmap(NULL, length, PROT_READ | PROT_WRITE , MAP_SHARED, fd, offset)) == -1)
		errno_abort(mmap);
		
	
}
