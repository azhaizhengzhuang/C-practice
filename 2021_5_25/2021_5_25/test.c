#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* p1,const char* p2)//模仿源代码实现的strstr
{
	assert(p1&&p2);//检测指针参数的有效性
	if (!(*p2))//若子字符串是空串 则返回母字符串首字符地址
	{
		return (char*)p1;
	}
	//用临时变量存储两个字符串的首字符的地址 用cur变量来指向当前检测到的进度 以免丢失地址数据（个人觉得s1设置的没必要）
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	while (*cur)//当cur指向的母字符串中的字符不是'\0' 则进入循环
	{
		//每次循环开始 对s1和s2初始化
		s1 = cur;
		s2 = (char*)p2;
		while(*s1 && *s2 && (*s1 == *s2))//当子字符串和母字符串的字符匹配 且都不为'\0'时，匹配下一个字符，个人觉得条件*s2没必要写 因为其他的两个条件自然可以推出该条件
		{
			s1++;
			s2++;
		}
		if (!(*s2))//若s2指向的是'\0' 说明找到了子字符串
		{
			return cur;
		}
		//如果没匹配成功 让指针cur指向下一个母字符串中的字符
		cur++;
	}
	//若cur指向了母字符串中的'\0' 说明没找到子字符串 直接返回空指针
	return NULL;
}

int main()
{
	char* s1 = "abbcdef";
	char* s2 = "";
	char* ret = my_strstr(s1, s2);
	printf("%s\n", ret);
	return 0;
}