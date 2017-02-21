#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


char message1[60] = "Four score and seven years ago ...";
char message2[60] = "abcdefghijklmnopqrstuvwxyz";
char msg[20] = "0123456789";
char temp[60];


void *
mem_cpy(void *dst, const void *src, size_t n)
{
        void *temp = dst;
        while (n) {
                *(char *)dst++ = *(char *)src++;
                n--;
        }
        return temp;
}
void *
mem_move(void *dst, const void *src, size_t n)
{
        void *buff, *temp = dst;
        if(!(buff = malloc(n))) {
                perror("malloc");
                exit(0);
        }
        buff = mem_cpy(buff, src, n);
        dst  = mem_cpy(dst, buff, n);
}

int main()
{
#if 1
	printf("\nmessage1[] before memset():\t%s\n", message1);
	memset(message1 + 5, '@', 10);
	printf("\nmessage1[] after memset():\t%s\n", message1);
	strcpy(temp, message2);
	printf("\n\nOriginal message: %s", temp);
	mem_cpy(temp + 4, temp + 16, 10);
	printf("\nAfter memcpy() without overlap:\t%s\n", temp);
	strcpy(temp, message2);
	mem_cpy(temp + 6, temp + 4, 10);
	printf("\nAfter memcpy() with overlap:\t%s\n", temp);
	strcpy(temp, message2);
	printf("\n\nOriginal message: %s", temp);
	mem_move(temp + 4, temp + 16, 10);
	printf("\nAfter memmove() without overlap:\t%s", temp);
	strcpy(temp, message2);
	mem_move(temp + 6, temp + 4, 10);
	printf("\nAfter memmove() with overlap:\t%s\n", temp);

#endif

#if 0
	strcpy(temp, msg);
        printf("\n\nOriginal message: %s", temp);
        memcpy(temp + 1, temp + 7, 2);
        printf("\nAfter memcpy() without overlap:\t%s\n", temp);
        strcpy(temp, msg);
        memcpy(temp + 4, temp + 2, 6);
        printf("\nAfter memcpy() with overlap:\t%s\n", temp);

#endif
	return 0;
}
