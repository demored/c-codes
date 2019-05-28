#include<stdio.h>

//打开文件
int main(int argc , char *argv[]){
	FILE *fp;
	char file[] = "./file.txt";
	if((fp = fopen(file, "a+")) != NULL){
		printf("打开文件%s\n", file);
	}

	fclose(fp);
	return 0;
}
