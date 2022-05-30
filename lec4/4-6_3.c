#include <stdio.h>

double f(double x){
	double result;
	result = x*x-2.0*x + 1.0;
	//printf("x: %lf => %lf\n",x ,result);
	printf("%lf %lf\n",x,result);
	return result;
}

int main(void){
	f(0.0);
	f(0.2);
	f(0.4);
	f(0.6);
	f(0.8);
	f(1.0);
	f(1.2);
	f(1.4);
	f(1.6);
	f(1.8);
	f(2.0);
	return 0;
}
