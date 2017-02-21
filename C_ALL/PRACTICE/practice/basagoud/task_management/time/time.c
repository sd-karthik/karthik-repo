# include <stdio.h>
# include <time.h>

int main()
{

		time_t t;

		printf("Time : %ld\n" , time(&t));
		printf("Time : %ld\n" , time(0));

		
		return 0;
}
