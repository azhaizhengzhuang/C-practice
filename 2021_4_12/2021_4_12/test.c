#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>





//int main()//测试调试环境下代码的运行情况  在Debug环境中会出现死循环 在Release环境中不会出现程序崩溃      
//{
//	int i = 0;//在调试中通过监视窗口发现 arr[12]和i的地址是一样的 给arr[12]赋值等于给i赋值
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("haha\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()//逐语句和逐过程以及跳出的测试函数
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

//void fun()//利用逐句查看函数递归时的执行逻辑
//{
//	static c = 10;
//	if (c > 0)
//	{
//	   fun(--c);//发现当c等于零后 并不会退出循环 而是在退出这个函数后进入被引用的部分继续执行 
//	}//实际上递归时一种函数的嵌套，从哪里引用 就返回到哪里 
//}
//
//int main()
//{
//	fun();
//	return 0;
//}
//int quanju;
//int main()//测试监视 自动窗口和局部变量功能
//{
//	{
//		int emp = 10;
//		printf("fuck you");
//	}
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test3()
//{
//	printf("sb\n");
//}

//void test2()
//{
//	test3();
//}
//
//void test1()
//{
//	test2();
//}
//
//int main()//调用堆栈测试代码
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

int main()//测试调试环境下代码的运行情况  在Debug环境中会出现死循环 在Release环境中不会出现程序崩溃      
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr:%p\n",&arr);//degbug环境中arr的地址比i低 而release版本中arr的地址又比i高
	printf("i:%p\n", &i);
	/*for (i = 0; i <= 12; i++)
	{
		printf("haha\n");
		arr[i] = 0;
	}*/
	system("pause");
	return 0;
}