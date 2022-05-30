#include <stdio.h>

int main(void){
	int d[20]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int *p;
	for(p=&d[0];p != &d[20]; p++){
		if(*p % 2 ==1){
		printf("%d ",*p);
	}
}
	printf("\n");
	return 0;
}

