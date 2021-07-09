#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//自定义变量类型详解

//结构体作为函数参数时 传值调用和传址调用的内存透视
//typedef struct S
//{
//	int i;
//	char c;
//	double d;
//} S;
//
////void Init(S tmp)//实参无变化
////{
////	tmp.d = 3.14;
////}
//
//void Init(S* tmp)//实参变化
//{
//	tmp->d = 3.14;
//}
//int main()
//{
//	 S s = {0};
//	 //Init(s);
//	 Init(&s);
//	return 0;
//}

//int main()//const修饰指针的不同方法
//{
//	int i = 10;
//	const int* pi = &i;
//	//*p = 10;//error const放在*前 修饰* 也就是不能被解引用
//	int j = 10;
//	int * const pj = &j;
//	//pj = &i;//error const放在*后 修饰的是指针变量 也就是指针变量的值（地址）没法没改变
//	return 0;
//}

//位段
//struct A//一个位段的声明
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct A a;
//	printf("%d\n", sizeof(a));//8个字节
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()//通过调试探究位段的存储方式 22 03 04 说明VS编译器中的位段存储方式与预想的一致
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;	
//	return 0;
//}

//enum Sex
//{
//	MALE=2,
//	FEMALE=4,
//	SECRET=8,
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	s = FEMALE;
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);//2 4 8
//	printf("%d\n", sizeof(enum Sex));//4
//	//MALE = 3;//error 枚举成员为常量
//	return 0;
//}

//联合体章节
//union UN
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union UN u;
//	printf("%d\n", sizeof(u));//4
//	return 0;
//}

//测试当前机器是大端还是小端？
//方法一和方法二的内存变化完全一致 区别在于检测方式
//方法一 指针法
//
//int check_system()
//{
//	int i = 1;
//	return *(char*)&i;//返回1表示小端 返回0表示大端
//}

//方法2 联合法
int check_system()
{
	union 
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()//输出结果为小端
{
	if (1 == check_system())
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}