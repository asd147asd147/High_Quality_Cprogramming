#include<stdio.h>


int main(){
	
	char marriage_code;
	scanf("%c",&marriage_code);
	
	switch(marriage_code){
		case 'M':
			printf("\nIndividual is married.");
			break;
		case 'S':
			printf("\nIndividual is single.");
			break;
		case 'D':
			printf("\nIndividual is divorced.");
			break;
		case 'W':
			printf("\nIndividual is widowed.");
			break;
		default:
			printf("\nAn invalid code is entered.");
	}
	
	return 0;
}
