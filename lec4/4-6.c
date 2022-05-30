#include <stdio.h>

double f(double x){
  return x*x-2*x+1;
}

int main (void){
	printf("x: %lf => %lf\n",0.0,f(0.0));
	printf("x: %lf => %lf\n",0.2,f(0.2));
	printf("x: %lf => %lf\n",0.4,f(0.4));
	printf("x: %lf => %lf\n",0.6,f(0.6));
	return 0;
}