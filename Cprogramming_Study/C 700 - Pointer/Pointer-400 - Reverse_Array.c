#include <stdio.h>

void print_array(int n, int* array){
    int i;
    int *ptr = array;
    for(i = 0; i < n; i++){
        printf("%d ",*ptr);
        ptr = ptr + 1; // ptr++
    }
}

void reverse_array(int n, int* array){
    //Your code!
}

int main(){
    int array[] = {100,110,120,130,140,150,160};
    print_array(sizeof(array)/sizeof(int),array);
    reverse_array(sizeof(array)/sizeof(int),array);

	return 0;
}
