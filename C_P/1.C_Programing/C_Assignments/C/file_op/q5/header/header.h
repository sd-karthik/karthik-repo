#include<stdio.h>
#include<stdlib.h>

#define MAX 100
struct EH {
    unsigned char e_ident[16];
    short e_type;
    short e_machine;
    int e_version;
    unsigned int e_entry;
};

int a2i(char *);
