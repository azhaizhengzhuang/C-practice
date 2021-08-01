#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "add.h"
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
//#define CAT(X,Y) X##Y
//int main()
//{
//	int DAY10 = 10;
//	printf("%d\n", CAT(DAY, 10));
//	return 0;
//}

////带副作用的宏参数
//#define MAX(A,B) ((A)>(B)?(A):(B))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n%d\n%d\n", max, a, b);//12 11 13
//	return 0;
//}

//使用宏传类型本身
//案例一 使用宏计算变量大小
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);//4
//	return 0;
//}
//案例二 使用宏简化malloc
//#include<malloc.h>
//#include<stdlib.h>
//#define  MALLOC(type,num)  (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = MALLOC(int, 10);
//	free(p);
//	p = NULL;
//	return 0;
//}

//#undef用于移除一个宏定义

//#define MAX 100
//#undef MAX
//int main()
//{
//	printf("%d\n", MAX);//未声明的标识符
//	return 0;
//}

//条件编译

//1单分支

//int main()
//{
//    #if 1
//	printf("hehe\n");
//    #endif
//	return 0;
//}

//2多分支

//int main()
//{
//    #if 0
//	printf("hehe\n");
//    #elif 1
//	printf("haha\n");
//    #else
//	printf("gaga\n");
//    #endif
//	return 0;
//}

//3判断是否被定义

//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//#ifndef DEBUG
//	printf("haha\n");
//#endif
//	return 0;
//}


//int main()
//{
//	printf("%d\n",add(1, 2));
//	return 0;
//}

//ofsetof的使用
#include <stddef.h>
struct S
{
	char i;
	int a;
	char j;
};
int main()
{
	printf("i:%d\n", offsetof(struct S, i));
	printf("a:%d\n", offsetof(struct S, a));
	printf("j:%d\n", offsetof(struct S, j));
	return 0;
}
//offsetof的模拟实现