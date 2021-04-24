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
//int main()//用函数指针数组实现计算器
//{
//	int input = 0;
//	do
//	{
//		menu();
//		int x = 0;
//		int y = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		int(*p[])(int, int) = { 0, Add, Sub, Mul, Div };//由于用不到下标为0的元素，因此下标为零的元素设为一个无关的数 
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);//非常的精简 都不需要创建额外的分支了
//			printf("结果为%d\n", ret);
//		}
//		else if (0 == input)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//
void test()
{
	;
}

//int main()//函数指针数组指针
//{
//	void(*p[10])() = { 0 };//函数指针数组
//	void(*(*pp)[10])() = &p;//函数指针数组指针 
//	return 0;
//}

//int main()//复杂的指针类型的定义练习
//{
//	int a = 0;
//	int arr[] = { 0 };
//	//指针数组
//	int* p1[] = { 0 };
//	//数组指针
//	int(*p2)[] = &arr;
//	//函数指针
//	void(*p3)() = test;
//	//函数指针的数组
//	void(*p4[])() = { test };
//	//指向函数指针数组的指针
//	void(*(*p5)[])() = *p4;
//	return 0;
//}

//void bubble_sort(int* arr, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz-1; i++)//确定冒泡排序的趟数
//	{
//		for (j = 0; j < sz - 1 - i; j++)//每趟冒泡排序的交换次数
//		{
//			if (arr[j]>arr[j + 1])//如果后面的元素大于前面 交换元素的值
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()//冒泡排序复习
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

float values[] = { 6.0, 5.0, 4.0, 3.0,2.0,1.0};//为什么被排序的数组是个全局变量？

int compare(const void *a, const void *b)//这个compare函数是啥意思？
{
	return  (*(int*)a - *(int*)b);
}
int main()//qsort试用
{
	int i = 0;
	qsort(values, 6, sizeof(float), compare);
	for (i = 0; i < 6; i++)
	{
		printf("%f ", values[i]);
	}
	return 0;
}