#include <stdio.h> 
int main(void)
{
    int a, b, c, sum;

    printf("Input three integers: ");
	scanf("%d%d%d",&a,&b,&c);
	sum = 2*(a+b+c)+7;
	
	printf("Twice the sum of your integers plus 7 is %d --- bye!",sum);
    

    return 0;
}
