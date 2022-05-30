#include<stdio.h>
void reverse(char *c, int length){
	char temp;
	int i;
	for(i=0;i<length/2;i++){
		temp = *(c+length-1-i);
		*(c+ length - i) = *(c+1);
		*(c + i) = temp;
	}
}

int main(void){
	char str[7]="penguin";

