#include <stdio.h>

int main(void)
{
   	int r, i;

    scanf("%d", &r);
    for(i=1; i<=4; i=i+1);{ //Semicolon_logic_Error
        printf("a%d = %d\n",i ,r);
        r = r*3;
    }
    return 0;
}
