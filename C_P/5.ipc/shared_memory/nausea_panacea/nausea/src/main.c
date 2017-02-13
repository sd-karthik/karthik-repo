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
#include <time.h>

int main(void)
{
	int fd;
	off_t offset = 0;
	size_t length = 4096;
	int arr[10];
	int i;
	int *ptr1 = NULL;
	
	ptr1 = (int *) malloc(sizeof(int) * N_MAX);
 	
	/* Open, get size, memory map */
	if ((fd = shm_open("/shared_mem", O_CREAT | O_RDWR | O_TRUNC, 0666)) == -1)
		error_handle(shm_open);

	if ((ftruncate(fd, offset)) == -1)
		error_handle("ftruncate");

	if ((ptr1 =(int *) mmap(NULL, length, PROT_READ | PROT_WRITE , 
			MAP_SHARED, fd, offset)) == (int*)-1)
		error_handle("mmap");
		
	for(i = 1; i <= 10; i++)		{
		arr[i-1] = time(NULL) % i;
		printf("%d ", arr[i-1]);
	}

	memcpy( ptr1, arr, sizeof(arr));
	
	return 0;
}
