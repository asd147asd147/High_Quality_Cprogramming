#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
	int n,i;
	int *b;
	printf("n °ª : ");
	scanf("%d",&n);
	b = malloc(sizeof(int)*n);

	assert(b);
	
	for(i=0;i<n;i++){
		scanf("%d",b+i);	
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",b[i]);	
	}
	free(b);
	
	return 0;
}