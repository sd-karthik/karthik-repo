#include "header.h"

void * thread_function(void )

{
		time_t t;
		int status;
		struct timespec  ts;
		LIST * temp =  head;
	//	LIST * list1;

		while(1) {
			status = pthread_mutex_lock(&data->mutex);

			if(status !=0 )
					err_abort(status, "lock mutex");
			while(head == NULL) {
				status = pthread_cond_wait(&data -> cond, &data -> mutex);
					continue;
			}

			temp = consume_node(head);
			ts . tv_sec = temp -> seconds - time(NULL);

			status = pthread_cond_timedwait(&data -> cond, &data -> mutex, &ts);
			if(time(NULL) == temp -> seconds) {
		//if(status == ETIMEDOUT) {
				printf("{%d} %s\n", temp -> print_sec , temp -> message);
				head = head -> next; 

				data -> head = head;

				free(temp);
				temp = NULL;
			} else if(head -> seconds < time(NULL)) {
					pthread_mutex_unlock(&data -> mutex);
					continue;
			}
			pthread_mutex_unlock(&data -> mutex);
		
		}
		pthread_exit(NULL);
}


int main(int argc, char *argv[])
{
		pthread_t th_id;

		int status;
		int sec;
		char message[64];
		LIST * list = NULL;
		data = (my_struct_t *) malloc ( sizeof (my_struct_t ));

		if (data == NULL) {
				errno_abort("Allocate structure");
				exit(2);
		}

		status = pthread_create(&th_id, NULL, thread_function, NULL);

		if(status != 0) {
				printf("Thread creation error : %s\n", strerror(status));
		}

		status = pthread_mutex_init(&data -> mutex, NULL);
		if(status !=0)
				err_abort(status, "Init mutex");


		status = pthread_cond_init(&data -> cond, NULL);
		if(status != 0)
				err_abort(status,"Init cond");

		while(1) {

				printf("Alarm >");
				if(fgets(( char*)line, sizeof(line), stdin) == NULL)
						exit(0);

				if(strlen ((const char*)line) <= 1)
						continue;
				if((sscanf(line, "%d %64[^\n]", &sec  ,message ) < 2 )) {
						fprintf(stderr, "\nBad commands\n");
						continue;
				}
				list = create_node ();
				list -> print_sec = sec;
				list -> seconds = sec + time(NULL);
				strcpy(list -> message, message);
						
				status = pthread_mutex_lock(&data->mutex);

				if(status !=0 ) 
						err_abort(status, "lock mutex");
				
			 	head = insert_node(head, list);

				status = pthread_mutex_unlock(&data -> mutex);

				if(status !=0 )
						err_abort(status, "unlock mutex");
		}
		status = pthread_mutex_destroy(&data -> mutex);

		if (status != 0)
				err_abort(status,"Destroy mutex");

		pthread_exit(NULL);	
	
		(void)free(data);
		return 0;

}

