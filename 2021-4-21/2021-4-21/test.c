#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void test1(int arr[10])//以数组形式传参
//{
//	printf("hehe\n");
//}
//void test1(int arr[])//省略了数组大小或故意写错大小
//{
//	printf("hehe\n");
//}
//void test1(int* arr)
//{
//	printf("hehe\n");
//}

//void test2(int* arr[10])//数组名
//{
//	printf("haha\n");
//}

//void test2(int** arr)//指向首元素的地址
//{
//	printf("haha\n");
//}
//int main()//验证一维数组传参的两种形式
//{
//	int arr1[10] = { 0 };
//	int* arr2[10] = { 0 };
//	//test1(arr1);
//	test2(arr2);
//	return 0;
//}

//

//

//void print(char* p)//字符串打印函数
//{
//	printf("%s\n",p);
//}
//
//int main()
//{
//	void(*p)(char*) = print;
//	p("shit");//就算不解引用也不所谓
//	(*p)("fuck you");//通过解引用指针函数调用指针
//	(**p)("fuck you");
//	(***p)("fuck you");//对函数指针进行多次解引用后 为何结果相同？
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int SUB(int x, int y)
//{
//	return x - y;
//}
//
//int MUL(int x, int y)
//{
//	return x*y;
//}
//
//int DIV(int x, int y)
//{
//	return x / y;
//}
//
//int main()//函数指针数组的定义与使用——将多个函数进行串联
//{
//	int(*p[4])(int, int) = { ADD, SUB, MUL, DIV };
//	int i = 0;
//	for (i = 0; i < 4; i++)//按顺序使用函数
//	{
//		printf("%d\n", p[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组pfArr,能够存放4个my_strcopy函数的地址

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL&&src != NULL);
	char* tmp = dest;
	while (*dest++ = *src++)//把src的字符赋值给dest 包括'\0'
	{
		;
	}
	return tmp;
}


int main()
{
	char*(*pf)(char*, const char*) = my_strcpy;
	char*(*pfArr[4])(char*, const char*) = { my_strcpy, my_strcpy, my_strcpy, my_strcpy };
	return 0;
}