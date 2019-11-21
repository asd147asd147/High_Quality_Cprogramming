#include <stdio.h>

typedef struct stud {
    int id;
    char* name;
    double points;
} STUD;

void print_STUD(STUD* s){
    //Your Code!
}

int main(void) {

    STUD stud_array[] = { {1,"Choi",9.9}, {2,"Park",0.1}, {3,"Kim",5.0}, {4,"Lee",3.0}, {5,"Moon",9.5}, {-1, NULL, 0} };
    print_STUD(stud_array);

    return 0;
}
