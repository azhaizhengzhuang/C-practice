#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("***   1.add   2.sub   ***\n");
//	printf("***   3.mul   4.div   ***\n");
//	printf("***        0.exit     ***\n");
//	printf("*************************\n");
//}
//int main()//�ú���ָ������ʵ�ּ�����
//{
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0;
//		int y = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		int(*p[])(int, int) = { 0, Add, Sub, Mul, Div };//�����ò����±�Ϊ0��Ԫ�أ�����±�Ϊ���Ԫ����Ϊһ���޹ص��� 
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);//�ǳ��ľ��� ������Ҫ��������ķ�֧��
//			printf("���Ϊ%d\n", ret);
//		}
//		else if (0 == input)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

//
void test()
{
	;
}

//int main()//����ָ������ָ��
//{
//	void(*p[10])() = { 0 };//����ָ������
//	void(*(*pp)[10])() = &p;//����ָ������ָ�� 
//	return 0;
//}

//int main()//���ӵ�ָ�����͵Ķ�����ϰ
//{
//	int a = 0;
//	int arr[] = { 0 };
//	//ָ������
//	int* p1[] = { 0 };
//	//����ָ��
//	int(*p2)[] = &arr;
//	//����ָ��
//	void(*p3)() = test;
//	//����ָ�������
//	void(*p4[])() = { test };
//	//ָ����ָ�������ָ��
//	void(*(*p5)[])() = *p4;
//	return 0;
//}

//void bubble_sort(int* arr, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz-1; i++)//ȷ��ð�����������
//	{
//		for (j = 0; j < sz - 1 - i; j++)//ÿ��ð������Ľ�������
//		{
//			if (arr[j]>arr[j + 1])//��������Ԫ�ش���ǰ�� ����Ԫ�ص�ֵ
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()//ð������ϰ
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	bubble_sort  (arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

float values[] = { 6.0, 5.0, 4.0, 3.0,2.0,1.0};//Ϊʲô������������Ǹ�ȫ�ֱ�����

int compare(const void *a, const void *b)//���compare������ɶ��˼��
{
	return  (*(int*)a - *(int*)b);
}
int main()//qsort����
{
	int i = 0;
	qsort(values, 6, sizeof(float), compare);
	for (i = 0; i < 6; i++)
	{
		printf("%f ", values[i]);
	}
	return 0;
}