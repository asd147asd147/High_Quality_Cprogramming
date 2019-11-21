#include <stdio.h>

int main(void)
{
   	int a,b,c;

    a = 0;
    b = 0;
    c = 0;
    
    if( a++ == ++b > c ){
    	printf("True");
	}
	else{
		printf("False");
	}
    return 0;
}
