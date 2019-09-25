#include <stdio.h>

int main(void)
{
   	int b=1, e=5;
    int n;

    scanf("%d", &n);
    if(b<=n && n<=e)
        printf("%d is in the range",n);
        printf("[%d, %d]?\n",b,e);
    else //without_a_previous_'if'
        printf("%d is not in the range",n);
        printf("[%d, %d]?\n",b,e);
    return 0;
}
