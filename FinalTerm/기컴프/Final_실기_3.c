#include <stdio.h> 
#include <math.h>

typedef struct st_point {
	double x;
	double y;
} tpoint;


double distance1(tpoint p1, tpoint p2) {
    return sqrt(pow((p1.x)-(p2.x),2)+pow((p1.y)-(p2.y),2));
}

double distance2(tpoint *pp1, tpoint *pp2) {
    return sqrt(pow((pp1->x)-(pp2->x),2)+pow((pp1->y)-(pp2->y),2));;
}

int main(void) 
{
	tpoint p1 = {1.0, 3.0}, p2 = {-2.0, 4.5};

	printf("The distance between (p1,p2) = %lf\n", distance1(p1,p2));
	printf("The distance between (p1,p2) = %lf\n", distance2(&p1,&p2));

	return 0;
}