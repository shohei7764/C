#include<stdio.h>
int main(void){
	int i= 1;
	double s = 1.0;
	double n=10;
	
	for(i=1;i<=n;i++){
	s=s*i;
}
printf("n!=%lf\n",s);
return 0;
}