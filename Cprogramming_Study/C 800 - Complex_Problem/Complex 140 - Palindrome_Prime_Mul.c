#include <stdio.h>

int prime_mul(int num, int* p1, int* p2){
    int i;
    int cnt = 0;
    for(i = 10000; i*i <= num; ++i){
        if(num%i == 0){
            cnt++;
            *p1 = i;
            *p2 = num/i;
        }
        if(cnt==2)
            return 0;
    }
    if(cnt == 0)
        return 0;
    return 1;
}

int reverse_num(int num){
    int reverse = 0;
    while(num){
        reverse *=10;
        reverse += num%10;
        num/=10;
    }
    return reverse;
}

int len(int num){
    int cnt = 0;
    while(num){
        cnt++;
        num/=10;
    }
    return cnt;
}

int main(void) {
    int num = 9999;
    int temp;
    int res;
    int i;
    int p1,p2;
    while(num){
        for(temp = num; temp > num/10; temp--){
            int midnum;
            for(midnum = 9; midnum >= 0; midnum--){
                res = temp;
                res*=10;
                res += midnum;
                for(i = 0; i < len(temp);i++){
                    res*=10;
                }
                res += reverse_num(temp);
                if(prime_mul(res,&p1,&p2)){
                    printf("num : %d  p1 : %d  p2 : %d",res,p1,p2);
                    return 0;
                }
            }
        }
        for(temp = num; temp > num/10; temp--){
            res = temp;
            for(i = 0; i < len(temp);i++){
                res*=10;
            }
            res += reverse_num(temp);
            if(prime_mul(res,&p1,&p2)){
                printf("num : %d  p1 : %d  p2 : %d",res,p1,p2);
                return 0;
            }
        }
        num/=10;
    }


    return 0;
}
