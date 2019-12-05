#include <stdio.h> 
int hexa2decimal(char *phexa) {
	int result = 0;
	for(int i=2; *(phexa+i) != '\0'; i++){
		result *= 16;
		if(phexa[i]>='A' && phexa[i]<='F'){
			result += phexa[i]-55;
		}
		else{
			result += (phexa[i]-'0');	
		}
	}
	return result;
}
int main(void) {
	char hexa1[] = "0x1F34";
	char hexa2[] = "0x34CD56";

	printf("%s = %d\n", hexa1, hexa2decimal(hexa1));
	printf("%s = %d\n", hexa2, hexa2decimal(hexa2));

	return 0;
}
