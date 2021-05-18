#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int findnum(int arr[3][3], int row, int col, int num)//在杨氏矩阵中寻找一个元素 采用对角搜寻法
//{
//	int x = 0;
//	int y = col - 1;//定位右上角的元素
//
//	while(x <= row - 1 && y >= 0)//如果剩余元素中的最右上角的元素的下标没有越界访问
//	{
//		if (num > arr[x][y])//如果右上角元素小于目标元素
//		{
//			x++;//去除第一行
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else//如果右上角元素等于目标元素
//		{
//			return 1;//找到了 返回1
//		}
//	}
//
//	return 0;//没找到 返回0
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3, }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int ret=findnum(arr,3,3,1);
//	if (1 == ret)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int findnum(int arr[3][3], int* row, int* col, int num)//对角搜寻法的改进 让函数可以返回元素下标(思路为传址调用)
//{
//	int x = 0;
//	int y = *col - 1;//定位右上角的元素
//
//	while (x <= *row - 1 && y >= 0)//如果剩余元素中的最右上角的元素的下标没有越界访问
//	{
//		if (num > arr[x][y])//如果右上角元素小于目标元素
//		{
//			x++;//去除第一行
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else//如果右上角元素等于目标元素
//		{
//			*row = x;
//			*col = y;
//			return 1;//找到了 返回1
//		}
//	}
//
//	return 0;//没找到 返回0
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3, }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int x = 3;
//	int y = 3;
//	int ret = findnum(arr, &x, &y, 5);//这里的x、y前后用来存放的数值的意义有所不同，刚开始用于存放数组元素个数，后面用来存放目标元素下标
//	if (1 == ret)
//	{
//		printf("找到了，下标是%d %d\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//str的三种写法
//1计数器
//2递归
//3指针-指针

//int my_strlen(const char* str)//计数器方式的strlen
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)//递归方式的strlen
//{
//	assert(str);
//	if (*str)
//	{
//		return 1 + my_strlen(str++);//前置++和后置++在优先度上有很大区别 务必注意
//	}
//	return 0;
//}

//int my_strlen(const char* str)//指针-指针方式的strlen
//{
//	assert(str);
//	char* tmp = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}