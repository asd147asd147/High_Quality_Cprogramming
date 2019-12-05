#include <stdio.h> 
#include <string.h>

char *mystrstr(const char *str, const char* substr) {
	char *p_str,*p_substr;
	int i;
	for(p_str = str;*p_str;p_str++){
		i=0;
		for(p_substr=substr;*p_substr;p_substr++){
			if(*(p_str+i)!=*p_substr){
				break;
			}
			i++;
		}
		if(*p_substr == '\0'){
			return p_str;
		}
	}
	
	return 0;
} 

int main(void) 
{
    char* str = "one two three";
    char* pos = NULL;
    char* nullstr = "(null)";

    pos = mystrstr(str, "two");
	printf("%s\n", pos ? pos : nullstr);
    pos = mystrstr(str, "");
	printf("%s\n", pos ? pos : nullstr);
    pos = mystrstr(str, "nine");
	printf("%s\n", pos ? pos : nullstr);
    pos = mystrstr(str, "n");
	printf("%s\n", pos ? pos : nullstr);
 
    return 0;
}