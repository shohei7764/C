#include<stdio.h>
int main(void){
	int i,n,s
	n= 30;
	i= 1;
	s = 0;
	while(i<=n){
	s = s+ i;  // s ← s + i
	i=i+1; // i ← i + 1
}
printf("sum: %d\n",s);
return 0;
}