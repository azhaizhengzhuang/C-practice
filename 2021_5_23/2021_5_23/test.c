#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()//试验'\0'算不算一个字符数
//{
//	char arr[3] = "abc";
//	printf("%s\n", arr);//输出了随机值 答案是算
//	return 0;
//}

//int main()//strncpy试用 
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "hell";
//	strncpy(arr1,arr2,5);
//	printf("%s\n",arr1);//hellofg
//	return 0;
//}

//char* my_strncpy(char* dest, const char* source, unsigned int num)//strncpy模拟实现
//{
//	assert(dest&&source);
//	char* tmp = dest;
//	while (num)//复制num个字符 若源头字符不足num个 用'\0'补足
//	{
//		if (*source)
//		{
//			*dest++ = *source++;
//		}
//		else
//		{
//			*dest++ = *source;
//		}
//		num--;
//	}
//	return dest;
//}

//char* my_strncpy(char* dest, const char* source, unsigned int num)//模仿系统的strncpy
//{
//	assert(dest&&source);
//	char* tmp = dest;
//	while (num&&(*dest++=*source++))//复制num个字符 包括'\0'
//	{
//		num--;
//	}
//	if (num)//若num不等于0 进入循环 用'\0'补足
//	{
//		while (--num)//这里为什么用前置--？ 因为前面赋值'\0'的时候没减num
//		{
//			*dest++ = '\0';
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "fu";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()//strncat试用
//{
//	char s1[30] = "fuck the\0xxxxxxx";
//	char s2[] = " wolrd";
//	strncat(s1, s2, 3);
//	printf("%s\n", s1);//已知strncat末尾会额外追加'\0'
//	return 0;
//}

//char* my_strncat(char* dest, const char* source, unsigned int count)//自己实现的strncat
//{
//	assert(dest&&source);
//	char* start = dest;
//	while (*dest)//让dest指向目标字符串末尾
//	{
//		dest++;
//	}
//	//指定字符的字符串追加
//	while (count--)//当追加到指定的字符数或源字符串达到'\0'后 停止追加
//	{
//		if (*dest++ = *source++)//追加字符 包括'\0'
//		{
//			;
//		}
//		else
//		{
//			return start;
//		}
//	}
//	*dest = '\0';//若count大于源字符串 在完成指定的字数追加数后 额外追加一个字符'\0'
//	return start;
//}
//char* my_strncat(char* dest, const char* source, unsigned int count)//模仿库函数实现的strncat
//{
//	assert(dest&&source);
//	char* start = dest;
//	while (*dest)//让dest指向目标字符串末尾
//	{
//		dest++;
//	}
//	//指定字符的字符串追加
//	while (count--)//当追加到指定的字符数或源字符串达到'\0'后 停止追加
//	{
//		if (!(*dest++ = *source++))//因为进入if语句是没有操作的 所以这里把if else语句合并 更加的精简了
//		{
//			return start;
//		}
//	}
//	*dest = '\0';//若count大于源字符串 在完成指定的字数追加数后 额外追加一个字符'\0'
//	return start;
//}
//
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "ghijkl";
//	my_strncat(s1, s2, 3);
//	printf("%s\n", s1);
//	return 0;
//}

//int main()//strncmp试用
//{
//	const char* p1 = "abcedf";
//	const char* p2 = "abcqwe";
//	printf("strcmp:%d\n",strcmp(p1,p2));
//	printf("strncmp:%d\n", strncmp(p1,p2,3));
//	return 0;
//}

int my_strncmp(const char* p1, const char* p2, unsigned int num)
{
	assert(p1&&p2);
	//需满足
	//1当num值小于p1和p2时

	//1.1若p1和p2前num个字符相同 返回0

	//1.2若p1或p2前num个字符有不同字符，返回首组不同字符的ASCII的差值

	//2当num大于其中一个或两个字符串时

	//2.1当num大于其中一个字符串时（说明两个字符串不可能相等）
	//2.2.1返回第一个不相等的字符 包括'\0'

	//2.2当num同时大于p1和p2时
	//2.2.1若p1或p2前num个字符有不同字符（包括'\0'），返回首组不同字符的ASCII的差值
	//2.2.2若两个字符串完全相同 返回0

	//策略是：一个一个比较，当1.遇到不相同的两个字符 2.num清零 3字符串1遇到'\0' 就做出相应操作
	while ((*p1++ == *p2++) && (*p1))
	{
		num--;
		if (num == 0)
		{
			return 0;
		}
	}
	p1--;
	p2--;
	return (*p1 - *p2);
}

int main()
{
	const char* p1 = "abc";//加入const修饰指针以防指针指向的常量字符被修改导致程序出错
	const char* p2 = "abc";
	printf("my_strncmp:%d\n", my_strncmp(p1, p2, 100));
	return 0;
}