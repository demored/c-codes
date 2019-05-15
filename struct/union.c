#include <stdio.h>
//共用体，打印共用体的长度

int main(int argc, char *argv[]){
	union data{
		char name;
		int num;
		short little;
		double mm;
	};
	
	union data a;
	//union的长度就是占用字节最大的那个成员的字节长度
	printf("%d,%d\n", sizeof(a), sizeof(union data));

	//数据在CPU上的存储模式，判断大端和小端
	union{
        int n;
        char ch;
    } data;
    data.n = 0x00000001;  //也可以直接写作 data.n = 1;
    if(data.ch == 1){
        printf("Little-endian\n");
    }else{
        printf("Big-endian\n");
    }
}