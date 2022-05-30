#include <stdio.h>
int main (void){
int x;
scanf("%d",&x);
printf("you entered %d\n",x);
if(x % 2 == 1){
	printf("odd\n");  //奇数
}else{
	printf("even\n");  //偶数
}
	return 0;
}