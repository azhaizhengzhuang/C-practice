#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
void* my_memcpy(void* dest, const void* src, size_t num)//memcpy��ģ��ʵ��
{
	assert(dest&&src);
	//����������ǿ������ת��Ϊ�ַ�ָ�룬һ���ֽ�һ���ֽڵĸ��ƣ�һ������num���ֽ�
	void* start = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return start;
}
//
//
//
//int main()//memcpy��ʹ��
//{/*
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[6] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));*/
//	struct S s1[2] = { {"zhangsan",18}, {"lisi",28} };
//	struct S s2[3] = { 0 };
//	my_memcpy(s2, s1, sizeof(s1));
//	return 0;
//}

//int main()//my_memcpy�ľ����Ժ�memmove
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//�����1,2,3,4,5������3,4,5,6,7,�Ŀռ� ��Ҫ�Ľ����1,2,1,2,3,4,5,8,9,10
//	//my_memcpy(arr1 + 2, arr1,5*sizeof(arr1[0]));//my_memcpy��������ȴ��1,2,1,2,1��8,9,10
//	memmove(arr1+3,arr1,5*sizeof(arr1[0]));//memmoveȴ�ܺõĽ�����ص�����������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()//һ������������Ŀ
//{
//	int a = 5;
//	if (a++ > 5)printf("%d\n", a);//
//	else printf("%d\n", a++);
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)//memmove��ģ��ʵ��
//{
//	assert(dest&&src);
//	void* start = dest;
//	//��Ŀ�ĵ��ڴ����ʼλ�ú�Դ�ڴ����ʼλ�õĴ�С��ϵ�����������ڴ�Ĵ����Է�ֹԴ�ڴ�����ݱ�����
//	if (dest > src)//Ŀ�ĵ���Դ֮�����򿽱�
//	{
//		(char*)dest += num-1;
//		(char*)src += num-1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	else//Ŀ�ĵ���Դ֮ǰ ���򿽱�
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return start;
//}
//void* my_memmove(void* dest, const void* src, size_t num)//memmove��ģ��ʵ�֡�����һ����ʽ���ж����� �����ֲ�ͬ����ʽ��ȡ��Ӧ�ĸ�ֵ����
//{
//	assert(dest&&src);
//	void* start = dest;
//	//��Ŀ�ĵ��ڴ����ʼλ�ú�Դ�ڴ����ʼλ�õĴ�С��ϵ�����������ڴ�Ĵ����Է�ֹԴ�ڴ�����ݱ�����
//	if (src<dest&&(char*)src+num>dest)//Ŀ�ĵ���Դ��ʼλ�ÿռ��У����򿽱�
//	{
//		(char*)dest += num - 1;
//		(char*)src += num - 1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	else//Ŀ�ĵ���ʼ��ַ��Դ�ռ�֮ǰ��Դ֮�� ���򿽱�
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return start;
//}
//
//int main()//my_memmove�Ĳ���
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr+2,arr,5*sizeof(arr[0]));
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()//memcmp��ʹ��
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 4, 5, 3 };
//	int ret = memcmp(arr1, arr2, 9);//���ڶ�������Ϊ8 ��ӡ0 ���ڶ�������Ϊ9 ��ӡ-1
//	printf("%d\n", ret);
//	return 0;
//}

int main()//memset������ʹ��
{
	char arr[11] = {0};//�м� '\0'�ǰ���������Ԫ���е�
	memset(arr, '*', 10);
	printf("%s\n", arr);
	return 0;
}