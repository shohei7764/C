#include<stdio.h>
#include<math.h>

int main (void){

int x,a,b;
scanf("%d",&x);
	if(x==2){x=1;}
	else if(x < 2 || x % 2 == 0){x=0;}
	for(a=2;a<=x;a++){
		if(x == a){x=1;
		break;}
		if(x % a == 0){
			x=0;
			break;}
	}
printf("%d\n",x);
return 0;
}