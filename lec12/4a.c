#include <stdio.h>

struct meibo{
	int num;
	char name[30];
	int age;
};

int main(void){
	struct meibo student;
	printf("student number: ");
	scanf("%d", &student.num);
	printf("student name: ");
	scanf("%s", student.name);
	printf("student age: ");
	scanf("%d", &student.age);
	printf("you entered the following:\n");
	printf("%d\n", student.num);
	printf("%s\n", student.name);
	printf("%d\n", student.age);
return 0;
}