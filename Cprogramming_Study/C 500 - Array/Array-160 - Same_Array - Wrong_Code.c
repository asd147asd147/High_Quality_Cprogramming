#include <stdio.h>

int main(){

    char init_str[16] = "HelloWorld";
    char input_str[16];

    scanf("%s", input_str);

    //Wrong Code
    if(init_str == input_str){
        printf("Same String");
    }
    else{
        printf("Different String");
    }

    return 0;
}
