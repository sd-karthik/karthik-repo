/********************************************structure with function pointer*************************************
*/

#include <stdio.h>
#include <stdlib.h>

struct my_struct
{
    int data;
    struct my_struct* (*set_data) (struct my_struct*,int);
};

struct my_struct* my_struct_set_data(struct my_struct* m, int new_data)
{
    m->data = new_data;
    return m;
}

struct my_struct* my_struct_create()
{
    struct my_struct* result = (struct my_struct*) malloc((sizeof(struct my_struct)));
    result->data = 0;
    result->set_data = my_struct_set_data;
    return result;
}

int main(int argc, const char* argv[])
{
    struct my_struct* thing = my_struct_create();
    thing->set_data(thing, 5000);
    printf("%d\n", thing->data);
    free(thing);
    return 0;
}
