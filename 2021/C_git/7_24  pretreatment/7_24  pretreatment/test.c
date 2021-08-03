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

////ofsetof的使用和模拟实现
//#include <stddef.h>
////利用对地址进行强转达到无中生有的目的
//#define OFFSETOF(struct_name,member_name) ((int)&(((struct_name*)0)->member_name))
//struct S
//{
//	char i;
//	int a;
//	char j;
//};
//int main()
//{
//	printf("i:%d\n", offsetof(struct S, i));
//	printf("a:%d\n", offsetof(struct S, a));
//	printf("j:%d\n", offsetof(struct S, j));
//	printf("i:%d\n", OFFSETOF(struct S, i));
//	printf("a:%d\n", OFFSETOF(struct S, a));
//	printf("j:%d\n", OFFSETOF(struct S, j));
//	return 0;
//}
//offsetof的模拟实现

//测试：传址调用的函数是否有形参

//void fun(int* p1, int*p2)
//{
//	printf("&p1=%p\n &p2=%p\n",&p1,&p2);
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 0;
//	int* pn1 = &num1;
//	int* pn2 = &num2;
//	printf("&pn1=%p\n &pn2=%p\n",&pn1,&pn2);
//	fun(pn1, pn2);
//
//	return 0;
//}

//strncpy模拟实现

//char* my_strncpy(char* des, const char* sou, size_t count)
//{
//	char* start = des;
//	while ((*des++ = *sou++)&&count)
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*des = '\0';
//		}
//	}
//	return start;
//}
//
#include<string.h>
//int main()
//{
//	char des[] = "good";
//	char sou[] = "bad";
//	/*strncpy(des, sou, 4);
//	printf(des);*/
//	my_strncpy(des,sou,4);
//	printf(des);
//	return 0;
//}

//strncat
//char* my_strncat(char* dest, const char* source, size_t count)
//{
//	char* start = dest;
//	while (*(++dest))//找到目标字符串的'\0'
//	{
//		;
//	}
//	while (count--)
//	{
//		if (!(*dest++ = *source++))
//		{
//			return start;
//		}
//	}
//	*dest = '\0';
//	return start;
//}
//
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "defhgijk";
//	/*strncat(str1, str2, 6);
//	printf(str1);*/
//	my_strncat(str1, str2, 6);
//	printf(str1);
//	return 0;
//}

//编写一个函数 找出两个只出现过一次的数字

//参数问题：为了可以让一个函数返回两个参数 让函数返回一个数组

//方法一：暴力法
//具体实现：直接使用遍历法 遍历数组的每一个元素 当锁定一个元素后 按顺序找其匹配项 找到一个就锁定下一个元素 找不到就标记为单身狗
//当找到两个单身狗后返回整形指针
//void FindDog(int* arr,int size,int* Dog)
//{
//	//1锁定每个元素
//	int i,j,amount;
//	amount = 0;
//	for (i = 0; i < size; i++)
//	{
//		//2.为每个元素找匹配项
//		for (j = 0; j < size; j++)
//		{
//			if ((i != j) && (arr[i] == arr[j]))
//			{
//				break;
//			}
//		}
//		//3.把单身狗放进单身狗数组
//		if (j == size )
//		{
//			Dog[amount] = arr[i];
//			amount++;
//			if (2 == amount)
//			{
//				return;
//			}
//		}
//	}
//}

//方法二:异或法（什么神仙）

void FindDog(int* arr,int size,int* Dog)
{
	//1对所有的数组元素进行一次异或
	int i,x,pos,a,b;
	x = 0, pos = 0, a = 0,b=0;
	for (i = 0; i < size; i++)
	{
		x ^= arr[i];
	}
	//2依据异或结果 把数组分为两个数组
	while (!(x & 1))
	{
		pos++;
		x >>= 1;
	}
	for (i = 0; i < size; i++)
	{
		if (arr[i] & (1 << pos))
		{
			a ^= arr[i];
		}
		else
		{
			b ^= arr[i];
		}
	}
	Dog[0] = a;
	Dog[1] = b;
}
int main()
{
	int arr[] = { 5,5,6,6,1,2,3,2,1,7};
	int Dog[2];
	FindDog(arr,sizeof(arr)/sizeof(arr[0]),Dog);
	printf("dog is %d and %d\n", Dog[0], Dog[1]);
	return 0;
}