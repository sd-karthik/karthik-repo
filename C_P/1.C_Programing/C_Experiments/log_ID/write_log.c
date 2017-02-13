#include<stdio.h>
#include<stdlib.h>

int main()
{
	int j;
	char error_discription[32][30] = {"Networking issue","Hardware","Display","power pins","heating","hard disk","storage inefficiency","cd rom drive","audio drivers","Graphic card","timer","Email issue","keyboard","mouse","usb port","audio jack","printer","cooling fan","RAM","SMPS","virus foun","Malware detected","firewall breached","file corrupted","System not opening","Access denied","password error","speakers not working","drivers fault","wifi driver not working"};

	int system_id;
	int log_id;
	
	FILE *f;
	f=fopen("log_1.txt","w");
	
	if( f == NULL)
	{
		printf("\n file is not found");
		exit(-1);
	}
	else
	{
		for( j = 0 ; j <= 1000; j++)                                            
        { 
		system_id = ( rand() % 30 );
		if( system_id  == 0)
			system_id++;

		log_id = rand() % 30; 
	
			fprintf(f,"%d,system_%d,%s\n",(log_id + 1),system_id,error_discription[log_id]);
		}
	}
	fclose(f);
	return 0;
} 
