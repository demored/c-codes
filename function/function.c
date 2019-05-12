#include<stdio.h>
//函数详解


//函数可以先声明再定义
//这样函数在什么位置定义都可以，没有非要在使用前调用
void print_();
int sum(int a, int b){
	return a+b;
}
int main(){
	int total = sum(10,20);
	// total = sum(10,20);
	printf("两个数的和为%d\n", total);
	print_();
	return 0;
}

void print_(){

	printf("我是函数print_的定义\n");
}