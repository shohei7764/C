#include <stdio.h>

int main(void){
	int x[6]={10, 20, 30, 40, 50, 0};
	int *p;
	for(p=x; *p != 0; p++){
		printf("%d ",*p);
	}
	printf("\n");
	return 0;
}

