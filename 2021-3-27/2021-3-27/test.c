#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//void menu()
//{
//	printf("\n******************************************************\n");
//	printf("****        1.play                   0.exit       ****\n");
//	printf("******************************************************\n");
//
//}
//void game()
//{
//	int number = rand()%100+1;//number赋值1到100的随机数字
//	int guess = 0;
//	printf("猜数字:");
//	while (1)
//	{
//		printf("请输入一个1到100之间的数字：\n");//若cscanf放在循环外，则会无限次的打印“猜大了”或“猜小了”，原因是没有scanf()函数让循环暂停下来
//		scanf("%d", &guess);
//		if (guess > number)
//		{
//			printf("猜大了\n");
//
//		}
//		else if (guess < number)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜您，猜对了!");
//				break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//用时间戳来定义伪随机函数的起点，整个程序仅仅需要引用一次这个时间戳；
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新选择");
//			break;
//			
//		}
//	} while (input);
//	printf("游戏结束\n");
//	return 0;
//}

//int main()
//{
//	goto again;//跳到again语句
//	printf("hehe\n");
//again:
//	printf("haha\n");
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t ");60 //让电脑在60s内关机
//again:
//	printf("计算机将在一分钟之内关机，如果输入我是猪，则取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪" == 0))
//	{
//		system("shutdown -a");//取消关机操作
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//函数章节


//int main()//库函数strcpy（）的运用
//{
//	char arr1[20] = { "hehehehehehehehe" };
//	char arr2[20] = { "hahahahaha" };
//	strcpy(arr1, arr2);//，包括、0，把arr2的字符赋给arr1
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world" ;
//	memset(arr, '*', 5);//把字符串arr的前五个字符替换成*
//	printf("%s\n", arr);
//	return 0;
//}

//int getmax(int x, int y)//利用函数去实现返回两个整形较大值
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a, b,large;
//	large = getmax(11,getmax(1,13));
//	printf("%d", large);
//	return 0;
//}

//void swap1(int x, int y)//由于计算机会给x,y设立单独的内存空间，函数内部实际上实现的是x y地址里存放的值得交换，与ab无关，这个函数不符合需求，属于典型的传值调用
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}

//int main()//通过函数实现ab的值交换的功能
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("%d %d\n",a,b);
//	return 0;
//}

//int main()//指针回顾：
//{
//	int a = 10;
//	int* pa = &a;//&a:对a进行取地址，在32位平台中，任何变量的地址都是一个16进制数代表的32个二进制数列的值，pa指针变量用来存放地址，int*是pa的变量类型
//	*pa = 20;//对a进行解引用操作；即通过pa变量存放的地址找到pa所指向的a；解引用操作后，给a赋值20；换句话说，知道你家地址了，马上到你家门口
//	printf("a=%d\n", a);
//	return 0;
//}

//void swap2(int* x, int* y)//对上述函数swap1的优化,典型的传址调用
//{
//	int tmp = 0;
//	tmp = *x;//解引用操作，最简单的话说就是，马上到你家门口
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	swap2(pa, pb);
//	printf("a=%d,b=%d\n", a,b);
//	return 0;
//}