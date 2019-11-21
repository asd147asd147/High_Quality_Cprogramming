#include <stdio.h>

int main(void) {
    typedef char c;     // #define c char
    typedef int i;      // #define i int
    typedef float f;    // #define f float
    typedef long long ll; // #define ll long long

    c grade = 'A';
    i num1 = 32;
    f points1 = 92.7f;
    ll num2 = 5243;

    printf("grade : %c\n",grade);
    printf("num1 : %d\n",num1);
    printf("points1 : %f\n",points1);
    printf("grade : %lld\n",num2);

    return 0;
}
