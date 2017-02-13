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
 *				-> mmap
 *
 */

#include "errors.h"

int main(void)
{
	int fd;
	off_t offset = 0;
	size_t length = 4096;
	int *ptr2 = NULL;
	int arr[10];
	int i;

	ptr2 = (int*) malloc(sizeof(int) * N_MAX);
	/* Open, get size, memory map */
	if ((fd = shm_open("/shared_mem",  O_RDWR , 0666)) == -1) {
		printf("[%d]", fd);
		handle_error("shm_open");
	}
	if ((ptr2 = (int *)mmap(NULL, length, PROT_READ | PROT_WRITE ,
		 MAP_SHARED, fd, offset)) ==(int *) -1)
		handle_error("mmap");
	
	memcpy( arr, ptr2, sizeof(arr));

	for(i = 0 ; i < 10; i++)
	printf("%d ", arr[i]);	
	shm_unlink("/shared_mem");
	return 0;

}
