#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void test1(int arr[10])//��������ʽ����
//{
//	printf("hehe\n");
//}
//void test1(int arr[])//ʡ���������С�����д���С
//{
//	printf("hehe\n");
//}
//void test1(int* arr)
//{
//	printf("hehe\n");
//}

//void test2(int* arr[10])//������
//{
//	printf("haha\n");
//}

//void test2(int** arr)//ָ����Ԫ�صĵ�ַ
//{
//	printf("haha\n");
//}
//int main()//��֤һά���鴫�ε�������ʽ
//{
//	int arr1[10] = { 0 };
//	int* arr2[10] = { 0 };
//	//test1(arr1);
//	test2(arr2);
//	return 0;
//}

//

//

//void print(char* p)//�ַ�����ӡ����
//{
//	printf("%s\n",p);
//}
//
//int main()
//{
//	void(*p)(char*) = print;
//	p("shit");//���㲻������Ҳ����ν
//	(*p)("fuck you");//ͨ��������ָ�뺯������ָ��
//	(**p)("fuck you");
//	(***p)("fuck you");//�Ժ���ָ����ж�ν����ú� Ϊ�ν����ͬ��
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int SUB(int x, int y)
//{
//	return x - y;
//}
//
//int MUL(int x, int y)
//{
//	return x*y;
//}
//
//int DIV(int x, int y)
//{
//	return x / y;
//}
//
//int main()//����ָ������Ķ�����ʹ�á���������������д���
//{
//	int(*p[4])(int, int) = { ADD, SUB, MUL, DIV };
//	int i = 0;
//	for (i = 0; i < 4; i++)//��˳��ʹ�ú���
//	{
//		printf("%d\n", p[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ������pfArr,�ܹ����4��my_strcopy�����ĵ�ַ

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL&&src != NULL);
	char* tmp = dest;
	while (*dest++ = *src++)//��src���ַ���ֵ��dest ����'\0'
	{
		;
	}
	return tmp;
}


int main()
{
	char*(*pf)(char*, const char*) = my_strcpy;
	char*(*pfArr[4])(char*, const char*) = { my_strcpy, my_strcpy, my_strcpy, my_strcpy };
	return 0;
}