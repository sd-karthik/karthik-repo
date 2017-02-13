/* Destination */

#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>  /* mkfifo header */   
#include <sys/stat.h>   /* mkfifo header */                       
#include <errno.h>      /* perror */
#include <fcntl.h>		/* open */
