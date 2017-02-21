#include <stdio.h>

        struct p

        {

            int x;

            char y;

        };

        typedef struct p* q*;

        int main()

        {

            struct p p1[] = {1, 92, 3, 94, 5, 96};

            q ptr1 = p1;

            printf("%d\n", ptr1->x);

        }
