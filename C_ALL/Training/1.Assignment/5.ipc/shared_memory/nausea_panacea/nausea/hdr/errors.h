#ifndef __errors_h
#define __errors_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>		
#include <string.h>
#include <sys/mman.h>	/* mmap */
#include <sys/stat.h>	/* fstat */
#include <fcntl.h>		/* O_* constants */

#define N_MAX 64

#define err_abort(code,text) do {\
	fprintf (stderr, "%s at \"%s\":%d: %s\n", \
		text,__FILE__,__LINE__,strerror(code)); \
	abort (); \
	}while (0)

#define errno_abort(text) do { \
	fprintf (stderr,"%s at \"%s\":%d: %s\n", \
		text,__FILE__,__LINE__,strerror(errno)); \
	abort (); \
	} while (0)

#define handle_error(msg) \
	do{ perror(msg); exit(EXIT_FAILURE); } while(0)

#define MALLOC_CHAR(str) \
	if((str = (char *) malloc(sizeof(char) *N_MAX)) == NULL) \
	{	perror("malloc failed\n"); exit(EXIT_FAILURE);}

#endif
