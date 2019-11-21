#include <stdio.h>

int main(void)
{
   	int apple, stud //Omit_Semicolon
    
    scanf("%d%d", &apple, &stud);
    printf("remain = %d\n", apple%stud); //zero_division
    return 0;
}
