#include <stdio.h>
//����ָ��
int main(){
	printf("========����ָ��===========\n");
	int arr[] = {1,2,3,4,5};
	int i = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	for (i = 0 ; i < len ; i++){
		printf("%d\n", arr[i]);
	}

	//������ָ��������׵�ַ
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(arr+i));
	}
	printf("---------------------\n");
	//����һ��ָ��ָ������
	int *parr1 = arr, *parr2 = &arr[0];
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(parr1 +i ));
	}
	printf("---------------------\n");
	for (i = 0 ; i < len ; i++){
		printf("%d\n", *(parr2 +i ));
	}
	//��ָ��ָ���������еĵ�Ԫ
	int *parr3 = &arr[2];
	printf("%d,%d \n", *(parr3-1), *(--parr3));


	printf("---------����ָ��ĳ��ñ��------------\n");
	//����ָ��ĳ��ñ��
	char ch[] = "this is a string";
	char *pch = ch;
	char *pch1 = ch+2; //��ָ��ָ���������Ԫ
	printf("%s, %s, %s\n", ch, pch, pch1);

	//������������ָ��
	char c1 = *ch;
	printf("%c\n", c1);
	printf("%c\n", *pch);
	
	return 0;
}
