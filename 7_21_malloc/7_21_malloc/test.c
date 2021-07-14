#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()//malloc的试用
//{
//	int* p = (int*)malloc(10 * sizeof(int));//向堆区申请10个整形空间 空间中的内容为随机值
//	//int* p = (int*)malloc(INT_MAX);//向堆区申请极大的空间
//	if (NULL == p)
//	{
//		//开辟失败的情况
//		printf("%s\n", strerror(errno));//结果：Not enough space
//	}
//	else
//	{
//		//正常开辟的情况
//		//为开辟的动态空间进行赋值
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//输出结果为0——9
//		}
//	}
//	//对使用完的动态空间进行释放 避免无效的空间占用
//	free(p);
//	//释放完指针所指向的动态内存后 该指针并没有变成空指针 为了避免对野指针的解引用 将指针置为空指针
//	p = NULL;
//	return 0;
//}

//int main()//calloc的试用
//{
//	int* p = (int*)calloc(10, sizeof(int));//向堆区申请10个整形动态内存空间 并将其中的值初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else//不经初始化 直接对开辟的动态内存空间以整形数组的形式进行打印
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//结果为10个0
//		}
//		printf("\n");
//	}
//	//在使用完开辟的动态内存空间后 释放该空间 并将指向动态内存空间的指针置为空
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()//realloc的试用
//{
//	int* p = (int*)calloc(10, sizeof(int));//向堆区申请10个整形动态内存空间 并将其中的值初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else//不经初始化 直接对开辟的动态内存空间以整形数组的形式进行打印
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//结果为10个0
//		}
//		printf("\n");
//	}
//	//realloc实际运行时会出现三种情形
//	//情况一 当原内存后的内存足够追加 realloc会直接在原内存后追加内存 并返回就内存地址
//    //情况二 旧内存块后面的空间不够时 realloc将开辟了一块新的内存，并把旧内存中的内容拷贝到新内存中，释放旧内存， 最后返回新内存的指针
//	//情况三 当所指定的追加的字节超过内存承受力 开辟失败 则返回空指针
//    //因此 解决方案为创建一个新的变量接受realloc的返回值 防止旧内存地址被覆盖
//	int* ptr=(int*)ealloc(p, INT_MAX);
//	if (!ptr)
//	{
//		p = ptr;
//		//追加成功后的一系列操作
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)//若开辟的动态内存不回收 会导致内存泄漏（内存慢慢被占用 直到计算机崩溃）
//	{
//		malloc(1);
//	}
//	return 0;
//}

//动态内存管理经典面试题1
//问：执行结果？
//答：结果为程序崩溃
//程序问题1：内存泄漏（没有对动态开辟的内存进行释放 且找不到动态开辟内存的位置了）
//程序问题2：对空指针的解引用（GetMemory使用的是传值调用 在出了函数之后形式参数被销毁 没有直接作用到实际参数str上 所以str仍然是NULL 之后对str使用了strcpy函数就对空指针进行了解引用 导致了程序的崩溃）
//解决方案：把GetMemory的调用方式改为传址调用

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}

//改进方法1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改进方法2
//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//}
//
//void Test()
//{
//	char *str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello mother");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//例题2
//char* GetMemory()
//{
//	char p[] = "abc";//程序报错 返回临时变量的值 可选解决方法为加static修饰变量
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//柔性数组
//写法1 联合式
//struct S 
//{
//	int a;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	return 0;
//}

//写法2 从属式
struct S
{
	int a;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5 * sizeof(int));
	int i;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);//输出结果为0到4
	}
	printf("\n");
	//调整柔性数组的大小
	realloc(ps->arr, sizeof(int) * 10);
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);//输出结果为0到9
	}
	printf("\n");
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}