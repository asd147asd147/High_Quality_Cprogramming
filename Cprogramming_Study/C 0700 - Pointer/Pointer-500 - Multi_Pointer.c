#include <stdio.h>

int main(){
    int a = 99;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("Address a : %p\n",&a);
    printf("Address p1 : %p\n",&p1);
    printf("Address p2 : %p\n",&p2);
    printf("Address p3 : %p\n\n",&p3);

    printf("Value p1 : %p\n",p1);
    printf("Value p2 : %p\n",p2);
    printf("Value p3 : %p\n\n",p3);

    printf("p1 : %d\n",*p1);
    printf("p2 : %d\n",**p2);
    printf("p3 : %d\n",***p3);

	return 0;
}
