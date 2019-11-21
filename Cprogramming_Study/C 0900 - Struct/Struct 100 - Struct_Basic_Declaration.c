#include <stdio.h>

int main(void) {
    struct stud{
        int id;
        char grade;
        double points;
    } s1, *ps1 = &s1;

    s1.id = 23; // == (*ps1)->id == ps1->id
    s1.grade = 'A'; // == (*ps1)->grade == ps1->grade
    s1.points = 97.2; // == (*ps1)->points == ps1->points

    printf("%d, %c, %.1lf\n", s1.id, s1.grade, s1.points);
    printf("%d, %c, %.1lf\n", (*ps1).id, (*ps1).grade, (*ps1).points);
    printf("%d, %c, %.1lf\n", ps1->id, ps1->grade, ps1->points);
    return 0;
}
