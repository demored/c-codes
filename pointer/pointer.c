#include<stdio.h>
//指针实践
int main(){
	//定义一个指针变量
	int a = 10;
	int b = 200;
	int *p1 = &a;
	printf("%d\n", p1);
	//修改指针变量
	p1 = &b;
	printf("%d\n", p1);
	//同时定义多个指针变量
	int *a1,*a2,*a3;
	printf("%d,%d,%d\n", a1,a2,a3);
	//通过指针变量获取值
	printf("%d\n", *p1);

	//通过指针修改内存上的值

	int a4=10,a5=20,a6=30;
	int *p2 = &a4;
	p2 = &a5;
	a6 = *p2;
	printf("%d,%d,%d\n", a4,a5,a6);
	//通过指针交换大小

	int aa1=10,aa2=20,temp;
	int *pp1 = &aa1, *pp2 = &aa2;
	printf("aa1 = %d, aa2 = %d\n", aa1,aa2);
	temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;
	printf("aa1 = %d, aa2 = %d\n", aa1,aa2);
	
	printf("========指针变量运算===========\n");
	int b1 = 100, *pb1 = &b1;
	char c1 = 'a', *pc1 = &c1;
	double d1 = 10.2, *pd1 = &d1;
	//通过取地址和指针运算
	printf("&b1 = %#X , &c1 = %#X , &d1 = %#X\n", &b1 , &c1 , &d1);
	printf("pb1 = %#X , pc1 = %#X , pd1 = %#X\n", pb1 , pc1 , pd1);
	//指针加法运算
	pb1++;
	pc1++;
	pd1++;
	printf("pb1 = %#X , pc1 = %#X , pd1 = %#X\n", pb1 , pc1 , pd1);

	
}
