#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//struct
//{
//	int a;
//	char b;
//}x;//�����ṹ������1
//
//struct
//{
//	int a;
//	char b;
//}*p, a[10];//�����ṹ������2
//
////�ṹ�������á����漰����֪ʶ
//struct Node//���
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//
////�ṹ���typedefд��
//typedef struct Stu
//{
//	int a;
//}Stu;

//�ṹ�������õ�typedefд��
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//p = &x;//�����������������ṹ����Ȼ��Ա�б���ͬ��ȴ����ȫ��ͬ����������
//	return 0;
//}

typedef struct T
{
	double c;
}T;

typedef struct S
{
	int a;
	T aa;
}S;

int main()//�ṹ���Ƕ�׶���
{
	S s1 = { 7, { 3.14 } };
	s1.aa;//Ψһ�����÷�ʽ��֤����s1�Ľṹ���Ա��Ψһ��
	printf("%d %lf\n", s1.a, s1.aa.c);//7 3.140000
	return 0;
}
