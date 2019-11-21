#include <stdio.h>

int main(){
	
	char a[] = "Hello, World!";
	
	int len = sizeof(a)/sizeof(char) ;
	printf("%d",len);
		
	return 0;
}
