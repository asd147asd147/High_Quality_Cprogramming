#include <stdio.h> 

int isleapyear(int year) {
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return 1;
		}
	}
	else{
		return 0;
	}
	return 0;
}

int main(void) {
	int beg, end, ny;

	scanf("%d%d",&beg, &end);

	printf("All leap years from %d ~ %d\n",
		beg, end);

	for (ny=beg; ny <= end; ny++) {
		if (isleapyear(ny))
			printf("%d ", ny);
	}
	return 0;
}