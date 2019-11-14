#include <stdio.h>

void print_2x2(int M[2][2]){
    printf("[%3d %3d]\n",M[0][0],M[0][1]);
    printf("[%3d %3d]\n",M[1][0],M[1][1]);
}

int main(){
    int M1[2][2] = {{1,2},{3,4}};

    printf("print M1 = \n");
    print_2x2(M1);
    printf("print &M1[0][0] = \n");
    print_2x2(&M1[0][0]);
	return 0;
}
