#include <stdio.h>

int main(){
    int array[] = {100,110,120,130,140,150,160};
    int i;
    int *ptr = array;
    for(i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("%d ",*ptr);
        ptr = ptr + 1; // ptr++
    }
	return 0;
}
