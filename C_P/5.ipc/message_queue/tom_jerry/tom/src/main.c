/* File Name : Tom-jerry message queue
 *
 * DOC 		:	06/ 02 /2017
 *
 * AUTHOUR	:	KARTHIK
 *
 * Function	: 	message queue implementation
 *				-> TOM application
 * 				-> mq_open to create the message queue
 *				-> Read the message from the keyboard
 *				-> mq_send to send the message across the queue
 *				-> memset to clear the buffer
 * 				-> mq_recieve to recieve the message
 *				-> "bye" is sent to end the conversation(EOC)
 *				-> when recieved "bye" tom sends the bye and EOC
 *				-> EOC by unlink
 */

#include "header.h"

#define N_MAX 64

int main(void)
{
	mqd_t mqdes = NULL; /* message queue descriptor */
	char *buf = NULL;	/* buffer */
	struct mq_attr *attr = NULL;

	buf = (char *) malloc(sizeof(char ) * N_MAX);
	attr = (struct mq_attr *) malloc(sizeof(struct mq_attr));	

	/* mq_open to create the queue with RDWR permission */
	mqdes = mq_open("/tom_jerry", O_CREAT | O_RDWR, 0666, NULL);
	printf(YELLOW"<------------------ TOM --------------------->\n"RESET);
	printf(RED"Press \"Enter\" to exit\n"RESET);
	while(1) {
		/* TO get the attribute */
		if ((mq_getattr(mqdes, attr)) == -1)                 
		{
			perror("mq_getattr");
			exit(1);
		}

		/* Tom to send the message */
		printf(BLUE"TOM SEND:[%d]\t"RESET, mqdes);	
		fgets(buf, N_MAX, stdin);	
		if((mq_send(mqdes, buf, strlen(buf), 1)) == -1)
		{
			perror("mq_send");
			exit(EXIT_FAILURE);
		}

		/* To clear the buf */
		memset(buf, '\0', strlen(buf));

		/* Tom to receive the message */
		if((mq_receive(mqdes, buf, attr->mq_msgsize, NULL)) == -1)
		{
			perror("mq_recieve");
			exit(EXIT_FAILURE);
		}
		printf(GREEN"TOM RECIEVE:\t"RESET);
		printf(GREEN"%s\n"RESET, buf);

		if(strcasecmp(buf, "bye") < 0)
		{	
			memset(buf, '\0', strlen(buf));

			printf(BLUE"TOM SEND:[%d]\t"RESET, mqdes); 
			fgets(buf, N_MAX, stdin);   

			if((mq_send(mqdes, buf, strlen(buf), 1)) == -1)
			{ 
				perror("mq_send");
				exit(EXIT_FAILURE);
			}
			/* To unlink the message queue */
			mq_unlink("/tom_jerry");
			printf(YELLOW"<------------------------------------------------->\n"RESET);
			return 0;
		}
	}
}	
