#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//练习qsort排序不同类型的数据；
//1排序一个整形数组；
//2排序一个浮点数组;
//3.按结构体数组的整形成员排序结构体
//4.按结构体数组的字符串成员排序结构体

struct Stu
{
	char name[20];
	int age;
};
int compare_int(const void *a, const void* b)//排序整形的compare回调函数
{
	return *(int*)a - *(int*)b;//不能对无类型指针解引用 而且这里要比较的是两个整形元素的值 所以无类型指针强制转换为整形指针
}

void test1()
{
	int a[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1,0 };
	int sz = sizeof(a) / sizeof(a[0]);
	qsort(a, sz, sizeof(a[0]), compare_int);
	int i = 0;
	for (i = 0; i < sz;i++)//打印数组查看数组是否被排序
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");

}

int compare_float(const void* a, const void* b)
{
	return(int)(*(float*)a - *(float*)b);
}

void test2()
{
	float f[9] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]),compare_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n\n");
}

int compare_stu_by_age(const void* a, const void* b)
{
	return (((struct Stu*)a)->age - ((struct Stu*)b)->age);
}

void test3()//根据结构体中的整形元素对结构体进行排序
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_age);
}

int compare_stu_by_name(const void* a,const void* b)
{
	return strcmp(((struct Stu*)a)->name,((struct Stu*)b)->name);//被排序的元素是结构体，理应强制转换为结构体指针类型再解引用
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_name);
}

void Swap(char*num1, char*num2, int width)
{
	int i = 0;
	for (i = 0; i < width;i++)//一个字节一个字节的交换
	{
		char tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
		num1++;
		num2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*compare)(const void* e1,const  void* e2))//冒泡函数的优化版 可以排序所有类型的变量
{
	//实现冒泡函数的步骤
	//1确定冒泡排序的趟数
	//2确定每趟冒泡排序比较的次数
	//2.1定位要比较的两个元素 //把无类型指针转换为char*，并加上合适的整数
	//2.2判断是否要交换  //封装一个函数，把两个元素的地址和元素字节传过去，一个字节一个字节的交换

	//创新点总结：
	//1活用void*的步长为1字节这个性质
	//2回调函数
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)//之前的循环条件写成i<sz-1-i，导致循环条件恒成立，j无限++，数组越界访问程序崩溃了
		{//不过好在通过断点找到了 断点是个好东西啊
			if (compare((char*)base + j*width, (char*)base + (j + 1)*width) > 0)//为检测两个元素，要把两个元素的指针传给compare函数；先把数组首元素base转换为char*，再加上合适的值，就是两个元素的指针了
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);//若前面的元素大于后面，Swap对两个元素进行交换
			}
		}
	}
}
void test5()//用一个整形数组测试改良后的冒泡排序
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
     bubble_sort(arr,sz,sizeof(arr[0]),compare_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//test1();//qsort排序整形数组
	//test2();//qsort排序浮点数组
	//test3();//qsort根据结构体整形成员排序结构体
	//test4();//qsort根据结构体字符串成员排序结构体
	test5();
	return 0;
}