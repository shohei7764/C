#include<stdio.h>
int main(void){
	int i= 1;
	double s = 1.0;
	double n=3;
	
	while(i<=n ){
		s=s*i;	
		i=i+1;
}
printf("n!=%lf\n",s);
return 0;
}