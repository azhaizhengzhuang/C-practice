#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()//左旋字符串K个字符
//{
//	int num = 0;
//	char s[] = "abcdefg";
//	printf("要左旋几个字符？\n");
//	scanf("%d", &num);
//	left_rotate(s, num);
//	printf("%s\n", s);
//	return 0;
//}

//int main()//判定一个数在杨氏矩阵中是否存在
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,4,5,6,7 };
//	printf("请输入要找的数：");
//	int num = 0;
//	scanf("%d", &num);
//	
//	return 0;
//}

int main()//在杨氏矩阵中确定一个数字是否存在
{
	//1先从矩阵向下遍历查找 找到第一个大于目标数字的元素 若已经找到最后一行首元素 直接定位最后一行首元素
	//2找到定位元素的上一个元素 然后从这个元素开始向右进行遍历查找
	//3当找到目标数字或大于目标数字的元素或到数组边界时 得出结果（有 没有 没有）
	int yarr[5][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 }, { 4, 5, 6, 7, 8 }, { 5, 6, 7, 8, 9 } };
	int num = 0;
	printf("请输入一个整数：>");
	scanf("%d", &num);
	int i = 0;
	int j = 0;
	int flag = 0;//利用flag变量退出多重循环 若flag等于1 说明已经出结果了 退出循环
	for (i = 0; i < 5; i++)
	{
		if ((i == 4 && yarr[4][0]<num) || yarr[i + 1][0] > num)//利用逻辑或操作符的特性 若i==5时便不会越界访问数组
		{
			for (j = 0; j<5; j++)
			{
				if (yarr[i][j] == num)//1找到了
				{
					printf("找到了\n");
					flag = 1;
					break;
				}
				else if (yarr[i][j] > num)//2没找到
				{
					printf("没找到\n");
					flag = 1;
					break;
				}
				else if (j == 4)
				{
					printf("没找到\n");
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)//退出第二重循环 防止多重遍历
		{
			break;
		}
	}
	return 0;
}