#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include"add.h"//引用自定义模块，注意用的符号是引号
//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	printf("%d", add);//写这个代码是为了证明有参引用函数和无参引用函数的本质区别
//	return 0;
//}

//

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//函数链式访问的经典例题，结果为4321
//	return 0;
//}

int main()//这个例题是在测试模块是应用，模块包括头文件和源文件，头文件用于存放特定函数的定义，源文件用于存放声明，这里以add函数为例引用模块
{
	int a = 10;
	int b = 20;
	printf("%d", add(a, b));//简单用个函数链式访问
	return 0;//测试成功，nice，
}