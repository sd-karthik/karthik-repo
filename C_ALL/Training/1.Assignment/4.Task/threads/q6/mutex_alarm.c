/* 
 * Asynchrounous alarm with mutual exclusion 
 *
 */

#include "errors.h"

/* alarm structure with mutex instance, condition for synchronisation, seconds,
 *  message to display and pointer to stucture
 */
typedef struct alarmt {
	pthread_mutex_t mutex;
	pthread_cond_t cond;
	int sec;
	char mesg[100];
	struct alarmt *next;

}Alarm_t;

Alarm_t *head;

void *Alarm_thread(void *arg) 
{
	int p;
	int diff = 0;
	Alarm_t *alarm = NULL;


	while(1) {

		if(NULL == (alarm = ((Alarm_t *)malloc(sizeof(Alarm_t)))))		
			errno_abort("malloc is failed");

		p = pthread_mutex_init (&alarm -> mutex, NULL);
		if(p != 0) 
			err_abort(p ,"init mutex is failed");
		if(head == NULL){
			diff = 0;		
			sleep(1);
			continue;	
		}

		else {
			p = pthread_mutex_lock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex lock is failed");
			else {
				alarm = (Alarm_t *)head;
			}
			
			p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");

			sleep((alarm -> sec) - diff);
			printf("(%d) %s\n",alarm->sec, alarm->mesg);

			diff = alarm->sec;			

			head = head -> next;

			free(alarm);
			alarm = NULL;

		}
	}
	return NULL;
}

int main(int argc, char *argv[])
{
	char line[120];
	int p;
	pid_t pid;
	Alarm_t *alarm = NULL;
	Alarm_t *temp = NULL;
	pthread_t thr;

	p = pthread_create(&thr, NULL, Alarm_thread, NULL);
	if(p != 0)
		err_abort(p, "pthread_create failed");


	while(1) {
		printf("Alarm: ");
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) 
			continue;

		if(NULL == (alarm = ((Alarm_t *)malloc(sizeof(Alarm_t)))))		
			errno_abort("malloc is failed");

		p = pthread_mutex_init (&alarm -> mutex, NULL);
		if(p != 0) 
			err_abort(p ,"init mutex is failed");

		p = pthread_cond_init (&alarm -> cond, NULL);
		if(p != 0) 
			err_abort(p ,"init mutex is failed");

		p = pthread_mutex_lock (&alarm -> mutex);
		if(p != 0) 
			err_abort(p ,"mutex lock is failed");
		else {
			if(sscanf(line, "%d %64[^\n]",&alarm->sec, alarm->mesg) > 2) {
				fprintf(stderr,"Bad command");
				continue;
			} 
			if(head == NULL) {
				head = alarm;
				alarm->next = NULL;
			}
			else {
				temp = head;
				if((head -> sec) >= (alarm -> sec)) {
					alarm->next = head;
					head = alarm;
				}
				else {
					if(temp -> next == NULL)
						temp -> next = alarm;
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
					}
				}
			}
			p = pthread_mutex_unlock (&alarm -> mutex);
			if(p != 0) 
				err_abort(p ,"mutex unlock is failed");
		}
	}
	pthread_exit(NULL);
	return 0;
}


