#include <stdio.h>

int is_palindromic_string(char str[])
{
    int i;
    int word_size = 0;
    while(str[word_size] != 0){
        word_size++;
    }
    for(i = 0; i <= word_size/2; i++){
        if( str[i] != str[word_size-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char string[64];
    scanf("%s", string);

    if (is_palindromic_string(string))
        printf("is a palindromic string\n");
    else
        printf("is not a palindromic string\n");

    return 0;
}
