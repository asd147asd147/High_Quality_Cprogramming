#include <stdio.h>

typedef struct stud{
    int id;
    char* name;
    double points;
} STUD;

int main(void) {

    STUD stud_array1[] = { {1,"Choi",9.9}, {2,"Park",0.1}, {3,"Kim",5.0}, {-1,NULL,0}};
    STUD stud_array2[] = { {4,"Lee",3.0}, {5,"Moon",9.5}, {-1,NULL,0} };

    STUD* stud_array[] = {stud_array1, stud_array2};

    int i, j;
    for(i = 0; i < sizeof(stud_array)/sizeof(STUD*); ++i){
        for(j = 0; ((*(stud_array+i))+j)->id != -1; ++j){
            printf("id : %d, name : %s, points : %lf\n",((*(stud_array+i))+j)->id,((*(stud_array+i))+j)->name, ((*(stud_array+i))+j)->points);
        }
    }

    return 0;
}
