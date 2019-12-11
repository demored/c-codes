#include<stdio.h>
#include <string.h>
//结构体指针
int main(int argc , char *agrv[]){
	struct stu{
		char *name;
		int age;
	}stu1 = {"demored",30}, *pstu1 = &stu1;
	
	struct stu stu2;
	stu2.name = "this is struct pratice";
	stu2.age = 28;
	struct stu *pstu2 = &stu2;
	printf("stu1`s name :%s\n", pstu1 -> nae);
	printf("stu2`s name :%s\n", pstu2 -> name);

}