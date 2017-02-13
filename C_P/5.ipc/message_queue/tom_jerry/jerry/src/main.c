/* File Name : Tom-jerry message queue  
 *
 * DOC      :   07/ 02 /2017
 *
 * AUTHOUR  :   KARTHIK
 *
 * Function :   message queue implementation
 *              -> JERRY application
 *              -> mq_recieve to recieve the message
 *              -> memset to clear the buffer
 *              -> Read the message from the keyboard
 *              -> mq_send to send the message across the queue
 *              -> "bye" is sent to end the conversation(EOC)
 *              -> when recieved "bye" jerry sends the bye and EOC
 */

#include "header.h"

#define N_MAX 64

int main(void)
{
    mqd_t mqdes = NULL; /* message queue descriptor */
    char *buf = NULL;   /* buffer */
    struct mq_attr *attr = NULL;

    buf = (char *) malloc(sizeof(char ) * N_MAX);
    attr = (struct mq_attr *) malloc(sizeof(struct mq_attr));

	if((mqdes = mq_open("/tom_jerry" , O_RDWR)) == -1)
	{
		perror("mq_open");
		exit(1);
	}
	
	printf(YELLOW "<------------------- JERRY ------------------>\n"RESET);
	printf(RED"Press \"Enter\" to exit\n"RESET);
	while (1) {
        /* To get the attribute */
		if ((mq_getattr(mqdes, attr)) == -1)
		{
			perror("mq_getattr");
			exit(1);
		}

        /* Jerry to receive the message */
	if ((mq_receive(mqdes, buf, attr->mq_msgsize, NULL)) == -1)
        {
            perror("mq_recieve");
            exit(EXIT_FAILURE);
        }
		
		printf(GREEN"JERRY RECIEVE:[%d]\t"RESET, mqdes);
        printf(BLUE"%s\n"RESET, buf);
		
		if (strcasecmp(buf, "bye") < 0)
		{
      	 	 /* To clear the buf */
        	memset (buf, '\0', strlen(buf));

	         /* Jerry to send the message */
			printf(GREEN"JERRY SEND:\t\t"RESET);
 	   		fgets(buf, N_MAX, stdin);   /* reading the message */
		
     	  	if((mq_send(mqdes, buf, strlen(buf), 1)) == -1)
      		{
        		perror("mq_send");
    	 	 	exit(EXIT_FAILURE);
			}
			printf(YELLOW"<-------------------------------------------->\n"RESET);
			return 0;
		}	
		
		memset (buf, '\0', strlen(buf));    
        
        /* Jerry to send the message */
        printf(BLUE"JERRY SEND:\t\t"RESET);
        fgets(buf, N_MAX, stdin);   /* reading the message */
    
        if((mq_send(mqdes, buf, strlen(buf), 1)) == -1) 
        {
            perror("mq_send");    
        	exit(1);
		}
	}
}
