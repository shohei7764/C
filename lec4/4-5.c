#include <stdio.h>

int mymax(int x, int y){
	if(x > y){
		return x;}
else{
		return y;}

return 3;
}

int main (void){
	int a,b,c;
	a = 4;b = 8;
	c = mymax(a,b);
	printf("%d\n",c);

return 0;
}