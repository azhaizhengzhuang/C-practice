#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//sizeof测试代码
//{
//	short a = 0;
//	int b = 10;
//	printf("%d\n", sizeof(a = 5 + b));
//	printf("%d\n", a);//2 0
//	return 0;//1.赋值遵循客随主便 2.sizeof里的表达式不会发生真实运算
//}

//int main()//单目操作符按位取反~测试代码
//{
//	int a = 0;
//	printf("%d\n", ~a);//结果负一，由于按位取反后，符号位为1，三码不再一致
//}

//

//int main()//操作符前置++和后置++
//{
//	int a = 10;
//	int b = 10;
//	printf("a=%d\n", ++a);
//	printf("b=%d\n", a++);
//	return 0;
//}

//

//int main()//逻辑与的面试题 逻辑与的运算从左到右 当左边的值为0，右边便不会再计算了
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("%d %d %d %d ", a, b, c, d);//结果为1 2 3 4
//	return 0;
//}

//int main()//上面那道面试题的变种题 逻辑或的运算从左往右 当运算到值为1的式子后 便不再继续
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d", a, b, c, d);//结果为2 2 3 4
//	return 0;
//}

//

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a = a + b, a - b, b -= 10);
//	printf("%d\n", c);
//	return 0;
//}

//

//int main()//隐式类型转换测试代码(截断和整形提升)
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);//结果为-126 为何？
//	return 0;
//}

//int main()//证明整形提升的存在
//{
//	char a = 0xb6;//0x是十六进制的整数的表达形式
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)//结果为c
//		printf("c");
//	return 0;
//}

//int main()//整形提升在什么场景会出现的测试代码
//{
//	char a = 0;
//	char b = 0;
//	printf("%u\n", sizeof(a));
//	printf("%u\n", sizeof(+a));
//	printf("%u\n", sizeof(-a));
//	printf("%u\n", sizeof(a*b));
//	printf("%u\n", sizeof(a%b));
//	printf("%u\n", sizeof(a/b));
//	printf("%u\n", sizeof(++a));
//	printf("%u\n", sizeof(a+=1));
//	printf("%u\n", sizeof(a=1));
//	printf("%u\n", sizeof(a&b));
//	printf("%u\n", sizeof(!a));
//	printf("%u\n", sizeof(~a));
//	printf("%u\n", sizeof(a>>1));
//	printf("%u\n", sizeof(a>b));
//	printf("%d\n", !a);
//	return 0;
//
//}

//int main()//不同类型的指针都可以指向同一个地址
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pc);//指针类型不兼容，会报警告（从“int *”到“char *”的类型不兼容）
//	return 0;
//}

//int main()//对不同的指针类型进行解引用操作
//{
//	int a = 0x11223344;
//	//int* pa = &a;//对int指针进行解引用操作后，目标值改变了4个字节
//	//char* pa = &a;//char指针解引用之后，目标值只改变了一个字节
//	//*pa = 0;
//	return 0;
//}

//int main()//指针的类型决定了指针的步长
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//整形指针的一步为4个地址，一个地址占一个内存，一个内存占1字节，即整形指针的步长为4字节
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//字符指针的步长为1个字节
//	return 0;
//}

//

//int main()//指针未初始化的野指针
//{
//	int* p;
//	*p = 10;
//	return 0;
//}

int main()//下标越界的野指针 程序崩溃
{
	int a[10] = { 0 };
	int i = 0;
	int* p = &a;
	for (i = 0; i < 12; i++)
	{
		*p = 1;
		p++;
	}
	return 0;
}
