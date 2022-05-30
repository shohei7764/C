#include <stdio.h>
int main(void){
	double x,y,z;
	printf("x y z = \n");
	scanf("%lf %lf %lf",&x,&y,&z);
	printf("%lf + %lf + %lf = %lf\n",x,y,z,x+y+z);
	printf("(%lf + %lf + %lf)/3 = %lf\n",x,y,z,(x+y+z)/3);
	return 0;
	}	