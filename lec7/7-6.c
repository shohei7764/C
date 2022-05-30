#include<stdio.h>
int main(void){
int i = 0;
int x=2;
int n,val;
scanf("%d",&x);
scanf("%d",&n);
	while(i < n){
		i++;
		val = val*x;
	}
printf("%d\n",x);
return 0;
}