#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;
    int num = 0;
    printf("Input Num : ");
    scanf("%d",&num);

    int* array = (int*)malloc(sizeof(int)*num);
    //int array[3];
    printf("Input %d number : ",num);

    for(i = 0; i < num; i++){
        scanf("%d",array+i);
    }
    for(i = 0; i < num; i++){
        printf("%d ",array[i]);
    }

    free(array);
    return 0;
}
