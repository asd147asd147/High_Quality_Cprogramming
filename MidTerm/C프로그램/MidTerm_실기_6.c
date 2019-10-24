#include <stdio.h> 
int main(void)
{
    int i;		// index
    int num=0, sum=0;	// number
    
    char str[]="123,456,789";

    for(i=0;str[i];i++){
    	if(str[i]==','){
    		sum = sum + num;
    		num = 0;
		}
		else{
			num = num * 10 + str[i]-'0';
		}
	}
	sum = sum + num;
    printf("Sum of all values in CSV[%s] : %d", str,sum);

    return 0;
}
