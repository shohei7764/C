#include <stdio.h>

int main(void){
char str[7] = "penguin";
int *p;
for(p = str[6]; *p != 0;p--){
printf("%c", *p);
}
printf("\n");
return 0;
}