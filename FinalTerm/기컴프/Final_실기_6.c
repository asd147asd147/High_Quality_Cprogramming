#include <stdio.h> 
int is_palindromic_number(unsigned int n)
{
    unsigned int reverse_n=0;
    unsigned int i;
    for(i=n;i!=0;i=i/10){
    	reverse_n = reverse_n*10;
		reverse_n += i%10;
	}
	if(reverse_n==n){
		return 1;
	}
	return 0;
}

int main(void)
{
    unsigned int n;
	
    printf("Enter a positive integer : ");
    scanf("%u",&n);
	
    if (is_palindromic_number(n))
	printf("is a palindromic number\n");
    else 
 	printf("is not a palindromic number\n");

    return 0;
}
