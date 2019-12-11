#include <stdio.h>
#include <string.h>
//指针数组，每个数组中的单元都是一个指针

int main(){
	int a = 10 , b = 20 , c = 30;

	int *arr[] = {&a, &b, &c};  //每个元素都是一个指针
	int **parr = arr;
	printf("%d,%d, %d\n", *arr[0], *arr[1], *arr[2]);
	printf("%d,%d, %d\n",**(parr+0) , **(parr+1) , **(parr+2));

	//数组字符串
	char *str[] = {
		"I am superman",  //在不用的编译器下会不同,有的编译器报错, char *p = "hello"
		"I am arow man",
		"I am spider man"
	};

	printf("%s,%s, %s\n", str[0], str[1], str[2]);
	
	return 0;

	printf("%s,%s,%s\n");
}











