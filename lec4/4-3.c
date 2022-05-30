#include <stdio.h>
#include <math.h> 
int main (void){
	double a,b,c,s,S;

	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b > c ){
	if(c > fabs(a-b)){
	s=(a+b+c)/2;                           //ヘロン
	S = sqrt(s*(s-a)*(s-b)*(s-c));   //面積
	
	printf("S = %lf \n",S);
	
	}else{printf("not triangle");}

}else{printf("not triangle\n");

}

return 0;
}