#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//儿童节快乐

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()//计算结构体大小
//{
//	struct S1 s1 = {0};//不想让成员的内容为空 就把成员初始化为全0 下同
//	struct S2 s2 = { 0 };
//	printf("%d %d \n", sizeof(s1), sizeof(s2));//输出12 8   为何？
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

//#pragma pack(4)//修改默认对齐数为4 原为8
//struct S_change
//{
//	char c;
//	double d;
//};
//#pragma pack()//取消设置的默认对齐数
//struct S
//{
//	char c;
//	double d;
//};
//int main()
//{
//	printf("size1=%d size2=%d\n", sizeof(struct S_change), sizeof(struct S));//输出size1=12 size2=16
//	return 0;
//}
//
//offsetof() 用于计算结构体成员的偏移量的宏
#include<stddef.h>//offsetof需要引用的头文件

struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}

