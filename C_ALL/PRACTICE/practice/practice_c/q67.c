#include <stdio.h>

        struct p

         {

            int x;
            int z;
            int y;

        };

        int main()

        {

            struct p p1[] = {1, 3, 4, 5, 6,  67, 78};

            struct p *ptr1 = p1;

            int x = (sizeof(p1) / 5);
			printf("%d\n", sizeof(p1));
			printf("%d\n", sizeof(ptr1));
			printf("%d\n", (ptr1 + 1) -> x); 
            if (x == 7)

                printf("%d %d\n", ptr1 -> x, (ptr1 + 2)->x);

            else

                printf("false\n");

        }
