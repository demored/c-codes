#include<stdio.h>
#include<string.h>
//二维数组指针，是一个指针指向二位数组

int main(){
	
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	for(int i = 0 ; i < 3 ; i ++){
		for (int j = 0 ; j < 4 ; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


	//指向二维数组的指针
	int (*p)[4] = a;
	for(int i = 0 ; i < 3 ; i ++){
		for (int j = 0 ; j < 4 ; j++){
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
	

}