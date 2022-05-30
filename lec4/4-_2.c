#include <stdio.h>
#include <math.h>
int main(void){
	double a,b,c,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c < 0){
	printf("x = (-%lf +/- %lf i )/(%lf)\n",b,sqrt(-b*b+4*a*c),2*a);
}else{
	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	printf("x1 = %lf\n",x1);
	printf("x2 = %lf\n",x2);
}
return 0;
}