#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//今天是关于分支与循环语句的习题

//int main()//输入三次密码，正确运行程序，失败退出程序
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");58
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("输入密码错误三次，退出程序\n");
//	}
//	return 0;
//}
//int main()//三个数排序，使用冒泡排序法
//{
//	int x,y,z,i;
//	scanf("%d#%d#%d", &x, &y, &z);
//	if (x < y)//当x大于y时，执行空语句；当y大于x时，利用中间变量对x和y进行交换，下同；
//	{
//		i = x;
//		x = y;
//		y = i; 
//	}
//	if (x < z)//x和所有数进行比较，每次比较把更大的交换给x，x就是这几个数中最大的数
//	{
//		i = x;
//		x = z;
//		z = i;
//	}
//	if (y < z)//接下来以y为主体，和y后面所有的数进行比较交换，当和所有的数交换完毕后，y就是第二大的数了
//	{
//		i = y;
//		y = z;
//		z = i;
//	}
//	printf("%d %d %d",x,y,z);//只有三个数，x存放的是最大的数，y第二，剩下的就是最小的数了，直接从大到小输出即可满足需求
//	return 0;
//}
//int main()//打印出100以内的可以被三整除的所有整数
//{
//	int i = 1;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//当i模3等于0时，说明此数可以被三整除
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}
//int main()//求两个整数的最小公约数
//{
//	int a, b,i;
//	int z = 1;
//	printf("请输入两个整数>:");
//	scanf("%d%d",&a,&b);//用a和b存放两个整数
//	for (i = 1; i <= a; i++)
//	{
//		if ((a%i == 0) && (b%i == 0))//当i为两个数的公约数时，进入分支语句
//		{
//			z = z*i;//用z来存放公约数
//			a = a / i;
//			b = b / i;//a、b同时除以公约数
//		}
//		if (a < i&&b < i)//当a检测的数大于a和b时，跳出循环
//		{
//			break;//退出循环
//		}
//
//	}
//	printf("最小公约数为%d\n", z);
//	
//	return 0;
//}
//int main()//利用辗转相除算法优化上诉算法
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入两个整数，之间用空格隔开>:");
//	scanf("%d%d",&m,&n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("两数的最大公约数为%d\n",n);
//	return 0;
//}
//int main()//列举出1000年到2000年中的闰年
//{
//	int year = 1000;
//	int cou = 0;
//	printf("列举在1000年到2000年中的闰年>:");//要判断这年是否为闰年，对于世纪年和非世纪年有不同的判断标准
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 100 == 0)//若是实际年，只有400倍数的世纪年才是闰年
//		//{
//		//	if (year % 400 == 0)
//		//	{
//		//		printf("%d ", year);
//		//		cou++;
//		//		continue;
//		//	}
//		//	continue;//世纪年不能用普通年的标准来判断是否为闰年，所以跳到下一次循环
//		//}
//		//if (year % 4 == 0)//非世纪年，只要是4倍数的就是闰年
//		//{
//		//	printf("%d ", year);
//		//	cou++;
//		//}
//		if (((year % 4 == 0) && (year % 100!=0) || (year == 400)))//利用逻辑与与逻辑或进行的嵌套来优化算法
//		{
//			printf("%d ", year);
//			cou++;
//		}
//	}
//	printf("\ncount:%d", cou);
//	return 0;
//}
//int main()//打印100到200之间的素数（素数即没有除1之外的因数的数，因为其不可分割，素数一词也有数字中的基本元素这一说法）
//{
//	int i = 100;
//	int j = 3;
//	int cou = 0;
//	printf("列举出100到200间的素数:>");
//	for (i = 100; i <= 200; i++)//i代表100到200的数
//	{
//		for (j = 2; j <= ; j++)//查看i与从3到i为止的所有数的模
//		{
//			if (i%j==0)
//			{
//				if (i != j)
//				{
//					break;// 若模为0，且该数不是i则说明此数不是素数，打破j的循环，直接检测下一个i；break只是打破当前循环，循环外的循环是不会打破的，请注意
//				}
//				else
//				{
//					printf("%d ", i);//若检测到模为零，且j的值等于i，说明此数是质数，直接打印，并进入下一个循环
//					cou++;
//					continue;
//				}
//			}
//		}
//	}
//	printf("\ncount：%d\n",cou);
//	return 0;
//}
//int main()//对试除法进行的算法优化，上个代码判断素数的方式，就是试除法，
//{
//	int i = 100;
//	int j = 3;
//	int cou = 0;
//	printf("列举出100到200间的素数:>");
//	for (i = 100; i <= 200; i++)//i代表100到200的数
//	{
//		for (j = 2; j <= sqrt(i) ; j++)//这里不需要试除从2到i-1的数，只需要试除到根号i即可，因为i必定是由一个小等于根号i和大等于根号i的数相乘得来的
//		{//只需要试除到一个因数，必定有另一个因数会与之对应，所以不需要找到所有的因数
//			if (i%j == 0)
//			{
//				break;
//			}
//			}
//		if (j > sqrt(i))
//		{
//			cou++;
//			printf("%d ", i);
//			continue;
//		}
//	}
//	printf("\ncount：%d\n", cou);
//	return 0;
//}
//int main()//对试除法进行的算法的再优化优化，即剔除偶数
//{
//	int i = 100;
//	int j = 2;
//	int cou = 0;
//	printf("列举出100到200间的素数:>");
//	for (i = 101; i <= 200; i += 2)//i代表100到200的数
//	{
//		for (j = 2; j <= sqrt(i); j++)//这里不需要试除从2到i-1的数，只需要试除到根号i即可，因为i必定是由一个小等于根号i和大等于根号i的数相乘得来的
//		{//只需要试除到一个因数，必定有另一个因数会与之对应，所以不需要找到所有的因数
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			cou++;
//			printf("%d ", i);
//			continue;
//		}
//	}
//	printf("\ncount：%d\n", cou);
//	return 0;
//}//
//以上是对判断素数的试除法优化案例
//更多素数判断算法，参考<素数的n种境界>