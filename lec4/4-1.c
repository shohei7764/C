#include <stdio.h>
int main (void){
int x;
scanf("%d",&x);

if(x >= 80){
	printf("A\n");
	}else if(x<60){
		printf("C\n");
	}else{
		printf("B\n");
	}

return 0;
}