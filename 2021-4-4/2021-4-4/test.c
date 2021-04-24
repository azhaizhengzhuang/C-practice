#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//除法操作符实验
//{
//	printf("%d\n",5/2);//当除法的除数和被除数都是整形，所进行的算法是整形除法，所得到的数据是整形
//	printf("%lf\n", 5 / 2.0);//当除数和被除数有一个，进行浮点除法，所得到的是数据是浮点
//	printf("%lf\n", 5 % 2.0);//%只能对整形进行加减
//	return 0;
//}

//int main()
//{
//	printf("%d\n", -16 >> 1);//1.算数右移，右边丢弃，左边补原符号位
//	return 0;
//}

//

//int main()//位操作符的运用
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a&b);
//	printf("%d\n", a|b);
//	printf("%d\n", a^b);
//	return 0;
//}

//

//int main()//利用右移操作符和按位与从二进制层面计算num中1的数量
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)//整形有32个bit位
//	{
//		if (1 == ((num >> 1) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);//-1的count值为32(补码)，成功
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int y = 19;
//	a = b = y + 1;//连续赋值测试代码,从实用性来说，不建议连续赋值，代码可读性差
//	printf("%d,%d,%d", a, b, y);//20,20,19
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", !a);//逻辑反操作符
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("hehe\n");//结果hehe
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", sizeof(int[10]));
	printf("%d\n", sizeof(char[10]));
	printf("%d\n", sizeof(int[5]));
	printf("%d\n", sizeof(char[5]));//40 10 20 5 可知数组的类型的表示方法
	printf("%d\n", sizeof a );//4
	printf("%d\n", sizeof int );//出错 sizeof后面若是变量类型，必须加括号
}