#include"header.h"

void disp()
{
    int d_front;

    for(d_front = front; d_front <= rear ; d_front--)
    {
        printf("%d\n", queue[d_front]);
    }

}

