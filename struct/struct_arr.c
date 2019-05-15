#include<stdio.h>
//此编译器不支持数组
// struct stu{
// 	char *name;
// 	int num;
// }class[] = {
//     {"Li ping", 5},
//     {"Zhang ping", 4}
		
// };

struct lang{
	char *name;
	int num;
}py;


int main(int argc, char *argv[]){
	// printf("%s,%d\n", class[0].name, class[1].num);
	py.name = "python excute";
	py.num = 100;
	printf("%s\n", py.name);
	
	return 0;
}