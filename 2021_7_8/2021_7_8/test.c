#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�Զ�������������

//�ṹ����Ϊ��������ʱ ��ֵ���úʹ�ַ���õ��ڴ�͸��
//typedef struct S
//{
//	int i;
//	char c;
//	double d;
//} S;
//
////void Init(S tmp)//ʵ���ޱ仯
////{
////	tmp.d = 3.14;
////}
//
//void Init(S* tmp)//ʵ�α仯
//{
//	tmp->d = 3.14;
//}
//int main()
//{
//	 S s = {0};
//	 //Init(s);
//	 Init(&s);
//	return 0;
//}

//int main()//const����ָ��Ĳ�ͬ����
//{
//	int i = 10;
//	const int* pi = &i;
//	//*p = 10;//error const����*ǰ ����* Ҳ���ǲ��ܱ�������
//	int j = 10;
//	int * const pj = &j;
//	//pj = &i;//error const����*�� ���ε���ָ����� Ҳ����ָ�������ֵ����ַ��û��û�ı�
//	return 0;
//}

//λ��
//struct A//һ��λ�ε�����
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct A a;
//	printf("%d\n", sizeof(a));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()//ͨ������̽��λ�εĴ洢��ʽ 22 03 04 ˵��VS�������е�λ�δ洢��ʽ��Ԥ���һ��
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;	
//	return 0;
//}

//enum Sex
//{
//	MALE=2,
//	FEMALE=4,
//	SECRET=8,
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	s = FEMALE;
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);//2 4 8
//	printf("%d\n", sizeof(enum Sex));//4
//	//MALE = 3;//error ö�ٳ�ԱΪ����
//	return 0;
//}

//�������½�
//union UN
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union UN u;
//	printf("%d\n", sizeof(u));//4
//	return 0;
//}

//���Ե�ǰ�����Ǵ�˻���С�ˣ�
//����һ�ͷ��������ڴ�仯��ȫһ�� �������ڼ�ⷽʽ
//����һ ָ�뷨
//
//int check_system()
//{
//	int i = 1;
//	return *(char*)&i;//����1��ʾС�� ����0��ʾ���
//}

//����2 ���Ϸ�
int check_system()
{
	union 
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()//������ΪС��
{
	if (1 == check_system())
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}