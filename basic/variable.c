#include<stdio.h>
#include<wchar.h>
#include<locale.h>
//��������
//������С��
//�ַ����ַ���

int main(){
 	float f = 251;
    int w = 19.427;
    int x = 92.78;
    int y = 0.52;
    int z = -87.27;
   	printf("f = %f, w = %d, x = %d, y = %d, z = %d\n", f, w, x, y, z);

   	//���һ���ַ�
   	//��c������û���ַ�������
  	char abc = 'a';
  	printf("%c\n", abc);

  	//���һ���ַ���

  	//ʹ��������ʽ�洢
  	char str[] = "We are string";
  	printf("%s\n", str);
  	//ʹ��ָ����ʽ���������ַ�ʽ��sublime text�б����������������
  	// char *web_name = "hello C lang";
  	// printf("%s\n", web_name);
  	//������ַ�
	//char a1 = '��'; ������ֱ�ӱ���
  	wchar_t a1 =  L'��';
  	setlocale(LC_ALL, "zh_CN");
	putwchar(L'\n');  //ֻ��ʹ�ÿ��ַ�
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





