#include <stdio.h>
int main (void){
	int n = 10;                    //変数nに初期値として１０を代入
	if(n > 7){                      //もしnが７より大きいなら
		n = 5;                      //nに５を代入する
	}else if ( n > 4){           //nが４より大きい場合
		n = 3;                     //nに３を代入する
	}else{                         //そうでなければ
		n=0;                      //nに０を代入する
	}
printf("the value of n is: %d\n",n);  //nの値を出力する
return 0;
}