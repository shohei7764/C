#include <stdio.h>

void saidai(int *a, int *b, int *c, int *maxm){
	if(*a >= *b && *a >= *c){
		*maxm = *a;
	}else if(*b >= *c){
		*maxm = *b;
	}else{
		*maxm = *c;
	}
}


int main(void){
 int x, y, z,result;
 printf("Enter x, y, and z.\n");
 scanf("%d %d %d", &x, &y, &z);
 saidai(&x, &y, &z, &result);
 printf("maximum value: %d\n",result);
 return 0;
}