#include <stdio.h>
#include <string.h>
//字符串指针
int main(){
	//字符数组
	char str[] = "my name is demored, I am the best";
	printf("%s\n", str);
	int i = 0, len = strlen(str) ;
	for (i = 0 ; i < len ; i++){
		 printf("%c", str[i]);
	}
	printf("\n使用指针形式来输出数组\n");
	//使用指针形式来输出数组
	char *pstr = str;
	printf("%s\n", pstr);

	//使用指针循环来输出字符串
	for (i = 0 ; i < len ; i++){
		 printf("%c", *(pstr+i));
	}
	 printf("\n");

	 //将指针指向一个字符串，有的编译器不支持
	 //char *pstr2 = "hello world";  不支持

	return 0;
}