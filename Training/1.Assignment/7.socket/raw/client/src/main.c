#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>


int main()
{
	int sok_fd;
	char buff[100];
	struct sockaddr_in my_addr;
	struct sockaddr_in res_addr;
	socklen_t size = sizeof(struct sockaddr_in);
	char status[10];

	//memset(&my_addr, '\0', sizeof(struct sockaddr_in));
	
	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(1000);
	my_addr.sin_addr.s_addr = inet_addr("172.16.5.25");

	sok_fd = socket(PF_INET,SOCK_RAW, IPPROTO_UDP);
	if(sok_fd < 0){
		perror("socket");
		exit(1);
	}

	printf("<--------------- CLIENT ----------------->\n");
	printf("ROW SESSION ESTABLISHED\n");

	for(;;) {
	
		printf("\nSEND MESSAGE:\t");
		fgets(buff, 100, stdin);	
/*		if(strcasecmp(buff+20, "exit"))
        {
            printf("SESSION COMPLETE: EXIT\n");
            exit(1);
        }	
*/		if ((sendto(sok_fd, buff, sizeof(buff), 0,(struct sockaddr *)&my_addr, size)) < 0) {
			perror("sendto");
			exit(1);
		}

		memset(buff, '\0', sizeof(buff));
		printf("\nRECIEVED MESSAGE:\t");
		if((recvfrom(sok_fd, buff, sizeof(buff), 0,(struct sockaddr *)&my_addr, &size)) < 0) {
			perror("recvfrom");
			exit(1);
		}
		printf("%s\n", buff+20);
		memset(buff, '\0', sizeof(buff));
	}
	return 0;
}

