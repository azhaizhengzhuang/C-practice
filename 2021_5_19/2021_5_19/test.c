#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>

//char* my_strcpy(char* s1, const char* s2)//strcpy模拟实现
//{
//	assert(s1&&s2);
//	char* tmp = s1;
//	//拷贝s2到s1 包含‘\0’
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	//返回目的空间首地址
//	return tmp;
//}
//
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "abcd";
//	printf("%s\n", my_strcpy(s1, s2));
//	return 0;
//}

//int main()//测试字符串追加函数有没有追加包含'\0'在内的所有字符
//{
//	char s1[20] = "abc\0xxxxxxxx";//原理：字符串追加函数在遇到'\0'就会停止，那么就由打印结果可以知道字符串追加函数有没有追加‘\0’
//	char s2[] = "def";
//	strcat(s1, s1);
//	printf("%s\n", s1);//结果是有包含
//	return 0;
//}



char* my_strcat(char* dest, const char* src)//字符串追加函数模拟实现
{
	assert(dest&&src);//判断参数的合法性
	char* tmp = dest;
	while (*dest)//把dest指针定位到'\0'处
	{
		dest++;
	}
	while (*dest++ = *src++)//把src复制给dest 包括'\0'
	{
		;
	}
	return tmp;
}

int main()
{
	char s1[20] = "abcd";
	char s2[] = "efghi";
	printf("%s\n", my_strcat(s1,s2));
	return 0;
}