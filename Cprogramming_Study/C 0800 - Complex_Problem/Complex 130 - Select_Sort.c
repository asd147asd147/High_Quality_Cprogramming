#include <stdio.h>

void print_array(int n, int* array){
    int i;
    int *ptr = array;
    for(i = 0; i < n; i++){
        printf("%d ",*ptr);
        ptr = ptr + 1; // ptr++
    }
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void select_sort(int n, int num[]){
    //Your Code!
}


int main(void) {

    int num[10] = {4, 3, 7, 9, 10, 2, 5, 1, 8, 6};
    printf("\nBefore sort\n");
    print_array(sizeof(num)/sizeof(int),num);

    select_sort(sizeof(num)/sizeof(int),num);
    printf("\nAfter sort\n");
    print_array(sizeof(num)/sizeof(int),num);

    return 0;
}
