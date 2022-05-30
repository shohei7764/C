#include <stdio.h>

int main(void){
	int a, b, c, d;
	int *x, *y, *temp, *z;
	scanf("%d %d", &a, &b);
	printf("a = %d b = %d\n",a ,b);
	x=&a;
	y=&b;
	temp=&c;
	z=&d;
	if(*x>*y){
		*temp = *x; //c=a
		*x =*y;  //a=b
		*y = *temp;  //b=c
		printf("a=%d b=%d\n",*x, *y);
		printf("a = %d b= %d\n",a ,b);
	}else{
		*z = *x + *y;  //d=a+b;
		printf("%d + %d = %d\n",*x, *y, *z);
	}
	printf("but the value of d is: %d\n",d);
	return 0;
}