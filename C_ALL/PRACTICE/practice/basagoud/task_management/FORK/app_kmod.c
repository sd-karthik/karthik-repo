 # include <stdio.h>
 # include <stdlib.h>
 # include <fcntl.h>
 # include <sys/syscall.h>
int main()
{
		int fd = open("/dev/myChar", O_RDWR);


		printf("PID ==> %d\n", syscall(SYS_gettid));
		if(fd < 0 ){
				printf("File opening failed\n");
		} else {
				ioctl(fd, syscall(SYS_gettid), 0);
		}

		return 0;
}

