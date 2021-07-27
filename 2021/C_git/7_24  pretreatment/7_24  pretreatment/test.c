#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//VS2013long类型的大小测试
//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//用预处理符号写一个简易的日志文件


int main()
{
	int i;
	int arr[10] = { 0 };
	//用写的形式打开文本文件
	FILE* pf=fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//格式化输出到文件 运用各种预定义操作符
	for (i = 0; i < 10; i++)
	{
		fprintf(pf, "file:%s line:%d data:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
	}
	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}