#include <stdio.h>

typedef struct stud {
    int id;
    char* name;
    double points;
} STUD;

int main(void) {

    STUD stud_array[] = { {1,"Choi",9.9}, {2,"Park",0.1}, {3,"Kim",5.0}, {4,"Lee",3.0}, {5,"Moon",9.5}};
    int i;

    for(i = 0; i < sizeof(stud_array)/sizeof(STUD); ++i)
        printf("stud_array[%d]\n id:%d\n name:%s\n points:%lf\n\n",i,(stud_array+i)->id,(stud_array+i)->name,(stud_array+i)->points);
    return 0;
}
