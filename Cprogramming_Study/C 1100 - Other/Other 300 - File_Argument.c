#include <stdio.h>

int main(int argc, char* argv[]) {

    FILE* fp1,*fp2;
    char ch;
    if(argc != 3){
        printf("FAILED\n");
        return 0;
    }
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2],"w");

    while(EOF != (ch = fgetc(fp1))){
        fprintf(fp2,"%c",ch);
    }

    fclose(fp1);
    fclose(fp2);
    printf("Success\n");
    return 0;
}
