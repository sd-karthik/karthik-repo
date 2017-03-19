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
	int status;
	char buff[100];
	char mesg[100];
	struct sockaddr_in my_addr;
	struct sockaddr_in res_addr;
	socklen_t size =  sizeof(struct sockaddr_in);

	my_addr.sin_family = PF_INET;
	my_addr.sin_port = htons(0);
	my_addr.sin_addr.s_addr = inet_addr(172.16.5.101);

	sok_fd = socket(PF_INET,SOCK_RAW,IPPROTO_RAW);
	if(sok_fd < 0){
		perror("socket");
		exit(1);
	}

	status = bind(sok_fd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr_in));

	if(status < 0) {
		perror("bind");
		exit(1);
	}


		status = recvfrom(sok_fd, buff, sizeof(buff), 0, (struct sockaddr *)&res_addr, &size);

		if(status < 0) {
			perror("recvfrom");
			exit(1);
		}

		printf("request recevied \n");
		printf("msg %s\n",buff);

		memset(buff, '\0', sizeof(buff));


	close(sok_fd);
	return 0;
}

