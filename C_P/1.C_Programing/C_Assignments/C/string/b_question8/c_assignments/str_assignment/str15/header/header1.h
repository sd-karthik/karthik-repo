 #include <stdio.h>

#include <string.h>

#include <stdlib.h>

#define MAX 64

void str_cpy(char *sbuf , char *dbuf);

extern int valid(char str[MAX]);

void copy_n(char *sbu,char *dbu, int n);

char *char_add_instr(char *buf , char c);

char *str_n_cat (char *sbu, char *dbu, int num);

int str_len(char *str);

char  *reverse(char *str);

char *squeeze (char *str1);

int strsp(char *sbu, char *dbu);

char *rmstr(char *sbu, char *dbu);

char *inse(char *str,const char ch, int pos);
