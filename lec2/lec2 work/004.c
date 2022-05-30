#include <stdio.h>
int main(void){
	double x,y,z;
	printf("x y z = \n");
	scanf("%lf %lf %lf",&x,&y,&z);
	//合計値
	double sum=x+y+z;   
	printf("%lf\n",sum);
	//平均値
	double ave=sum/3;
	printf("%lf\n",ave);
	
return 0;
}