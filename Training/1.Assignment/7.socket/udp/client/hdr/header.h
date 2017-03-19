/* Header file with header guard */
#ifndef __header_h
#define __header_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>         /* closing of session close() */
#include <errno.h>
#include <netinet/in.h>
#include <netinet/ip.h>		/* superset of previous */
#include <netinet/in.h> 	/*inet_addr */
#include <arpa/inet.h>


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

#define S_PORT 1025			/* Port number */
#define S_IP 0xac100519/* IP address */

#endif