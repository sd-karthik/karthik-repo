# include <stdio.h>
# include <fcntl.h>
int main()
{
		int size = 0;

		int fd ;

		fd = open("file.txt",O_RDONLY);

			perror("open");
	    size = lseek(fd, 0, 2);

		printf("%d\n", size);
		if (size == -1) {
				perror("error\n");
		}
	
		printf("%d\n", size);

		return 0;
}
