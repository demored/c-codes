#include<stdio.h>
#include "extern_1.h"
//使用声明
// extern int m;
extern char * print_hello();
int m = 200;
int main(int argc , char *argv[]){
	printf("%d\n", m);
	char *str = print_hello();
	printf("%s\n", str);
}