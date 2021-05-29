#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void main()//试验一下让main函数无返回值 成功
//{
//	printf("start\n");
//}

//int main()//strtok的初次使用
//{
//	/*char* str0 = "1270780141@qq.com";
//	char* s2 = "@.";*/
//	//char* str0 = "123.456.789.000";//点分十进制的表达方式
//	//char* s2 = ".";
//	char* str0 = "123@.456.@789";
//	char* s2 = ".@";
//	char str[1024] = { 0 };//只有非常量字符串才能切割
//	strcpy(str, str0);
//	char* ret = NULL;
//	for (ret = strtok(str, s2); ret; ret = strtok(NULL, s2))//for的活用
//	{
//		printf("%s\n", ret);
//	}
//	//ret = strtok(str, s2);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, s2);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, s2);
//	//printf("%s\n", ret);
//	return 0;
//}
#include<errno.h>//使用strerror所需引用的头文件
//int main()//strerror试用
//{
//	//printf("%s\n", strerror(3));
//	//打开文件
//	FILE* p= fopen("test.txt", "r");
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));//若没有这个文件 返回No such file or directory
//	}
//	else
//	{
//		printf("open file success\n");//若有这个文件 返回open file success
//	}
//	return 0;
//}
#include<ctype.h>//使用字符分类函数需要引用的头文件
//int main()//字符分类函数试用
//{
//	//char ch = ' ';
//	//printf("%d\n", isspace(ch));//返回8
//	//char ch = '1';
//	//printf("%d\n", isspace(ch));//返回0
//	//char ch = '@';
//	//printf("%d\n", isspace(ch));//返回0
//	//char ch = '*';
//	//printf("%d\n", isgraph(ch));//返回16
//	char ch = '\n';
//	printf("%d\n", isgraph(ch));//返回0
//	return 0;
//}

//int main()//字符转换函数
//{
//	/*char ch = 'A';
//	char ret = tolower(ch);*///a
//	//char ch = 'a';
//	//char ret = toupper(ch);
//	//putchar(ret);//A
//	/*char ch = 'a';
//	char ret = tolower(ch);
//	putchar(ret);*///a
//	//char ch = '*';
//	//char ret = toupper(ch);
//	putchar(ret);//*
//	return 0;
//}

//int main()//字符分类和字符转换函数的应用举例(把字符串中的字符分类并转换)
//{
//	char s[] = "Fuck The World";//把这个字符串的大写字母全部改成小写
//	int i = 0;
//	while (s[i])
//	{
//		if (isupper(s[i]))
//		{
//			s[i] = tolower(s[i]);
//		}
//		i++;
//	}
//	printf("%s\n", s);//fuck the world
//	return 0;
//}
