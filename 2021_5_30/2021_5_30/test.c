#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
void* my_memcpy(void* dest, const void* src, size_t num)//memcpy的模拟实现
{
	assert(dest&&src);
	//把两个参数强制类型转换为字符指针，一个字节一个字节的复制，一共复制num个字节
	void* start = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return start;
}
//
//
//
//int main()//memcpy的使用
//{/*
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[6] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));*/
//	struct S s1[2] = { {"zhangsan",18}, {"lisi",28} };
//	struct S s2[3] = { 0 };
//	my_memcpy(s2, s1, sizeof(s1));
//	return 0;
//}

//int main()//my_memcpy的局限性和memmove
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//若想把1,2,3,4,5拷贝到3,4,5,6,7,的空间 想要的结果是1,2,1,2,3,4,5,8,9,10
//	//my_memcpy(arr1 + 2, arr1,5*sizeof(arr1[0]));//my_memcpy的输出结果却是1,2,1,2,1，8,9,10
//	memmove(arr1+3,arr1,5*sizeof(arr1[0]));//memmove却很好的解决了重叠拷贝的问题
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()//一个操作符的题目
//{
//	int a = 5;
//	if (a++ > 5)printf("%d\n", a);//
//	else printf("%d\n", a++);
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)//memmove的模拟实现
//{
//	assert(dest&&src);
//	void* start = dest;
//	//由目的地内存的起始位置和源内存的起始位置的大小关系，决定拷贝内存的次序，以防止源内存的数据被覆盖
//	if (dest > src)//目的地在源之后，逆向拷贝
//	{
//		(char*)dest += num-1;
//		(char*)src += num-1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	else//目的地在源之前 正向拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return start;
//}
//void* my_memmove(void* dest, const void* src, size_t num)//memmove的模拟实现——另一种形式的判断条件 对三种不同的形式采取对应的赋值次序
//{
//	assert(dest&&src);
//	void* start = dest;
//	//由目的地内存的起始位置和源内存的起始位置的大小关系，决定拷贝内存的次序，以防止源内存的数据被覆盖
//	if (src<dest&&(char*)src+num>dest)//目的地在源起始位置空间中，逆向拷贝
//	{
//		(char*)dest += num - 1;
//		(char*)src += num - 1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	else//目的地起始地址在源空间之前或源之后 正向拷贝
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return start;
//}
//
//int main()//my_memmove的测试
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr+2,arr,5*sizeof(arr[0]));
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()//memcmp的使用
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 4, 5, 3 };
//	int ret = memcmp(arr1, arr2, 9);//若第二个参数为8 打印0 若第二个参数为9 打印-1
//	printf("%d\n", ret);
//	return 0;
//}

int main()//memset函数的使用
{
	char arr[11] = {0};//切记 '\0'是包含在数组元素中的
	memset(arr, '*', 10);
	printf("%s\n", arr);
	return 0;
}