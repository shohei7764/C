#include<stdio.h>
int main(void){
	double F0= 1;
	double F1 = 1.0;
	printf("%lf\n",F0)
	printf("%lf\n",F1)
	double F2;
	int n;
	int N =10;
	for(n=1;n<=N;n++){
	F2 = F1+F0;
	printf("%lf\n",F2);
	F0=F1;
	F1=F2;
	
}
	
return 0;
}