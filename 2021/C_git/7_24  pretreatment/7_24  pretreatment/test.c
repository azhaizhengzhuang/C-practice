#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//VS2013long类型的大小测试
//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//用预处理符号写一个简易的日志文件


//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	//用写的形式打开文本文件
//	FILE* pf=fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//格式化输出到文件 运用各种预定义操作符
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line:%d data:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __STDC__);//该标识符未定义 说明当前编译器不完全遵循ANSIC
//	return 0;
//}

//用#define定义宏
//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5);
//	//printf("%d\n", ret);//打印结果为25
//	//宏与函数的本质区别
//	//printf("%d\n", SQUARE(5 + 1));//打印结果不是36 是11 因为宏是直接替换参数的 
//	//代码改进 充分利用运算符号优先级
//	//printf("%d\n", SQUARE((5 + 1)));
//
//	//宏的本质 用参数替换文本
//	return 0;
//}

//在宏中怎么用参数替换字符串？
//#
//#define PRINT(X)  printf("the value of " #X " is %d\n",X);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	printf("hello"  "world\n" );
//	return 0;
//}

//怎么把两个符号相连？（##）
#define CAT(X,Y) X##Y
int main()
{
	int DAY10 = 10;
	printf("%d\n", CAT(DAY, 10));
	return 0;
}