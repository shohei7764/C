 #include <stdio.h>
int main(void){
	int d[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p; // pは住所(アドレス)、＊pは人
	for(p=&d[9]; *p != 0; p--){
		printf("%d ",*p);
}
printf("\n");
return 0;
}