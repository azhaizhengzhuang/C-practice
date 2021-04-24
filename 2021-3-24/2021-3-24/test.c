#define _CRT_SECURE_NO_WARNINGS 1、
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()//从有序数组中找到对应元素的算法优化 利用二分法
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6,  8, 9, 10 ,11};
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	int k =7;//要找的元素
//	
//	while (left <= right)//若有序数组中缺少这个元素，当左右下标相等时，此时右下标必定会往右走一格，导致右下标大于左下标
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		} 
//		else if(arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break; //break的意义是：防止继续进行循环，若继续循环，必定会出现left大于right的情况，从而导致输出相互矛盾的结果
//		}
//	
//	}
//	if (left > right)
//	{
//		printf("找不到。\n");
//	}
//	return 0;
//}
//int main()//实现字符串往中间汇聚的功能
//{
//	char arr1[] = "you you your";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//停顿1000毫秒=1秒
//		system("cls");//执行系统命令的一个函数—cls—清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}