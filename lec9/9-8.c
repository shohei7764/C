#include <stdio.h>
int main(void){
int i,j;
int A[2][2]={{49,87}, {52,28}};
int B[2][2]={{86,98},{75,74}};
int C[2][2];
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		C[i][j]=A[i][j]+B[i][j];
		printf("%d  ",C[i][j]);
	}
	printf("\n");
}
return 0;
}