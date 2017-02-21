#include <stdio.h>

        struct p

        {

            int x;

            char y;

        };

        void foo(struct p* );

        int main()

        {

            typedef struct p* q;

            struct p p1[] = {1, 92, 3, 94, 5, 96};

            foo(p1);

        }

        void foo(struct p* p1)

        {

            q ptr1 = p1;

            printf("%d\n", ptr1->x);

        }
