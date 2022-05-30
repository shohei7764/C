#include <stdio.h>
int main (void){
double x;
printf("Write number.\n");
scanf("%lf",&x);

if(x < 0){
	printf("negative\n"); //マイナス
}else{
	printf("positive\n");  //プラス
}
return 0;
}
