#include <stdio.h>
int main(void){
	int n = 3;                     //n=3,7,100でやってもできた
	if(n > 9){
		n = 10;
	}else if ( n>5){
		n = 8;
	}else{
		n=0;
	}
	printf("%d\n",n);
	return 0;
}