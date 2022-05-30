#include<stdio.h>
#include <math.h>
struct point {
	double x,y;
};

int main(void){
struct point P;
P.x = 1.0;
P.y = 1.0;
struct point Q;
Q.x = 3.0;
Q.y = 9.0;

printf("%lf\n",sqrt((P.x - Q.x)*(P.x - Q.x) + (P.y - Q.y)*(P.y - Q.y)));

return 0;
}