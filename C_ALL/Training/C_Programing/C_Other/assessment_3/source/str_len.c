int str_len(char *ch)
{
        int count = 0;
        while(*(ch + count++) != '\0')  ;
        return (count-1);
}
