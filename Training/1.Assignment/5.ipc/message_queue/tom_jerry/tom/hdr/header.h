/* Destination */

#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>  /* mkfifo header */   
#include <sys/stat.h>   /* mkfifo header */                       
#include <errno.h>      /* perror */
#include <fcntl.h>		/* for O_* constants in open */
#include <mqueue.h>		/* queue */

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m" 
#define RESET "\x1b[0m"
