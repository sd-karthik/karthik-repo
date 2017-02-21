#include <stdio.h>

        struct temp

        {

            int a;

        } s;

        void change(struct temp);

        main()

        {

            s.a = 10;

            change(s);

            printf("%d\n", s.a);

        }

        void change(struct temp s)

        {

            s.a = 1;

        }
