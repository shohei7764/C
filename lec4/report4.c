#include <stdio.h>

//f(x)
double f(double x){
	return 1+(x/2)+(x*x/6);
}


//g(x)
double g(double x){
	return x*x*x*x-1;
}


//h(x)
double h(double x){
	return 1+1/x;
}


int main (void){
double x;
	printf("Enter the number\n");
	scanf("%lf",&x);
	printf("f(%lf)=%lf\n",x,f(x));
	printf("g(%lf)=%lf\n",x,g(x));
if(x==0){
	printf("h(%lf):error\n",x);
	printf("p(%lf):error\n",x);
}else{
	printf("h(%lf)=%lf\n",x,h(x));
	printf("p(%lf)=%lf\n",x,f(x)*g(x)*h(x));
}

return 0;
}