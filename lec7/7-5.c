#include<stdio.h>
int main(void){
int i,wa,T;
	for(i=5;i<10;i++){
		T = i*i*i;
		wa = wa + T;
	}
printf("wa : %d\n",wa);
return 0;
}