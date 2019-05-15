#include<stdio.h>
#include<string.h>

//二级指针/多级指针
int main(){

	int a = 100;
	int *p = &a;
	int **p1 = &p;
	int ***p2 = &p1;
	printf("%d,%d, %d, %d\n", a , *p , **p1, ***p2);
	if (p == *p1){
		printf("p1存储的是p的地址\n");
	}
	if(**p2 == p){
		printf("p2值的值是p的地址\n");
	}





}
