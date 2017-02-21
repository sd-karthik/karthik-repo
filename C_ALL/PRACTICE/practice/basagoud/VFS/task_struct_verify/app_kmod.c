# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>


int main ()
{

	int status;

	int fd1 = open("/dev/myChar", O_RDONLY);

	int fd2 = open("/dev/myChar", O_WRONLY);

	if (fd1 < 0 || fd2 < 0){
		perror ("unable to open the device\n");
	}	else{
			printf ("File opened successfully %d in read mode\n", fd1);
			printf ("File opened successfully %d in write mode\n", fd2);
			ioctl(fd1, getpid(), fd1);	

			getchar();
			ioctl(fd2, getpid(), fd2);
			getchar();

	}

	close (fd);
	return 0;
}
