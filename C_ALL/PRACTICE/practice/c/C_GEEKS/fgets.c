#if R
/*
* fgets will not lead to stack smashing error
*/
# include  <stdio.h>

#define MAX_LIMIT 20


int main(void)
{
		char str[MAX_LIMIT];
		fgets(str, MAX_LIMIT, stdin);
		int num  = printf("%s\n", str);

		printf("strlen(str) --> %d\n", num);

		return;
}

#endif 

#if M

/*gets  does not check array bound */

/*
 * If the number of input characters are more than the size of str array 
 *
 * Stack smashing will be detected
 */

# include <stdio.h>

int main(void)
{
		char str[20];
		gets(str);
		printf("%s", str);
		putchar(10);
		return;
}
#endif
