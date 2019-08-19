#include <stdio.h>
//数组指针
int main(){
	printf("========数组指针===========\n");
	int arr[] = {1,2,3,4,5};
	int i = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	for (i = 0 ; i < len ; i++){
		printf("%d\n", arr[i]);
	}

	//数组名指向数组的首地址
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(arr+i));
	}
	printf("---------------------\n");
	//定义一个指针指向数组
	int *parr1 = arr, *parr2 = &arr[0];
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(parr1 +i ));
	}
	printf("---------------------\n");
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(parr2 +i ));
	}
	//将指针指向数组其中的单元
	int *parr3 = &arr[2];
	printf("%d,%d \n", *(parr3-1), *(--parr3));


	printf("---------数组指针的常用表达------------\n");
	//数组指针的常用表达
	char ch[] = "this is a string";
	char *pch = ch;
	char *pch1 = ch+2; //将指针指向第三个单元
	printf("%s, %s, %s\n", ch, pch, pch1);

	//将数组名当做指针
	char c1 = *ch;
	printf("%c\n", c1);
	printf("%c\n", *pch);
	
	return 0;
}
