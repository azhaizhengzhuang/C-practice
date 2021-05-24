#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()//查找字符串函数strstr的试用
//{
//	//char* p1 = "abcdef";
//	////char* p2 = "de";
//	//char* p2 = "deq";
//	//char* ret = strstr(p1, p2);
//	//if (ret)
//	//{
//	//	printf("%s\n", ret);//若是情况1 打印def
//	//}
//	//else
//	//{
//	//	printf("子字符串不存在\n");//若是情况2 打印子字符串不存在
//	//}
//	char* p1 = "abcdabcd";
//	char* p2 = "bcd";
//	char* ret = strstr(p1, p2);
//	printf("%s\n", ret);//打印bcdabcd 说明strstr返回的是首个目标子字符串的首字符地址
//	return 0;
//}

char* my_strstr(const char* str, const char* strset)//strstr的模拟实现（暴力匹配法）
{
	assert(str&&strset);
	//遍历匹配 依次检查母字符串的各个字符 若在母字符串中找到子字符串的首字符 则以此字符为起始进行两字符串的匹配 若完全匹配则输出母字符串中的子字符串首字符的地址 若非完全匹配继续查找母字符串中的下一个字符 以此类推
	while (*str)
	{
		if (*str != *strset)
		{
			str++;
		}
		else
		{
			char* tmp1 = (char*)str;
			char* tmp2 = (char*)strset;
			while ((*tmp1 == *tmp2) && (*tmp1))
			{
				tmp1++;
				tmp2++;
			}
			if (*tmp2 == '\0')
			{
				return (char*)str;
			}
			str++;
		}
	}
	return NULL;
}

int main()
{
	char* p1 = "ababc";
	char* p2 = "bc";
	char* ret = my_strstr(p1, p2);
	if (ret)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("未查找到目标字符串\n");
	}
	return 0;
}