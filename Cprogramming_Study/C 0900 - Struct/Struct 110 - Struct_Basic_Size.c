#include <stdio.h>

int main(void) {
    struct stud1{
        char grade1;
        int id;
        char grade2;
    } s1;
    struct stud2{
        char grade1;
        char grade2;
        int id;
    } s2;
    struct stud3{
        int id;
        char grade1;
        char grade2;
    } s3;

    printf("s1 size : %d\n",sizeof(s1));
    printf("s2 size : %d\n",sizeof(s2));
    printf("s3 size : %d\n",sizeof(s3));

    return 0;
}
