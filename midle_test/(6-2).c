#include<stdio.h>
#include<math.h>
//ゴールドバッハ予想

//＜構造＞ゴールドバッハ予想より、４以上の偶数は２つの素数で表せる。故に偶数と奇数で場合分けを行う。そして、奇数のうち素数を除くものは二つの素数で表せると予想する。
//よって上記を満たすようなプログラムを作成する。



//素数
int prime(int a){
	for(a=;a<=x;a--){
		if(x == a){x=1;
		break;}
		if(x % a == 0){
			x=0;
			break;}
	}
}




int main(void){
int n,x,y;
scanf("%d",n);
if(n<2) return 0;
if(n % 2 ==0 && n!=2 )  //n≠2かつ偶数
{


}else if(n % 2 ==1 && n != prime(n))  //nが奇数かつ素数
{


}else{
printf("Combination is not found")
}


return 0;
}



for (a=2; a<=n-1; a++){
		if(n == a){x = a;
		break;}
		if(n % a == 0){
			x = a;
			break;}
	}
