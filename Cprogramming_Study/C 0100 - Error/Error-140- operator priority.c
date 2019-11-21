#include <stdio.h>

int main(void)
{
   	int a, b;

    scanf("%d%d", &a, &b);
    if( ! a%b!=0 ) {//operator_priority + zero_division
        printf("%d is a multiple ",a);
        printf("of %d.\n", b);
    }
    return 0;
}
