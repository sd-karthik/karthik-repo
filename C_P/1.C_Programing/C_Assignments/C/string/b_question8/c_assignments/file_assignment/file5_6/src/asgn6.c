#include"header1.h"                                                             
                                                                                
int main(int argc,char *argv[])                                                 
{                                                                               
    FILE *fp;                                                                   
    char buf[200];                                                                            
    struct EH a;                                   
                                                                                
    if (NULL == (fp = fopen(argv[1],"rb"))){                                    
        printf("file not created\n");                                           
        exit(0);                                                                
    }                                                                           
    while(fread(&a,sizeof(a),1,fp) == 1) {
	printf("e_ident :%setype:%d\nemachine%d\neversion:%d\n"
			"eentry:%d\n",a.e_ident,a.e_type,a.e_machine,a.e_version,a.e_entry);                                   
	}
    fclose (fp);                                                                
}                                                                               
