#include <stdio.h>

        struct p

        {

            int x;

            char y;

        };

        int main()

        {

            struct p p1[] = {1, 92, 3, 94, 5, 96};

            struct p *ptr1 = p1;

            int x = (sizeof(p1) / sizeof(ptr1));

            if (x == 1)

                printf("%d\n", ptr1->x);

            else

                printf("false\n");

        }
