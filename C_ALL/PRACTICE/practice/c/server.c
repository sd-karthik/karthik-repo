#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <stdlib.h>
#include <string.h>


void * thread (int * arg) {

		char * buff = (char *) malloc (64);
		printf ("client id = %d\n", *arg);
		//receive
		if ( -1 == recv ( *arg, buff, 64, 0 ) ) {
				perror ("Error in receiving\n");
		}
		else {
				printf ("\nyogesh> %s", buff);
		}
		return 0;
}

int main (int argc, char **agrv)
{
		int sock_fd;
		int new_sock_fd;
		int bind_val;
		int listen_val;
		socklen_t len;
		pthread_t th_id;
		char * buff = (char *) malloc (64);
		char * buff1 = (char *) malloc (64);
		ssize_t No_of_byte_recv;
		struct sockaddr_in server_sock;

		if (2 > argc ) {
				perror ("port number missing\n");
				exit (0);
		}

		if ( ( sock_fd = socket (AF_INET, SOCK_STREAM, 0) ) == -1) {
				printf ("Error in socket creation\n");
		}
		printf ("Socket created successful, fd = %d\n",sock_fd);


		//Binding
		server_sock.sin_family = AF_INET;
		server_sock.sin_port  = htons(atoi(agrv[1]));
		server_sock.sin_addr.s_addr  = inet_addr("172.16.5.134");

		if ( ( bind_val = bind ( sock_fd, (struct sockaddr *) &server_sock, sizeof( server_sock ) ) ) == -1 ) {
				perror ("Bind error\n");
		}
		else if (bind_val == 0) {
				printf ("Bind successful\n");
		}

		//Listening
		if ( ( listen_val = listen( sock_fd, 2 ) ) == -1 ) {
				perror ("Error in listen\n");
		}
		else if ( listen_val == 0 ) {
				printf ("Listen successful\n");
		}

		//Accept
		len = sizeof (server_sock);
		while ( 1 ) {
				if ( ( new_sock_fd = accept (sock_fd, (struct sockaddr *)&server_sock, &len ) )  == -1 ) {
						perror ("Error in accept\n");
				}

				else if (new_sock_fd > 0 ) {
						printf ("Accept successful\n");
				}

				printf ("ip addr = %s\n", (char *)inet_ntoa(server_sock.sin_addr.s_addr));
				pthread_create (&th_id, NULL, &thread, &new_sock_fd);

		}

		/*		pid_t pid;
				pid = fork();
				if (pid > 0)
				{
				while (1) {

				memset (buff, '\0', 64);
		//receive
		if ( ( No_of_byte_recv = recv ( new_sock_fd, buff, 64, 0 ) ) == -1 ) {
		perror ("Error in receiving\n");
		}

		else if (No_of_byte_recv > 0) {
		printf ("\nyogesh> %s", buff);
		}
		}
		}
		else if (pid == 0) {
//sending
while(1) {
memset (buff1, '\0', 64);
		//		strcpy (buff1, "vinu>");
		fgets (buff1 , 64, stdin);
		//		*(buff1 + strlen (buff1) -1) = '\0';
		if (-1 == send (new_sock_fd, buff1, 64,0))
		perror ("send error\n");

		}
		}
	*/
		return 0;
}




