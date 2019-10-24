#include <stdio.h> 
int main(void)
{
    float nC, nF;

    printf("Enter Fahrenheit temperature:\n");
    scanf("%f",&nF);

    nC = 5.0/9.0 * (nF - 32);

    printf("%.1f degrees Fahrenheit is %.1f degrees Celsius.\n", nF, nC);

    return 0;
}
