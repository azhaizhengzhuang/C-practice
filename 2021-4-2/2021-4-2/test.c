#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void bubble(int* arr1, int sz)//���ú���ʵ�ֶ������ð������
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���ڼ�������Ƿ���ȫ����
//		int j = 0;
//		for (j = 0; j<sz-i-1; j++)
//		{
//			if (arr1[j]>arr1[j + 1])
//			{
//				int tmp = 0;
//				 tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//				flag = 0;//˵�������鲢����ȫ����
//			}
//		}
//		if (1 == flag)
//		{
//			break;//flagΪ1��˵�������Ѿ���ȫ���򣬴���ѭ��
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,9,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);//Ϊ�˱���������Ԫ�ص�ַ��Ϊ����ʱ����ʧ�ڴ����Ϣ��ֱ�Ӱ�����Ԫ�ظ�����Ϊ����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", arr);
	printf("%p\n", arr);
	printf("%p\n", add);
	printf("%d\n", *arr);
	return 0;
}