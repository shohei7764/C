#include<stdio.h>
#include<math.h>

//表面積
double f(double r, double h){
	double L;
	L = sqrt(r*r + h*h);  //pow使ったら失敗した。
	
return M_PI*r*(L+r);
}


//体積
double g(double r, double h, double n){

return M_PI*r*r*h*((n-1)/n)*((2*n-1)/n)/6;
}


int main (void){
	double r, h,n;
	scanf("%lf %lf %lf",&r,&h,&n);
	printf("The surface area is %lf\n",f(r,h));
	printf("The volume is %lf\n",g(r,h,n));

return 0;
}