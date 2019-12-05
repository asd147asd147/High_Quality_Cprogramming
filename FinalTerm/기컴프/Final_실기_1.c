#include <stdio.h> 
void print_array(int n, double da[]) {
    int i;
    for (i=0; i<n-1; i++)
		printf("%6.2f, ", da[i]);
    printf("%6.2f\n", da[i]);
}

void reverse_array(int n, double da[]) {
    int i;
	double temp;
    for(i=0;i<n/2;i++){
    	temp = da[i];
    	da[i]=da[n-1-i];
    	da[n-1-i]=temp;
	}
}

int main(void) {
    double vec1[] = {1.1,3.3,5.5,2.2,6.6,4.4};

    print_array(sizeof(vec1)/sizeof(double), vec1);

    reverse_array(sizeof(vec1)/sizeof(double), vec1);

    printf("After Reverse\n");
    print_array(sizeof(vec1)/sizeof(double), vec1);

    return 0;
}