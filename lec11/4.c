#include<stdio.h>

int main(void){
	int a = 100;
	int b = 200;
	int c;
	int *pa, *pb, *pc;
	pa = &a;
	pb = &b;
	*pc = *pa + *pb;
	c = *pc;
	printf("c: %d\n",c);
	return 0;
}