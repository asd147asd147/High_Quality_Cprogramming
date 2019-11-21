#include <stdio.h>

typedef struct stud {
    int id;
    char* name;
    double points;
} STUD;

void print_STUD(STUD* s){
    //400 code1
}

void swap_STUD(STUD* s1, STUD* s2){
    //Your code!
}

void sort_STUD(STUD* s, int n){
    //Your code!
}

int main(void) {

    STUD stud_array[] = { {1,"Choi",9.9}, {2,"Park",0.1}, {3,"Kim",5.0}, {4,"Lee",3.0}, {5,"Moon",9.5}, {-1, NULL, 0} };
    printf("Before Sort\n");
    print_STUD(stud_array);
    sort_STUD(stud_array,sizeof(stud_array)/sizeof(STUD));
    printf("After Sort\n");
    print_STUD(stud_array);

    return 0;
}
