#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//int main()//字符串汇聚的过程
//{
//	char source[] = "fuck the world";
//	char dest[] = "**************";
//	int left,right ;
//	left = 0;
//	right = strlen(source)-1;
//	while (left <= right)
//	{
//		dest[left] = source[left];
//		dest[right] = source[right];
//		printf("%s\n", dest);
//		system("pause");
//		left++;
//		right--;
//	}
//	return 0;
//}



void test(int* arr)
{
	printf("%d\n%d\n", arr[2], sizeof(arr));
}

int main()//数组作为函数参数
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	test(arr);
	return 0;
}