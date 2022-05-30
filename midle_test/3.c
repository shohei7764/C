#include<stdio.h>
#include<math.h>

int main (void){
    int n;
    int i=0;
    scanf("%d",&n);
     while (n != 1) {
         if (n % 2 == 0) {
            n = n/2;
            i = i + 1;
            }else{
         n = 3*n + 1;
         i = i + 1;
         }
     }
printf("%d\n",i);

  return 0;
}
