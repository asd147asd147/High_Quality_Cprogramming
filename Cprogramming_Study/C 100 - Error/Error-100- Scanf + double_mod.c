#include <stdio.h>

int main(void)
{
    double c, d=3.0;

    scanf("%lf", c); //Run_Time Error
    printf("remain = %f\n", c%d); //Syntax Error
    return 0;
}
