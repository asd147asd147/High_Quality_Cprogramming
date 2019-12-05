#include <stdio.h>

int main(void) {

    FILE* fp;
    char ch;
    fp = fopen("test02.txt","r");
    if(fp == NULL){
        printf("FAILED\n");
        return 0;
    }
    while(EOF != (ch = fgetc(fp))){
        printf("%c",ch);
    }
    fclose(fp);

    return 0;
}
