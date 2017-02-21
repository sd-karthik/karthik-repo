#include <stdio.h>
#include <pthread.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/syscall.h>

#include "errors.h"


int line [128];

typedef struct list {
	int seconds;
	int print_sec;
	char message[64];
	struct list * next;
}LIST;

LIST * head;
typedef struct my_struct_tag {
	
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	struct list * head;
} my_struct_t;

my_struct_t * data;


