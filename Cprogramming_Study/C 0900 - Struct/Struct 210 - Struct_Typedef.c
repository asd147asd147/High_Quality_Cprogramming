#include <stdio.h>

struct stud1 {
    int id;
    char grade;
    double points;
};

typedef struct stud2 {
    int id;
    char grade;
    double points;
} STUD2;

int main(void) {

    struct stud1 A; // stud A -> error;
    STUD2 B; // == struct stud2 B;

    A.id = 1;
    A.grade = 'a';
    A.points = 1.1;

    B.id = 2;
    B.grade = 'b';
    B.points = 2.2;

    printf("A id : %d\nA grade : %c\nA points : %lf\n\n",A.id, A.grade, A.points);
    printf("B id : %d\nB grade : %c\nB points : %lf\n",B.id, B.grade, B.points);

    return 0;
}
