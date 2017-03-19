#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>			/* closing of session close() */
#include <errno.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <netinet/in.h>
#include <arpa/inet.h>

#define S_PORT 1025
#define S_IP "172.16.5.25"
