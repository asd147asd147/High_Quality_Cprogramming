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

void bubble_sort(int n, int num[]){
    int i,j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if(num[j] > num[j+1]){
                swap(&num[j],&num[j+1]);
            }
        }
    }
}


int main(void) {

    int num[10] = {4, 3, 7, 9, 10, 2, 5, 1, 8, 6};
    printf("\nBefore sort\n");
    print_array(sizeof(num)/sizeof(int),num);

    bubble_sort(sizeof(num)/sizeof(int),num);
    printf("\nAfter sort\n");
    print_array(sizeof(num)/sizeof(int),num);

    return 0;
}
