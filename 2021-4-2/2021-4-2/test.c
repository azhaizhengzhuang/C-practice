#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void bubble(int* arr1, int sz)//利用函数实现对数组的冒泡排序
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//用于检测数组是否完全有序
//		int j = 0;
//		for (j = 0; j<sz-i-1; j++)
//		{
//			if (arr1[j]>arr1[j + 1])
//			{
//				int tmp = 0;
//				 tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//				flag = 0;//说明此数组并非完全有序
//			}
//		}
//		if (1 == flag)
//		{
//			break;//flag为1，说明数组已经完全有序，打破循环
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,9,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);//为了避免数组首元素地址作为参数时会损失内存的信息，直接把数组元素个数作为参数
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