#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//��ͯ�ڿ���

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()//����ṹ���С
//{
//	struct S1 s1 = {0};//�����ó�Ա������Ϊ�� �Ͱѳ�Ա��ʼ��Ϊȫ0 ��ͬ
//	struct S2 s2 = { 0 };
//	printf("%d %d \n", sizeof(s1), sizeof(s2));//���12 8   Ϊ�Σ�
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

//#pragma pack(4)//�޸�Ĭ�϶�����Ϊ4 ԭΪ8
//struct S_change
//{
//	char c;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//struct S
//{
//	char c;
//	double d;
//};
//int main()
//{
//	printf("size1=%d size2=%d\n", sizeof(struct S_change), sizeof(struct S));//���size1=12 size2=16
//	return 0;
//}
//
//offsetof() ���ڼ���ṹ���Ա��ƫ�����ĺ�
#include<stddef.h>//offsetof��Ҫ���õ�ͷ�ļ�

struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}

