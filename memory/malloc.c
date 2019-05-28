#include<stdio.h>
#include<stdlib.h>
#define N (1*1024)
//动态内存分配
int main(int argc , char *argv[]){
	int *ip;
	
	ip = (int *) malloc(N * sizeof(int));
	if(ip == NULL){
		printf("内存分配失败\n");
	}else{
		printf("内存分配成功\n");
	}

	int i;
	for(i = 0; i < N; i++){
        ip[i] = i;
        printf("ip[%d] = %d\t", i, ip[i]);
    }

    printf("%d\n", N);
    free(ip);
}




