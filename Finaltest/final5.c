#include <stdio.h>
#include<math.h>
#include<string.h>
struct comp {
double x;		// 実部
double y;	// 虚部
};

//足し算
struct comp
cadd(struct comp N1, struct comp N2){
  struct comp result;
  result.x = N1.x + N2.x;
  result.y = N1.y + N2.y;
  return result;
}

//掛け算
struct comp
cmult(struct comp N1, struct comp N2){
		struct comp result;

    	result.x = (N1.x * N2.x) - (N1.y * N2.y);
    	result.y= (N1.x * N2.y) + (N1.y * N2.x);

 return result;
}

