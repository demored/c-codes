#include <stdio.h>
#include<string.h>
int main(){
	//声明长度的数组
	int a[10] = {1,2};
	for(int i = 0 ; i< 9 ; i++){
		printf("第%d个单元的值是�Ͱ���:%d\n", i, a[i]);
	}
	
	//不用写具体的单元个数
	int a1[] = {1,2,3};
	printf("本数组的长度是%d\n", sizeof(a1)/sizeof(a1[0]));

	//声明字符串的数组
	char str1[] = "hello world";
	printf("%s\n", str1);
	printf("字符串%s的长度是%d\n", str1, strlen(str1));
	//通过sizeof来获取字符串的长度,因为还有最后一个结束位 '\0'
	printf("字符串%s的度是%d\n", str1, sizeof(str1)/sizeof(str1[0]));
	
	return 0;
	
}





