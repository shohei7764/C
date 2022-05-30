//自分が好きな小説についてプログラム


#include <stdio.h>
#include <string.h>
struct book{
	char title[30];
	char author[30];
	int num_pages;
	int pub_year;
};

int main(void){
	struct book favorite;
	strcpy(favorite.title, "The old man and the sea");
	strcpy(favorite.author, "Ernest Hemmingway");
	favorite.num_pages = 108;
	favorite.pub_year = 1952;
	printf("%s\n", favorite.title);
	printf("%s\n", favorite.author);
return 0;
}