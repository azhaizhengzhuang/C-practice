#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include"add.h"//�����Զ���ģ�飬ע���õķ���������
//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	printf("%d", add);//д���������Ϊ��֤���в����ú������޲����ú����ı�������
//	return 0;
//}

//

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//������ʽ���ʵľ������⣬���Ϊ4321
//	return 0;
//}

int main()//����������ڲ���ģ����Ӧ�ã�ģ�����ͷ�ļ���Դ�ļ���ͷ�ļ����ڴ���ض������Ķ��壬Դ�ļ����ڴ��������������add����Ϊ������ģ��
{
	int a = 10;
	int b = 20;
	printf("%d", add(a, b));//���ø�������ʽ����
	return 0;//���Գɹ���nice��
}