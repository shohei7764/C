#include<stdio.h>

//fact(n)　関数定義
double fact(int n){
	int i=1;
	int s=8;
	n=1;
	
	for(i=1;i<=s;i++){
	n=n*i;
	}

return n;
}

//計算
int main(void){

printf("fact(%d)=%lf\n",8,fact(8));
return 0;
}