
#ifndef __header_h
#define __header_h 1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>			/* closing of session close() */
#include <errno.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <netinet/in.h> /*inet_addr */
#include <arpa/inet.h>
#include <string.h> 	/* stderror */

#define err_abort(code,text) do {\
	fprintf (stderr, "%s at \"%s\":%d: %d\n", \
		text,__FILE__,__LINE__,strerror(code)); \
	abort (); \
	}while (0)

#define errno_abort(text) do { \
	fprintf (stderr,"%s at \"%s\":%d: %d\n", \
		text,__FILE__,__LINE__,strerror(errno)); \
	abort (); \
	} while (0)

#define handle_error(msg) \
	do{ perror(msg); exit(EXIT_FAILURE); } while(0)

#endif

#define S_PORT 1025
#define S_IP "172.16.5.25"