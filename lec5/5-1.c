#include<stdio.h>
int main(void){
	int i =1;
	int s = 0;
	while(i<4){
	s = s+ i;  // s ← s + i
	i=i+1; // i ← i + 1
}
printf("sum: %d\n",s);
return 0;
}