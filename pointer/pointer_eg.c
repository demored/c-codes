#include<stdio.h>
#include<string.h>
//指针的练习
void swap(int *a , int *b);
int max(int *arr, int len);
int max1(int arr[], int len);
int main(){
	printf("---------指针变量作为函数参数----------\n");
	int a=1,b=2;
	printf("a=%d, b = %d\n", a,b);
	swap(&a , &b);
	printf("a=%d, b = %d\n", a,b);
	printf("---------数组作为函数参数----------\n");
	//数组作为函数参数
	int arr[] = {23,21,12,45,32,33};
	printf("数组的最大值为%d\n", max(arr, sizeof(arr)/sizeof(arr[0])));
	printf("数组的最大值为%d\n", max1(arr, sizeof(arr)/sizeof(arr[0])));
	return 0;

}

//获取数组的最大值，第一种格式，采用指针形式
int max(int *arr , int len){
	int i, maxValue = arr[0];
	for (i = 0; i< len ; i++){
		if(maxValue < arr[i]){
			maxValue = arr[i];
		}
	}

	return maxValue;
}

//获取数组的最大值，第二种格式，采用数组形式
int max1(int arr[] , int len){
	int i, maxValue = arr[0];
	for (i = 0; i< len ; i++){
		if(maxValue < arr[i]){
			maxValue = arr[i];
		}
	}

	return maxValue;
}


//交换两个值
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
