
int my_strlen(char *str)
{
	char *s = str;
	if(!str)
		return -1;
	while(*s)
		++s;

	return (s - str);
}



char *my_strcpy(char *dst , const char* src)
{
	char *ret = dst;
	char *s = (char *) src;
	while ( *dst++ = *s++ )
	;

	return ret;
}

char * my_str_n_cpy( char *dst , const char *src , int  n)
{
	char *ret = dst;
	char *s = (char *) src;
	while ( *s && n-- > 0 )
		*dst++ = *s++;

	while ( n-- > 0)
		*dst++ = 0 ; /* padding dest with 0 ,if n > strlen(src) */
	
	return ret;
}	

int my_strcmp(const char *s1 , const char *s2)
{
	char *t1 = (char *) s1;
	char *t2 = (char *) s2;
	for ( ; *t1 == *t2 ; ++t1 , ++t2 )
		if( !*t1 )
			return 0;
	return ( *t1 - *t2 );
}

int my_str_n_cmp(const char *dst , const char *src , size_t n)
{
	for ( ; *(char *) dst == * (char *) src ; ++dst , ++src)
		if ( *src || --n <= 0 )
			return 0;

	    return (*(char *)dst - *(char *)src) ;

}

char *my_strcat(char *dst , const char*src)
{
       	int my_strlen(const char *);
	 char *my_strcpy(char * , const char *);

	 dst  = my_strcpy((dst + my_strlen(dst)), src );
	 return dst;
}

char* my_str_n_cat (char *dst , const char * src , size_t n) 
{
	char *ret = dst;
	 (char *) my_str_n_cpy( (dst + my_strlen( dst )) , src , n);
	 return ret;
}

int my_str_n_casecmp(const char *s1 , const char *s2 , int n)
{
	char ch1 , ch2;
	
	ch1 = (char) TOLOWER((char) *s1); 
	ch2 = (char) TOLOWER((char) *s2);

	while (  ch1 == ch2 ) {
		if ( !ch1 || --n <= 0)
			return 0;
		++s1 ; ++ s2;
		ch1 = (char) TOLOWER((char) *s1); 
		ch2 = (char) TOLOWER((char) *s2);
	}

	return ch1 - ch2;

}

char *my_strchr(const char *str , int c)
{
	char *tmp = (char *) str;

	while( *tmp ) {
		if ( *tmp == c )
			return tmp;
		++tmp;
	}

	return (char *)0;
}

char *my_str_r_chr(const char *s , int c) 
{
	char *ps = (char *) s;
	char *ret = (char *) 0 ;
	while( *ps) {
	       if ( *ps == c )
	       		ret = (char *) ps;
		 ++ps;
 	}

	return ret;
}

size_t my_strspn(const char * s , const char* accept)
{
	char* my_strchr(const char * , int c);
	size_t n = 0;
	char *ps = (char *)s , *pacp = (char *) accept;

	while  ( *ps ) {
		if ( !my_strchr( pacp , *ps ) )
			break;
		++n;
		++ps;
	}

	return n;
}

int  my_str_c_spn(const char *str , const char * reject)
{
	int n = 0;
	char *pstr = (char *) str;

	while ( *pstr ) {
		if ( my_strchr( reject , *pstr) )
			break;
		++n;
		++pstr;
	}

	return n;
}

char *my_strpbrk ( const char * s , const char * accept )
{
	char *str = (char *) s;
	char *acp = (char *) accept;

	while ( *acp ) {

		while ( *str ) {
			if ( *str == *acp)
				return str;
			++str;
		}
		str = (char *) s;
		++acp;
	}
	return (char *) 0;
}

char * my_strstr (const char *s1 , const char *s2)
{
	int my_strlen(const char *);
	int l1 = my_strlen(s1) , l2 = my_strlen(s2);
	int i , j;

	for (i = 0 ; i <= (l1 - l2 ) ; ++i) {
		for( j = 0 ; j < l2 && s2[j] == s1[i + j] ; ++j)
		;

		if( j >= l2 )
			return (char *)( s1 + i );
	}
	return (char *)0;
}


input = my_strtok(dst , src);		/* 1st call to fun my_strtok */
printf("[ %s ] ",input);
do {
	input = my_strtok(NULL,src);	/* extacting tokens till it reaches '\0' */
	if( input )
		printf("| [ %s ] ",input);
}while(input);

char * str_tok(char *str, char *limit)
{
        char *temp1 = str;
        char *temp2 = limit;
        int flag = 0;

        while (*str) {
                while (*limit) {
                        if (*str == *limit) {
                                str = strcpy(str, str+1);
                                flag = 1;
                                break;
                        } else
                                limit++;
                }
                limit = temp2;
                if (flag == 1)
                        str--;
                flag = 0;
                str++;
        }
        return temp1;
}

