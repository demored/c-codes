#include<stdio.h>
#include<wchar.h>
#include<locale.h>
//数据类型
//整数和小数
//字符和字符串

int main(){
 	float f = 251;
    int w = 19.427;
    int x = 92.78;
    int y = 0.52;
    int z = -87.27;
   	printf("f = %f, w = %d, x = %d, y = %d, z = %d\n", f, w, x, y, z);

   	//输出一个字符
   	//在c语言中没有字符串类型
  	char abc = 'a';
  	printf("%c\n", abc);

  	//输出一个字符串

  	//使用数组形式存储
  	char str[] = "We are string";
  	printf("%s\n", str);
  	//使用指针形式，下面这种方式在sublime text中报错，但是能正常输出
  	// char *web_name = "hello C lang";
  	// printf("%s\n", web_name);
  	//输出宽字符
	//char a1 = '中'; 这样会直接报错
  	wchar_t a1 =  L'中';
  	setlocale(LC_ALL, "zh_CN");
	putwchar(L'\n');  //只能使用宽字符
  	putwchar(a1);

  	int i,j;
  	int m,n;


  	for(i = 1 ; i < 100 ; i++){
  		for(j= 1 ; j < 100;j++){
  			printf("%d+%d = %d\n", i,j,i+j);
  		}
  	}




    return 0;
}





