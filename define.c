#include<stdio.h>
//�궨��
#define abc printf


int main(){
	abc("Hello world\n");
	#ifdef abc
		printf("�Ѿ�����\n");
	#else
		printf("û�ж���\n");
	#endif
		
	return 0;
}


