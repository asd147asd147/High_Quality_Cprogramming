#include <stdio.h> 
double my_atof(const char *str) {
    double i_num=0;
    double f_num=0;
    int count,i;
    char *p_str;
    for(p_str=str;*p_str;p_str++){
    	if(*p_str=='.'){
    		break;
		}
		else{
			i_num *= 10;	
			i_num += (*p_str)-'0';
		}
	}
	if(*p_str=='.'){
		count = 0;
		for(;*(p_str+1);p_str++){
			f_num *= 10;
			f_num += *(p_str+1)-'0';
			count++;
		}
		for(i=0;i<count;i++){
			f_num/=10;
		}
	}
	
	return i_num+f_num;
}

int main()
{
    char * digit_strs[] = {"123.23", "3456", "0.5", NULL};

    int i=0;

    while(digit_strs[i]) 
		printf("%.3f\n", my_atof(digit_strs[i++]));

    return 0;
}