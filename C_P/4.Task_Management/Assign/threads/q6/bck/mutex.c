/*mutex alarm*/
#include<stdio.h>
#include<pthread.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#define MAX 50

long unsigned  int seconds1 ;
long unsigned int seconds2;
char message1[MAX];

typedef struct tag 
{
	pthread_cond_t  cond;
	int             seconds;
	char 			message[MAX];
	struct tag *next;
}my_struct;
/*struct of alarm*/
struct mutex
{
	pthread_mutex_t mutex;
	pthread_cond_t  cond1;
	pthread_cond_t  cond2;
	my_struct *head ;
}mutex={.mutex = PTHREAD_MUTEX_INITIALIZER,.cond1 = PTHREAD_COND_INITIALIZER,.cond2=PTHREAD_COND_INITIALIZER};
/*mutex struct*/

void insert(my_struct *temp)
{
	my_struct *current = NULL;
	my_struct *prev = NULL;
	int count = 0;
	static int flag = 0;
	current = mutex.head;

	if(mutex.head == NULL)
	{
		
		if((flag == 1) && (temp->seconds < (seconds1))){
		
		mutex.head = (my_struct *)temp;
		temp->next = NULL; 
		pthread_cond_signal(&mutex.cond2);
		}
		else
		{
		mutex.head = (my_struct *)temp;
		temp->next = NULL; 
		pthread_cond_signal(&mutex.cond1);
		flag =1;
		}
	}
	else
	{
		while(current -> next != NULL && temp -> seconds > current -> seconds )
		{
			count++;
			prev = current;
			current = current->next;
		}
		if( current -> next == NULL && temp->seconds > current->seconds)
		{
			current->next = temp;
			temp->next = NULL;
		}
		else if( count == 0)
		{
			if(current != NULL && temp->seconds <= current->seconds)
			{
				temp->next = current;
				mutex.head = temp;
				pthread_cond_signal(&mutex.cond2);
			}
			else
			{
			mutex.head = temp;
			temp->next = NULL;
			pthread_cond_signal(&mutex.cond2);
			}
		}
		else
		{
			current = prev;
			temp -> next = current -> next;
			current -> next = temp;
		}
	}
}
/*linked list insertion in ascending order*/
void delete( )
{
	my_struct *current = NULL;

	current = (my_struct *)mutex.head;
	seconds1 = current -> seconds;
	strcpy(message1,current->message);

	mutex.head = (my_struct *)current->next;
	free(current);

}
/*servicing a node*/
void *fun(void *p)
{
	int status;
	struct timespec time1;
	    while(1){
					
			pthread_mutex_lock(&mutex.mutex);

			if(mutex.head == NULL)
	    	{	
				pthread_cond_wait(&mutex.cond1,&mutex.mutex);
	    	}

			delete();
			seconds2 = seconds1 - time(NULL);
			time1.tv_sec = seconds1;
		
			if(pthread_cond_timedwait(&mutex.cond2,&mutex.mutex,&(time1)) == 110)
			{		
				printf("(%lu) %s\n",(seconds2),message1);
				pthread_mutex_unlock(&mutex.mutex);
			}
			else
			{	
				my_struct *back =(my_struct *) malloc(sizeof(my_struct));
				back->seconds = seconds1;
				strcpy(back->message , message1);
				insert(back);
				pthread_mutex_unlock(&mutex.mutex);
		
			}
		}
}


int main()
{
	my_struct *alarm;
	unsigned int seconds;
	int status;
	char line[120];
	char message[64];
	int pid;
	pthread_t thread;

	
	status = pthread_create(&thread,NULL,fun,NULL);
	while(1){
		printf("Alarm:");
		
		if(status != 0)
		{
			printf("pthread_create failed");
		}
	
		if(fgets(line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen(line) <= 1){ 
			free(alarm);
			continue;
					}
		alarm = (my_struct *)malloc(sizeof(my_struct));
		
		if(sscanf(line,"%d %64[^\n]",&seconds,message)<2)
		{
			fprintf(stderr,"Bad command\n");
			free(alarm);alarm = NULL;
			printf("line");
			continue;
		}
	
		alarm->seconds = time(NULL) + seconds;
		strcpy(alarm->message,message);
		pthread_mutex_lock(&mutex.mutex);//locking
		insert(alarm);
		pthread_mutex_unlock(&mutex.mutex);//unlocking
		
		}
	pthread_exit(NULL);
}
