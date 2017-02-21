#include <stdio.h>

int main()
{
        float f=0;
		float g = 0.1f;
        int i;

        for(i=0;i<10;i++)
                f = (float)(f + 0.1f);

		if(g ==(float) 0.1f) {
        	printf("value=%f\n", g);
			printf("value=%f\n", 0.1f);
		}
        if(f <= 1.0f)
                printf("f is 1.0 \n");
        else
                printf("f is NOT 1.0 value=%f\n", f);

        return 0;
}
