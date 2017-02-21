# include <stdio.h>
#include <stdlib.h>
char cmd_res_line[256];
char total_cmd_res[25600];

#define SHELL 0
//WARNING! NO HANDLING FOR VERY_LONG COMMAND READS YET
#if SHELL
char* exec_get_out(char * cmd) {
		FILE* pipe = popen(cmd, "r");
#else

char* exec_get_out() {
		FILE* pipe = fopen("a.txt", "r");
#endif

		if (!pipe) 
				return NULL;

		total_cmd_res[0] = 0;

		while(!feof(pipe)) {
				if(fgets(cmd_res_line, 256, pipe) != NULL)
				{
						//TODO: add handling for long command reads...
						strcat(total_cmd_res,cmd_res_line);
				}
		}
#if SHELL
		pclose(pipe);
#else
		fclose(pipe);
#endif
		return total_cmd_res;
}
int main()
{
		int i;
		unsigned char imsi[8];
		imsi[7]=0;
#if SHELL
		char* res = exec_get_out("service call iphonesubinfo 3");  
#else
		char* res = exec_get_out();  
#endif
		if (strlen(res) > 210) {
				imsi[0] = (((res[75] - 0x30) & 0x0F)<<4);
				imsi[0] |= ((res[77] - 0x30) & 0xF0);	
				imsi[1] = (((res[79] - 0x30) & 0x0F)<<4);
				imsi[1] |= ((res[81] - 0x30) & 0x0F);
				imsi[2] = ((res[136] - 0x30) & 0x0F)<<4;
				imsi[2] |= ((res[138] - 0x30) & 0x0F);
				imsi[3] = (((res[140] - 0x30) & 0x0F)<<4);
				imsi[3] |= ((res[142] - 0x30) & 0x0F);
				imsi[4] = (((res[144] - 0x30) & 0x0F)<<4);
				imsi[4] |= ((res[146] - 0x30) & 0x0F);
				imsi[5] = (((res[148] - 0x30) & 0x0F)<<4);
				imsi[5] |= ((res[150] - 0x30) & 0x0F);
				imsi[6] = (((res[205] - 0x30) &0x0F)<<4);
				imsi[6] |= ((res[207] - 0x30) & 0x0F);
				imsi[7] = (((res[209] - 0x30) & 0x0F)<<4);
				imsi[7] |= 0x00;
		}
		for(i=0;i<8;i++)
				printf("%02x",imsi[i]);
		puts("\n");
}
