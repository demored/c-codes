#include<stdio.h>
//使用typedef取一个新的名字
typedef int * I;
#define BB double *;
typedef struct stu{
		char *name;
		int age;
}STU;

int main(int argc, char *argv[]){

	STU stu1,stu2;
	stu1.name = "A";
	stu2.age = 20;
	printf("%s\n", stu1.name);
	printf("%d\n", stu2.age);

	//typedef和#define 的区别
	I a,b;
	BB m,n;
	a= 10;
	b = 10;
	printf("%d, %d\n", a, b);
	m = 1.12;
	n = 2.22;
	printf("%f, %f\n", m, n);
	return 0;
}