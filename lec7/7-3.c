#include <stdio.h>
int main(void){
double a,b,c,d,e,f;
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	
	if(a*d-b*c == 0){
	printf("解なし\n");
	}else{	
	printf("x = %lf\n",(e*d-c*f)/(a*d-b*c));
	printf("y = %lf\n",(a*f-b*e)/(a*d-b*c));
	}
	
return 0;
}
