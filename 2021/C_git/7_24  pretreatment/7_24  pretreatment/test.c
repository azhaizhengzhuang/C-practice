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

////ofsetof��ʹ�ú�ģ��ʵ��
//#include <stddef.h>
////���öԵ�ַ����ǿת�ﵽ�������е�Ŀ��
//#define OFFSETOF(struct_name,member_name) ((int)&(((struct_name*)0)->member_name))
//struct S
//{
//	char i;
//	int a;
//	char j;
//};
//int main()
//{
//	printf("i:%d\n", offsetof(struct S, i));
//	printf("a:%d\n", offsetof(struct S, a));
//	printf("j:%d\n", offsetof(struct S, j));
//	printf("i:%d\n", OFFSETOF(struct S, i));
//	printf("a:%d\n", OFFSETOF(struct S, a));
//	printf("j:%d\n", OFFSETOF(struct S, j));
//	return 0;
//}
//offsetof��ģ��ʵ��

//���ԣ���ַ���õĺ����Ƿ����β�

//void fun(int* p1, int*p2)
//{
//	printf("&p1=%p\n &p2=%p\n",&p1,&p2);
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 0;
//	int* pn1 = &num1;
//	int* pn2 = &num2;
//	printf("&pn1=%p\n &pn2=%p\n",&pn1,&pn2);
//	fun(pn1, pn2);
//
//	return 0;
//}

//strncpyģ��ʵ��

//char* my_strncpy(char* des, const char* sou, size_t count)
//{
//	char* start = des;
//	while ((*des++ = *sou++)&&count)
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*des = '\0';
//		}
//	}
//	return start;
//}
//
#include<string.h>
//int main()
//{
//	char des[] = "good";
//	char sou[] = "bad";
//	/*strncpy(des, sou, 4);
//	printf(des);*/
//	my_strncpy(des,sou,4);
//	printf(des);
//	return 0;
//}

//strncat
//char* my_strncat(char* dest, const char* source, size_t count)
//{
//	char* start = dest;
//	while (*(++dest))//�ҵ�Ŀ���ַ�����'\0'
//	{
//		;
//	}
//	while (count--)
//	{
//		if (!(*dest++ = *source++))
//		{
//			return start;
//		}
//	}
//	*dest = '\0';
//	return start;
//}
//
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "defhgijk";
//	/*strncat(str1, str2, 6);
//	printf(str1);*/
//	my_strncat(str1, str2, 6);
//	printf(str1);
//	return 0;
//}

//��дһ������ �ҳ�����ֻ���ֹ�һ�ε�����

//�������⣺Ϊ�˿�����һ������������������ �ú�������һ������

//����һ��������
//����ʵ�֣�ֱ��ʹ�ñ����� ���������ÿһ��Ԫ�� ������һ��Ԫ�غ� ��˳������ƥ���� �ҵ�һ����������һ��Ԫ�� �Ҳ����ͱ��Ϊ����
//���ҵ����������󷵻�����ָ��
//void FindDog(int* arr,int size,int* Dog)
//{
//	//1����ÿ��Ԫ��
//	int i,j,amount;
//	amount = 0;
//	for (i = 0; i < size; i++)
//	{
//		//2.Ϊÿ��Ԫ����ƥ����
//		for (j = 0; j < size; j++)
//		{
//			if ((i != j) && (arr[i] == arr[j]))
//			{
//				break;
//			}
//		}
//		//3.�ѵ����Ž���������
//		if (j == size )
//		{
//			Dog[amount] = arr[i];
//			amount++;
//			if (2 == amount)
//			{
//				return;
//			}
//		}
//	}
//}

//������:��򷨣�ʲô���ɣ�

void FindDog(int* arr,int size,int* Dog)
{
	//1�����е�����Ԫ�ؽ���һ�����
	int i,x,pos,a,b;
	x = 0, pos = 0, a = 0,b=0;
	for (i = 0; i < size; i++)
	{
		x ^= arr[i];
	}
	//2��������� �������Ϊ��������
	while (!(x & 1))
	{
		pos++;
		x >>= 1;
	}
	for (i = 0; i < size; i++)
	{
		if (arr[i] & (1 << pos))
		{
			a ^= arr[i];
		}
		else
		{
			b ^= arr[i];
		}
	}
	Dog[0] = a;
	Dog[1] = b;
}
int main()
{
	int arr[] = { 5,5,6,6,1,2,3,2,1,7};
	int Dog[2];
	FindDog(arr,sizeof(arr)/sizeof(arr[0]),Dog);
	printf("dog is %d and %d\n", Dog[0], Dog[1]);
	return 0;
}