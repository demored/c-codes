#include <stdlib.h>
#include <stdio.h>
//测试内存飙升
int main(){
	int i = 1;
    while(1){  //死循环
    	i
        malloc(1024);  //分配1024个字节的内存
    }
    return 0;
}