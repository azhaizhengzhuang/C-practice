#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "add.h"
//VS2013long���͵Ĵ�С����
//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//��Ԥ�������дһ�����׵���־�ļ�


//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	//��д����ʽ���ı��ļ�
//	FILE* pf=fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//��ʽ��������ļ� ���ø���Ԥ���������
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line:%d data:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __STDC__);//�ñ�ʶ��δ���� ˵����ǰ����������ȫ��ѭANSIC
//	return 0;
//}

//��#define�����
//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d\n", ret);//��ӡ���Ϊ25
//	//���뺯���ı�������
//	//printf("%d\n", SQUARE(5 + 1));//��ӡ�������36 ��11 ��Ϊ����ֱ���滻������ 
//	//����Ľ� �����������������ȼ�
//	//printf("%d\n", SQUARE((5 + 1)));
//
//	//��ı��� �ò����滻�ı�
//	return 0;
//}

//�ں�����ô�ò����滻�ַ�����
//#
//#define PRINT(X)  printf("the value of " #X " is %d\n",X);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	printf("hello"  "world\n" );
//	return 0;
//}

//��ô������������������##��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int DAY10 = 10;
//	printf("%d\n", CAT(DAY, 10));
//	return 0;
//}

////�������õĺ����
//#define MAX(A,B) ((A)>(B)?(A):(B))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n%d\n%d\n", max, a, b);//12 11 13
//	return 0;
//}

//ʹ�ú괫���ͱ���
//����һ ʹ�ú���������С
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);//4
//	return 0;
//}
//������ ʹ�ú��malloc
//#include<malloc.h>
//#include<stdlib.h>
//#define  MALLOC(type,num)  (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(int, 10);
//	free(p);
//	p = NULL;
//	return 0;
//}

//#undef�����Ƴ�һ���궨��

//#define MAX 100
//#undef MAX
//int main()
//{
//	printf("%d\n", MAX);//δ�����ı�ʶ��
//	return 0;
//}

//��������

//1����֧

//int main()
//{
//    #if 1
//	printf("hehe\n");
//    #endif
//	return 0;
//}

//2���֧

//int main()
//{
//    #if 0
//	printf("hehe\n");
//    #elif 1
//	printf("haha\n");
//    #else
//	printf("gaga\n");
//    #endif
//	return 0;
//}

//3�ж��Ƿ񱻶���

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//	return 0;
//}


//int main()
//{
//	printf("%d\n",add(1, 2));
//	return 0;
//}

//ofsetof��ʹ��
#include <stddef.h>
struct S
{
	char i;
	int a;
	char j;
};
int main()
{
	printf("i:%d\n", offsetof(struct S, i));
	printf("a:%d\n", offsetof(struct S, a));
	printf("j:%d\n", offsetof(struct S, j));
	return 0;
}
//offsetof��ģ��ʵ��