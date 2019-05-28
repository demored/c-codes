#include<stdio.h>
//以字符形式读写fgetc / fputc
int main(int argc , char *argv[]){
	FILE *fp;
	char file[] = "./file.txt";
	char ch;
	char readCh;
	if((fp = fopen(file, "a+")) != NULL){
		printf("成功打开文件%s\n");
	}

	printf("Input a string \n");
	//写文件，从键盘读取，然后写到文件中
	while((ch = getchar()) != '\n'){
		fpuc(ch, fp);
	}

	//从文件中读取内容输出到终端
	while((readCh = fgetc(fp)) != EOF){
		putchar(ch);
	}

	fclose(fp);

	return 0;
}