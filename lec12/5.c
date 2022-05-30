#include<stdio.h>
#include <math.h>
struct point {
	double x,y;
};
 
double dist(struct point P, struct point Q){
double D;
D = sqrt((P.x - Q.x)*(P.x - Q.x) + (P.y - Q.y)*(P.y - Q.y));
return D;
}

int main (void){

struct point P;
struct point Q;

printf("Enter the number px,py\n");
scanf("%lf %lf",&P.x ,&P.y);

printf("Enter the number qx,qy\n");
scanf("%lf %lf",&Q.x ,&Q.y);

printf("%lf\n",dist(P,Q));
return 0;
}