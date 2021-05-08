#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int check_string(const char* a,char*b)
//{
//	assert(a!=NULL&&b!=NULL);
//	int s1 = strlen(a);
//	int s2 = strlen(b);
//	if (s1 != s2)//若两个字符长度不相等 直接返回不是旋转后的字符
//	{
//		return 0;
//	}
//	int j,k;//循环变量
//		for (j = 0; j < s2 ; j++)
//		{
//			if (a[0] == b[j])//如果字符配对成功
//			{
//				const char* tmp1 = a;
//				const char* tmp2 = (b + j);//由于i和j是循环变量，不可修改，因此创建临时变量存放两个指针的值
//				for (k = 1; k < s1; k++)//两个字符串进行遍历配对
//				{
//					if (*tmp1 == 0)//如果指针已经指向字符串结束标志，则重置指针指向字符串首元素
//					{
//						tmp1 = a;
//					}
//					if (*tmp2 == 0)
//					{
//						tmp2 = b;
//					}
//					if (*tmp1 == *tmp2)//若两个指针指向的字符一致 则移动两个字符串的指针
//					{
//						tmp1++;
//						tmp2++;
//					}
//					else
//					{
//						break;
//					}
//				}
//				if (k == s1)//若k==s1 说明遍历配对成功 字符串b是字符串a旋转后的字符串
//				{
//					return 1;
//				}
//			}
//		}
//	return 0;
//	//字符串旋转检测
//	//1字符串a的第一个字符跟字符串b中所有的字符进行配对
//	//2配对之后的字符串进行遍历检测 当任意一边的指针指向'\0'后 重置指针指向字符串首元素
//	//3配对结束后 得出结果
//}
//
//int main()
//{
//	char a[] = "aabaaab";
//	char b[] = "aaabaab";
//	int flag=check_string(a,b);
//	if (flag == 1)
//	{
//		printf("是旋转后的字符\n");
//	}
//	else
//	{
//		printf("不是旋转后的字符\n");
//	}
//	return 0;
//}

//void left_rotate(char* s, int num)
//{
//	//每次左旋一个，一共左旋num次
//	int i = 0;
//	int j = 0;
//	int len = strlen(s);
//	for (i = 0; i < num; i++)
//	{
//		char tmp = s[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			s[j] = s[j + 1];
//		}
//		s[len - 1] = tmp;
//	}
//}
//
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