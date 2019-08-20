#include<stdio.h>
//宏定义
#define abc printf


int main(){
	abc("Hello world\n");
	#ifdef abc
		printf("已经定义\n");
	#else
		printf("没有定义\n");
	#endif
		
	return 0;
}


