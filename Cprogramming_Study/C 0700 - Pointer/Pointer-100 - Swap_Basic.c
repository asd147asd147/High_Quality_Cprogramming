#include <stdio.h>

void Swap1(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Swap2(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 3;
    int b= 5;
    int temp;

    printf("Previous\n a : %d, b : %d\n", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("Main Swap\n a : %d, b : %d\n\n", a,b);

    printf("Previous\n a : %d, b : %d\n", a,b);
    Swap1(a,b);
    printf("Swap1\n a : %d, b : %d\n\n", a,b);

    printf("Previous\n a : %d, b : %d\n", a,b);
    Swap2(&a,&b);
    printf("Swap2\n a : %d, b : %d\n\n", a,b);

	return 0;
}
