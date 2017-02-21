# include <stdio.h>

int main()
{
	char *s = "gbalsoftwited";

	char * s2 = "arelimedgelo";

	int i ;

	char *temp = s;
	char *temp2 = s2;
	for(i = 1; i < strlen(temp)  ; i++){
		 
		printf("%.*s ", i, temp);
		if((strlen(temp2) - (i * 2) )>0) {
		printf("%.*s ", i + 1, (temp2 + strlen(temp2) - (i *2)));
		}
		i++;
		temp = temp + (i - 1);
	}

	if(i%2 == 0)
	printf("%.*s", strlen(s2+i)- i/2, temp2); 
	else 

	printf("%.*s", strlen(s2+i)- i/2 + 1, temp2); 
	printf("\n");

	return 0;
}

