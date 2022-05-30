#include <stdio.h>

int main(void){
	double a1 = 3.14159;
	double b1 = 1.73205;
	double *a2, *b2;
	a2 = &a1;
	b2 = &b1;
	printf("a1 address = %p Its value is %lf\n",&a1, a1);
	printf("a2 address = %p Its value is %lf\n",&a2, *a2);
	printf("b1 address = %p Its value is %lf\n",&b1, b1);
	printf("b2 address = %p Its value is %lf\n",&b2, *b2);
	return 0;
}