#include <stdio.h>
#include<string.h>

int main(){
	//�������ȵ�����
	int a[10] = {1,2};
	for(int i = 0 ; i< 9 ; i++){
		printf("��%d����Ԫ��ֵ��:%d\n", i, a[i]);
	}
	    
	//����д����ĵ�Ԫ����
	int a1[] = {1,2,3};
	printf("������ĳ�����%d\n", sizeof(a1)/sizeof(a1[0]));

	//�����ַ���������
	char str1[] = "hello world";
	printf("%s\n", str1);
	printf("�ַ���%s�ĳ�����%d\n", str1, strlen(str1));

	//ͨ��sizeof����ȡ�ַ����ĳ���,��Ϊ�������һ������λ '\0'
	printf("�ַ���%s�Ķ���%d\n", str1, sizeof(str1)/sizeof(str1[0]));

	return 0;
	
}





