#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", add(a, b));//函数的链式访问
//	return 0;
//}//成功

//int main()//最简单的递归，结果为hehe死循环，然后会出现栈溢出的提示
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int x)//这是递归的一个运用 目前觉得最重要的递归思想是 以大化小 
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int sum = 0;
//	scanf("%d", &sum);//别忘了取地址了
//	print(sum);
//	return 0;
//}


//main()
//{
//	char arr[] = { "fuck the world" };
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* str)//一个求字符串长度的函数
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//数组作为函数参数时，传的时首元素地址，地址+1，即下一个元素的地址
//	}
//	return count;
//}

//char* my_strlen(char* str)//题目要求在不使用临时变量的条件下，写出一个函数用于计算字符串长度
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//注意，递归出来的函数的返回值是在引用该函数的地方，因此是不用担心递归会出现返回多个值到main函数的情况
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "fuck the world";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int fac(int x)//用循环的方法写一个求阶乘的函数
//{
//	int i = 0;
//	int y = 1;
//	for (i = 1; i <= x; i++)
//	{
//		y *= i;
//	}
//	return y;
//}

//int fac(int x)//利用递归的方式写一个求阶乘的函数
//{
//
//	if (x > 1)
//	{
//		return x *= fac(x - 1);
//	}
//	else
//	{
//		return x = 1;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", fac(num));
//
//}

//int fa(int x)//利用递归求出第n个斐波那契数
//{
//	if (x > 2)//当n越大，需要计算的量是成指数型上升的，因此对于求斐波那契数来说，递归不是一个太合适的算法
//	{
//		return fa(x - 1) + fa(x - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}

//int fa(int x)//自己写的一个很挫的靠循环来实现的斐波那契函数，相比递归来说运行速度应该还是快了很多的
//{
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 1;
//	int i = 0;
//	int ret = 0;
//	if (1 == x)
//	{
//		return 1;
//	}
//	for (i = 2; i <= x; i++)
//	{
//		ret = num2;
//		num2 = num1 + ret;
//		num1 = ret;
//	}
//	return num2;
//}

//int fa(int x)//老师写的代码，妙不可言，一箭双雕
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", fa(num));
//}

//int main()//数组性质小练习
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}

//int han_nuo_ta(int x)//汉诺塔问题
//{
//
//	if (x > 1)
//	{
//		return 1 + 2 * han_nuo_ta(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", han_nuo_ta(num));
//	return 0;
//}

//
#include<string.h>
//int main()//用循环依次打印字符数组元素的地址
//{
//	int i = 0;
//	char arr[] = "fuck the world";
//	int len = strlen(arr);//strlen返回值默认为无符号整形，直接强制转换为有符号整形，否则可能会报错
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}
//int main()//用循环依次打印整形数组元素的地址
//{
//	int i = 0;
//	int arr[] = {1,2,2,4,5,6,6,7,78,6,5};
//	int len = sizeof(arr);//结果相差4，再次证明数组在内存中是连续存放的
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()//数组元素赋值情况可用监视窗口查看
//{
//	int arr[4][4] = { {1,2},{4,5} };//二位数组初始化可以省略行，但不能省略列
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void test_print (int* arr)
{
	int sz = sizeof(arr);
	printf("%d\n%d\n", arr[2],sz);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	test_print(arr);
	return 0;
}