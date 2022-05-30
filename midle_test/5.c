#include<stdio.h>
#include<math.h>

double f(double x){

return x*x*x - 5;
}

int main (void){

double a=1.0;
double b=2.0;
double c;
	while(fabs(f(c)) > 0.00001){
	c =(a + b)/2;
	if(f(c)<0){
		a = c;
	}else{
		b = c;
	}
	
}

printf("近似値:%lf\n",c);
return 0;
}
