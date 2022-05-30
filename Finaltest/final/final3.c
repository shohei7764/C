#include<stdio.h>

int main(void){

int a1, a2, a3, N, i, S;
a1=0;
a2=1;
S=a1+a2;

printf("write number N.\n");
scanf("%d",&N);

for(i=1; i<=N-2; i++){
	a3=a2+2*a1;
	S=S+a3;
	
	a1=a2;
	a2=a3;
}

printf("sum = %d\n",S);

return 0;}