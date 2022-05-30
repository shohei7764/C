#include<stdio.h>

int main (void){
	int x,y;
	scanf("%d",&y);
	if(y<=10 || y>=20){
		x=100;
	}else{
		x=200;	
	}
	printf("%d\n",x);
	
return 0;
}