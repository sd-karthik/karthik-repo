#include "errors.h"
#include<time.h>

typedef struct alarm {
	long unsigned int sec;
	char mesg[100];
	struct alarm *next;
}alarm_t;

struct {
	pthread_mutex_t mutex;
	pthread_cond_t cond1;
	pthread_cond_t cond2;
	alarm_t *start;
}head = {.mutex = PTHREAD_MUTEX_INITIALIZER,
		 .cond1 = PTHREAD_COND_INITIALIZER, 
		 .cond2 = PTHREAD_COND_INITIALIZER };

void insert(alarm_t *);

void *alarm_thread(void *arg) 
{
	int p;
	struct timespec *sec = NULL;
	char *mesg = NULL;
	alarm_t *temp = NULL;

	if(NULL == (mesg = ((char *)malloc(sizeof(char) * 100)))) {
		errno_abort("malloc is failed");
	}
	if(NULL == (sec = ((struct timespec *)malloc(sizeof(struct timespec))))) {
		errno_abort("malloc is failed");
	}

	while(1) {
		p = pthread_mutex_lock (&(head.mutex));
		if(p != 0) 
			err_abort(p ,"mutex lock  failed");

		if(head.start == NULL) {
			p =	pthread_cond_wait(&head.cond1, &head.mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock  failed");
		}

			sec->tv_sec = head.start -> sec;
			sec->tv_nsec = 0;
			strcpy(mesg, head.start->mesg);
		
		p = pthread_mutex_unlock (&head.mutex);
		if(p != 0) 
			err_abort(p ,"mutex unlock is failed");

			p = pthread_cond_timedwait(&head.cond2, &head.mutex, sec);
	/*		if(p != 0) 
				err_abort(p ,"mutex timed wait is failed");
	*/		 if(p == ETIMEDOUT) {
			printf("(%ld) %s\n",sec->tv_sec, mesg);
			
			temp = (alarm_t *)head.start;
			
			head.start = head.start->next;
			free(temp);
			}
	}
	return NULL;
}

int main(int argc, char *argv[])
{
	char line[120];
	time_t abs;
	int p;
	alarm_t *alarm = NULL;
	pthread_t thr;

	p = pthread_create(&thr, NULL, alarm_thread, NULL);
	if(p != 0)
		err_abort(p, "pthread_create failed");

	while(1) {
		printf("Alarm ");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(NULL == (alarm = ((alarm_t *)malloc(sizeof(alarm_t)))))		
			errno_abort("malloc is failed");

		if(sscanf(line, "%lu %64[^\n]",&alarm->sec, alarm->mesg) > 2) {
			fprintf(stderr,"Bad command");
			continue;
		}
		 
		abs = time(NULL);
		
		alarm->sec = alarm->sec + abs;

		p = pthread_mutex_lock (&head.mutex);
		if(p != 0) 
			err_abort(p ,"mutex lock is failed");

		insert(alarm);

		p = pthread_mutex_unlock (&head.mutex);
		if(p != 0) 
			err_abort(p ,"mutex unlock is failed");

		p = pthread_mutex_unlock (&head.mutex);
		if(p != 0) 
			err_abort(p ,"mutex unlock is failed");
	}
	pthread_exit(NULL);
	return 0;
}

void insert(alarm_t *alarm)
{

	alarm_t *temp = NULL;
	int p;
	

	if(head.start == NULL) {
		head.start = alarm;
		alarm->next = NULL;
			
		p = pthread_cond_signal (&(head.cond1));
		if(p != 0) 
			err_abort(p ,"cond1 signal is failed");
		return;
	}
	else {
		temp = head.start;
		if((head.start -> sec) >= (alarm -> sec)) {
			alarm->next = head.start;
			head.start = alarm;

			p = pthread_cond_signal (&(head.cond2));
			if(p != 0) 
				err_abort(p, "cond2 signal is failed");
		return;
		}
		else {
			if(temp -> next == NULL){
				temp -> next = alarm;
				return;
				}
			else {					

				while(((temp-> next-> sec) >= (alarm -> sec)) 
						&&	((temp -> next) != NULL)) 
					temp = temp -> next;
				if(temp -> next == NULL)
					temp -> next = alarm;
				else {
					alarm -> next = temp -> next;
					temp -> next = alarm;
				}
				return;
			}
		}
	}
}
