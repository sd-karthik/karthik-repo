#include<stdio.h>

int main()
{
	int i = 3;
	
	switch (i) {
	case 2:
		printf("Hello\n");
		break;
	case 3:
		printf("Global ");
	case 4:
		printf("Edge \n");
		break;
	default :
		printf("Bye\n");
		break;
	}
	return 0;
}
