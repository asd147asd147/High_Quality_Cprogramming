#include <stdio.h>
#include <time.h>

#define	MAX_NUM	10000
int is_prime(int n)
{
    //your code
}

int main(void)
{
    int n=0, nprime=0, max_prime=0;

    printf("**************************************************\n");

    for (n=1; n<=MAX_NUM; n++)	{
	if (is_prime(n)) {
	    nprime++;
	    max_prime = n;
	}
	if (n%(MAX_NUM/50)==0) printf("*");
    }
    printf("\n# of Prime numbers between 1 and %d : %d\n", MAX_NUM, nprime);
    printf("The maximum Prime number <= %d : %d\n", MAX_NUM, max_prime);
    return 0;
}
