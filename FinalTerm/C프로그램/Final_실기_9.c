#include <stdio.h>
typedef struct student {
    int id;
    char *pname;
    double points;
} STUD;

STUD *find_max_stud(STUD *std)
{
    STUD* maxstd = std;
    int i,j;
    for(i = 0; std[i].id != -1; i++){
        if(maxstd->points < std[i].points){
            maxstd = &std[i];
        }
    }
    return maxstd;
}

void sort_stud(STUD *std)
{
    int i;
    STUD* maxstud;
    STUD temp;
    for(i = 0; std[i].id != -1; i++){
        maxstud = find_max_stud(&std[i]);
        temp = std[i];
        std[i] = *maxstud;
        *maxstud = temp;
    }
}

int main(void)
{
    STUD pnuecs[] = { {1, "Choi", 9.9}, {2, "Park", 0.1},
		{3, "Kim", 5.0 }, {4, "Lee", 3.0 }, {5, "Moon", 9.5 },
		{6, "Kang", 7.0 }, {7, "Jeon", 0.9 }, {-1, NULL, 0 } };

    STUD *ps_array = pnuecs;
    sort_stud(pnuecs);

    printf("Points Descending Order\n");
    while (ps_array->id >= 0) {
        printf("%s: %.1f\n", ps_array->pname, ps_array->points);
        ps_array++;
    }
    return 0;
}
