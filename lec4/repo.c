#include <stdio.h>

double f(double a){
	double value;
	value = 1+(a/2)+(a*a/6);
	return value;
}

int main (void){
	double x;
	printf("Enter the number\n");
	scanf("%lf\n",&x);
	printf("%lf\n",f(x));
return 0;
}