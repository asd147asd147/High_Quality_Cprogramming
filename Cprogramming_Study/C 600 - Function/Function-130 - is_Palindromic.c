#include <stdio.h>
int is_palindromic_number(int n)
{
    //Enter your code
}

int main(void)
{
    unsigned int n;

    printf("Enter a positive integer : ");
    scanf("%d",&n);

    if (is_palindromic_number(n))
	printf("is a palindromic number\n");
    else
 	printf("is not a palindromic number\n");

    return 0;
}
