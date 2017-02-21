#include<stdio.h>

#if 1
void main()
{
	char a[100];
	int i;
	int len=0;
	char newchar;
	int pos;

	printf("Enter a string\n");
	fgets(a, 100, stdin);

	printf("Enter the char to input\n");
	scanf("%c", &newchar);

	printf("Enter the position for the character to input\n");
	scanf("%d", &pos);

	while(a[i] != '\0');	
	{
		len++;
		i++;
	}

	for(i = len-1; i != pos; i--)	{
		a[i+1] = a[i];
	}
	
	a[pos]= newchar;

	printf("The output string is:\n%s", a);

}

#endif

#if 0
void main()
{
	char a[100];
	char b[100];
	int i;
	int len=0;
	char newchar;
	int pos;

	printf("Enter a string\n");
	fgets(a, 100, stdin);

	printf("Enter the char to input\n");
	scanf("%c", &newchar);

	printf("Enter the position for the character to input\n");
	scanf("%d", &pos);

	while(a[i] != '\0');	
	{
		len++;
		i++;
	}

	for(i = 0; i!='\0'; i++)	{
			if( i == pos)
			{
				b[i] = newchar;
				goto l1;
			}

			b[i]=a[i];
		}

	l1:		for(; (i >pos) && (i != '\0'); i++){
			{
				b[i+1] = a[i];
			}

	}
	
	b[i]='\0';
	printf("The output string is:\n%s", b);

}

#endif
