#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int generate_a_digit() {
    return (rand()%10);
}

int generate_target_number() {
    int num,temp1,temp2;
    num = generate_a_digit();
    while(num == 0){
    	num = generate_a_digit();	
	}
    temp1 = generate_a_digit();
    while(num == temp1){
    	temp1 = generate_a_digit();
	}
	temp2= generate_a_digit();
	while(num == temp2 || temp1 == temp2){
		temp2 = generate_a_digit();
	}
	return num*100+temp1*10+temp2;
}

int main(void)
{
    int nums[10];
    int i;
	
    srand(time(0));	
    for(i = 0; i < 10; i++)
	nums[i] = generate_target_number();
	
    for(i = 0; i < 10; i++)
	printf("%d ", nums[i]);	
    printf("\n");
	
    return 0;	
}