#include <stdio.h>

int main(void)
{
    double celcius, fahrenheit;
    
    printf("Celcius: ");
    scanf("lf", &Celcius); //Case_Sensitive_Syntax Error
    fahrenheit = 9 / 5 * Celcius + 32; //Arithmetic_Logic Error
    printf("Fahrenheit: %f\n", fahrenheit);
    return 0;
}
