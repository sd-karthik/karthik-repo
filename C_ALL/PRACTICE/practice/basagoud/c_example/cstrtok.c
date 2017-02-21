input = my_strtok(dst , src);		/* 1st call to fun my_strtok */
printf("[ %s ] ",input);
do {
	input = my_strtok(NULL,src);	/* extacting tokens till it reaches '\0' */
	if( input )
		printf("| [ %s ] ",input);
}while(input);
char *my_strtok(char *str, const char *delim)
{
        const char *temp;               /* Take two temporary pointer */
        static char *temp2;
        char *temp1;

        if (str != NULL){               /*Check is NULL or not */
                temp1 = str;
                temp2 = temp1;
        }
        else
                temp1 = temp2;
        for (str = temp1; *temp2; temp2++) { /* Check the full string */
                for (temp = delim; *temp;temp++) {      /* Check if the delimiter
                                                           is present or not */
                        if (*temp == *temp2) {
                                *temp2 = '\0';  /* If present put NULL on that
                                                   position */
                                temp2++;
                                for (; *temp2 && strchr(delim, *temp2); temp2++);/*Checking
                                                                                   consecutive
                                                                                   delimiter */
                                return str;     /*returning token */
                        }
                }
        }       if(*str != '\0')
        return str;             /* returning token */

        return NULL;            /* if token not present then retruning NULL */
}
