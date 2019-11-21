#include <stdio.h>

int Same_Array(char a[], char b[]){
    int i;
    for(i = 0; i < sizeof(a)/sizeof(char); i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){

    char init_str[16] = "HelloWorld";
    char input_str[16];

    scanf("%s", input_str);

    if(Same_Array(init_str,input_str)){
        printf("Same Array.");
    }
    else{
        printf("Different Array.");
    }

    return 0;
}
