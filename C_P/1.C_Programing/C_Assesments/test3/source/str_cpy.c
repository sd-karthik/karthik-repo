#include"header.h"

void str_cpy(char *str1, char *str2)
{
	int i;
	int len;
	int count = 0;
	int pos;
	int k=0;
	int j;
	len = str_len(str1)-2;

	for( i = len; i >= 0; i-- )
    {
        if( *(str1+i) == ' ' || (i == 0))
        {    
			
			if(i == 0)
			{		
				for(j=0;  count >= 0; j++, count--)
				{
					*(str2+k) = *(str1 + i + j);
					k++;
				}
			}

		else {	
				for(j=0;  count > 0; j++, count--)
				{
					*(str2+k) = *(str1 + i + j + 1);
					k++;
				}
			}

			*(str2 + k++) = ' ';
			count = -1;
			}
		count++;
	}
	printf("str1=%s\nstr2=%s\n", str1, str2);

}
