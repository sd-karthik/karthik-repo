/* 
 * NAME		: 	RAW SOCKET
 * 
 * AUTH		:	KARTHIK
 * 
 * DOC		:	01 / 03 / 2017 
 * 
 * 
 */


#include "header.h"

int main()
{
	int fds;		/* server session */
	char buff[100];
	struct sockaddr_in my_addr;
	struct sockaddr_in res_addr;
	socklen_t size = sizeof(struct sockaddr_in);
	struct tcphdr tcp;
	char status[10];

	/*	__be16  source;                                                		__be16  dest;  
	__be32  seq;
	__be32  ack_seq;
	__u16   res1:4, 
	doff:4,                                                
	fin:1,
	syn:1,
	rst:1,
	psh:1,         
	ack:1,   
	urg:1,   
	ece:1, 
	cwr:1,
	__u16   doff:4,       
	res1:4,   
	cwr:1,           
	ece:1,      
	urg:1,        
	ack:1,            
	psh:1,      
	rst:1,    
	syn:1,  
	fin:1;      
	__be16  window;  
	__sum16 check;       
	__be16  urg_ptr;  
		 */

	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(1000);
	my_addr.sin_addr.s_addr = inet_addr("172.16.5.25");
	printf("SERVER:\n");

	if(-1 ==(fds = socket(PF_INET,SOCK_RAW,IPPROTO_UDP))) {
		perror("socket");
		exit(1);
	}
	if(-1 == (bind(fds, (struct sockaddr *)&my_addr, size))) {
		perror("bind");
		exit(1);
	}
	
	printf("<------------------ SERVER ------------------>\n");
	printf("ROW SESSION ESTABLISHED\n");
	for(;;) {

		printf("RECIEVE MESSAGE:");
		if(-1 == (recvfrom(fds, buff, sizeof(buff), 0, (struct sockaddr *)&res_addr, &size))) {
			perror("recvfrom");
			exit(1);
		}
		printf("%s\n", buff+20);
		memset(buff, '\0', sizeof(buff));

		fgets(buff, 100, stdin);
		printf("SEND MESSAGE:\n");
/*		if(strcasecmp(buff, "exit"))
		{
			printf("SESSION COMPLETE: EXIT\n");
			exit(1);
		}
*/		if(-1 == (sendto(fds, buff, sizeof(buff), 0, (struct sockaddr *)&res_addr, size))) {
			perror("recvfrom");
			exit(1);
		}
		memset(buff, '\0', sizeof(buff));
	}

	close(fds);
	return 0;
}

