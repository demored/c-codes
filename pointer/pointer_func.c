#include<stdio.h>
#include <string.h>

//将指针作为函数返回值
char *strong(char *str1 , char *str2);

int main(){
	char str1[] = "this is hadoop";
	char str2[] = "Storm stream";

	printf("长度较长的字符串为%s\n", strong(str1, str2));
	return 0;
}

//比较两个字符串长度
char *strong(char *str1 , char *str2){
	if(strlen(str1) > strlen(str2)){
		return str1;
	}else{
		return str2;
	}
}