#include<stdio.h>
#include<math.h>

int main(void){

int x,a,i;
scanf("%d",&x);
for(i=2;i<=x-1;i++){
	for(a=2;a==x;a++){
			if(a == i){
				printf("%d\n",i);
			}
			
			else if(x % a == 0){
			break;
			}
       }
      }
return 0;
 }