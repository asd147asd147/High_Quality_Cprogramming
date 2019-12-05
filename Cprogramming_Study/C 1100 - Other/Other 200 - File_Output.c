#include <stdio.h>

int main(void) {

    FILE* fp;

    fp = fopen("test01.txt","w");
    if(fp == NULL){
        printf("FAILED\n");
        return 0;
    }
    fprintf(fp,"TEST01 Perfect");
    fclose(fp);

    return 0;
}
