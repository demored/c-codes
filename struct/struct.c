#include<stdio.h>
#include<string.h>

//结构体定义
int main(int argc , char *argv[]){
	printf("哈哈哈\n");
	//先定义结构体，再声明
	struct Stu{
		char *name;
		int num;
		int age;
		float socre;
	};

	struct Stu stu1;

	stu1.name = "tom";
	stu1.num = 20;
	printf("%s\n", stu1.name);

	//不需要先定义stu来声明
	struct{
		char *name;
		int num;
		int age;
		float socre;
	}stu2,stu3;

	stu2.name = "demored";

	printf("%s\n", stu2.name);

	//对结构体进行整体赋值

	struct{
		char *name;
		int num;
		int age;
		float socre;
	}stu4,stu5 = {"C lang", 10, 20 , 10.2};


	printf("%s,%d, %d, %d\n", stu5.name , stu5.num , stu5.age , stu5.socre);

}