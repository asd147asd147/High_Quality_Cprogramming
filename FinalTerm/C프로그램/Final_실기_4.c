#include <stdio.h>

int segema(int k){
	int i,sum=0;
	for(i=1;i<=k;i++){
		sum =sum+ i;
	}
	return sum;
}

int main(){
	int n=1;
	int the_sum;
	while(1){
		if(segema(n)>=1000){
			the_sum = segema(n);
			printf("the sum : %d\n",the_sum);
			printf("n : %d\n",n);
			break;
		}
		else{
		n++;	
		}
	}
	return 0;
}