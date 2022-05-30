#include <stdio.h>

int main(void){
	int a,b;
	printf("Input a and b");
	scanf("%d %d",&a,&b);
	printf("a is %d. Its address is %p\n",a ,&a);
	printf("b is %d. Its address is %p\n",b ,&b);
	return 0;
}

