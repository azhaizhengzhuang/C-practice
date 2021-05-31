#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//struct
//{
//	int a;
//	char b;
//}x;//匿名结构体类型1
//
//struct
//{
//	int a;
//	char b;
//}*p, a[10];//匿名结构体类型2
//
////结构体自引用——涉及链表知识
//struct Node//结点
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//
////结构体的typedef写法
//typedef struct Stu
//{
//	int a;
//}Stu;

//结构体自引用的typedef写法
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//p = &x;//报错，上面两个匿名结构体虽然成员列表相同，却是完全不同的两种类型
//	return 0;
//}

typedef struct T
{
	double c;
}T;

typedef struct S
{
	int a;
	T aa;
}S;

int main()//结构体的嵌套定义
{
	S s1 = { 7, { 3.14 } };
	s1.aa;//唯一的引用方式保证了在s1的结构体成员的唯一性
	printf("%d %lf\n", s1.a, s1.aa.c);//7 3.140000
	return 0;
}
