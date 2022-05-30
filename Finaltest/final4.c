#include <stdio.h>
#include<math.h>
int main(void){
int i,j;
double M[6][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
for(i=0;i<6;i++){
	for(j=0;j<6;j++){
		double m = sqrt(i+j+2);
		M[i][j]=m/((i+1)*(j+1));
		printf("%lf  ",M[i][j]);
	}
	printf("\n");
}
return 0;
}