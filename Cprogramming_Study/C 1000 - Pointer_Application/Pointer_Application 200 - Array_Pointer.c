#include <stdio.h>

int main(void) {

    int x = 11;
    int y = 22;
    int z = 33;

    int data[3] = {x, y, z};
    int (*ptr_array)[3] = data;

    int i;
    for(i = 0; i < sizeof(*ptr_array)/sizeof(int); ++i)
        printf("(*ptr_array)[%d] : %d\n", i, (*ptr_array)[i]);

    return 0;
}
