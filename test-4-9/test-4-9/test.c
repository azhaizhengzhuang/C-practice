#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//void print_prime(int num)//一个判断并输出素数的函数
//{
//	int i = 0;
//	if (num < 5)
//	{
//		if ((num == 2) || (num == 3))
//
//		{
//			printf("%d ", num);
//		}
//	}
//	else
//	{
//		for (i = 2; i <= sqrt(num); i++)
//		{
//			if (0 == num%i)
//			{
//				break;
//			}
//		}
//		if (i > sqrt(num))
//		{
//			printf("%d ", num);
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		print_prime(i);
//	}
//	return 0;
//}


//int Is_leap_year(int num)//判断整数是不是闰年的函数 
//{
//	if (num < 0)
//	{
//		num = -num;
//	}
//	if (((0 == num % 4) && (num % 100 != 0)) || (0 == num % 400))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int i = 0;
//	printf("请输入一个年份；>");
//	scanf("%d", &year);
//	int flag=Is_leap_year(year);
//	if (flag)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

//

//void print_mul_table(int i)//输出一个可以控制行列的乘法表
//{
//	int j = 0;
//	int k = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (k = 1; k <= j; k++)
//		{
//			int mul = j*k;
//			printf("%2d *%2d =%3d ", j, k, mul);
//		}
//		printf("\n\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	printf("请输入一个两位数的乘法表的行列:>");
//	scanf("%d", &i);//别老是忘记取地址
//	print_mul_table(i);
//	return 0;
//}

//void print(int num)//用递归方式打印整数中的每一位
//{
//	if (num < 0)
//	{
//		num = -num;
//	}
//	if (num)
//	{
//		print(num / 10);
//		printf("%d ", num % 10);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int fac(int num)//用非递归的方式求阶乘
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= num; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//

int my_strlen(char* arr)//用非递归实现strlen
{
	int i = 0;
	while (*(arr + i) != '\0')
	{
		i++;
	}
	return i ;
}

//int DigitSum(int num)//求一个整数各个位数的和
//{
//	
//	if (num)
//	{
//		return num % 10 + DigitSum(num/10);
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum=DigitSum(num);
//	printf("%d\n",sum);
//	return 0;
//}

//

//int feb(int a)//用非递归的方式求第n个斐波那契数 效率较高
//{
//	int x = 1;
//	int y = 1;
//	int z = 2;
//	int i = 0;
//	for (i = 1; i < a; i++)
//	{
//		x = y;
//		y = z;
//		z = x + y;
//
//	}
//	return x;
//}

//int feb(int a)//递归的方式实现斐波那契数
//{
//	if (a == 1 || a == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return feb(a - 1) + feb(a - 2);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	printf("第几个斐波那契数？:>");
//	scanf("%d", &i);
//	int num=feb(i);
//	printf("%d\n", num);
//	return 0;
//}

//void reverse_string(char* string)//这边可以通过下标直接访问的 可是我忘了
//{
//	int sz = my_strlen(string)-1;
//	char temp = *(string);
//	*(string) = *(string + sz);
//	*(string + sz) = '\0';//假动作，将sz-1后进入下一个递归，以便于定义右元素
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string+sz) = temp;//将左值赋给元素
//}
//
//int main()
//{
//	char string[] = "haha";
//	reverse_string(string);
//	int sz = sizeof(string) / sizeof(string[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", string[i]);
//	}
//	return 0;
//}

int power(int x, int y)
{

	if (y <= 0)
	{
		return 1/x*power(x,y+1);

	}
	if (y > 1)
	{
		return x*power(x, y - 1);
	}
	return x;

}
//
//int main()//之前写的n的k次方没有考虑k小于等于0的情况 重新再写一次
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=power(n, k);
//	printf("%fl\n", ret);
//	return 0;
//}

//void reverse_string(char* arr)//再写一次字符串逆序函数
//{
//	int len = my_strlen(arr)-1;
//	char tmp = arr[0];
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (len >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len] = tmp;
//}
//
//int main()
//{
//	char arr[256];
//	//gets(arr);//输入字符串 要引用头文件<stdio.h> 遇到空格不停止
//	scanf("%s", arr);//遇到空格就停止
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()//Sn=a+aa+aaa+aaaa+aaaaa;a是一个数字
//{
//	int a = 0;
//	int i = 1;
//	while (1)
//	{
//		printf("请输入一个1到9之间的数字:>");
//		scanf("%d", &a);
//		if (a > 0 && a < 10)
//		{
//			break;
//		}
//		printf("输入错误\n");
//	}
//	int sum = a;
//	int num = a;
//	for (i = 1; i < 5; i++)
//	{
//		num += (a*pow(10,i));
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//灵魂画师
//{
//	printf("            *            \n\n");
//	printf("          * * *          \n\n");
//	printf("        * * * * *        \n\n");
//	printf("      * * * * * * *      \n\n");
//	printf("    * * * * * * * * *    \n\n");
//	printf("  * * * * * * * * * * *  \n\n");
//	printf("* * * * * * * * * * * * *\n\n");
//	printf("  * * * * * * * * * * *  \n\n");
//	printf("    * * * * * * * * *    \n\n");
//	printf("      * * * * * * *      \n\n");
//	printf("        * * * * *        \n\n");
//	printf("          * * *          \n\n");
//	printf("            *            \n\n");
//	return 0;
//
//}

//int main()//灵魂画师进阶 输入一个奇数行数自动打印
//{
//	int line = 0;//定义图形的行数
//	printf("请定义图形的行数：>");
//	scanf("%d", &line);
//	printf("图形：\n\n\n\n\n");
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int half = line / 2;
//	for (i = half; i > 0; i--)//上半部分打印
//	{
//		for (j = i; j > 0; j--)//打印空格
//		{
//			printf("  ");
//		}
//		printf("* ");//打印符号星
//		for (j=i;j<half;j++)//循环只能做重复的事情 因此只把改变的部分放入循环体即可 改变的部分为每一行多打印* *//这里的for写成左开右闭更容易理解一点
//		{
//			printf("* * ");
//		}
//		printf("\n\n");
//	}
//	for (i = 0; i < line; i++)//打印中间的值
//	{
//		printf("* ");
//	}
//	printf("\n\n");
//	for (i = half; i > 0; i--)//下半部分打印
//	{
//		for (j = i-1; j <half; j++)//打印空格
//		{
//			printf("  ");
//		}
//		printf("* ");//打印符号星
//		for (j = i-1; j>0; j--)//循环只能做重复的事情 因此只把改变的部分放入循环体即可 改变的部分为每一行少打印* *
//		{
//			printf("* * ");
//		}
//		printf("\n\n");
//	}
//	printf("\n\n\n\n\n\n");
//	return 0;
//}

//int digit(int num)//用于求一个正整数的十进制位数
//{
//	int digit = 0;
//	if (0 == num)
//	{
//		return 1;
//	}
//	else
//	{
//		while (num)
//		{
//			num /= 10;
//			digit++;
//		}
//	}
//	return digit;
//
//}
//
//int main()//0到10万的水仙花数 使用了模除法之后 好像也不是很难
//{
//	printf("0到10万水仙花数：>");
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int j=i;//用变量来存储i的值并对其进行运算
//		int sum = 0;
//		int dig = digit(i);
//		while (j)
//		{
//			sum += pow(j%10, dig);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("%d\n", sizeof(++i));//测试sizeof里的值会不会发生真实运算
//	printf("%d\n", i);//结果为0 sizeof里的值确实不发生真实运算
//	return 0;
//}

//int main()//再用一次左开右闭的for完成老师布置的打印星星作业 这是一题很好的循环训练题 让我明白了左开右闭的重要性 越是复杂的题目 那些基础的东西越适用
//{
//	//1.打印上半部分
//	int row = 0;
//	printf("请输入奇数行行数:");// 偶数会是什么情况？为什么？ 会多一行 比如输入6 打印7 原因是上半部分会进行模二加一 会比原本多一行 老师的只输入上半部分则不会有太大区别
//	scanf("%d", &row);
//	int h = (row / 2)+1;
//	int i = 0;
//	for (i = 0; i < h; i++)
//	{
//		//1.1打印空格部分
//		int j = 0;
//		for (j = 0; j <h-i-1; j++)//用左开右闭写for真的妙不可言
//		{
//			printf(" ");
//		}
//		//1.2打印星星部分
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <h-1; i++)
//	{
//		//2.打印下半部分
//		//2.1打印空格部分
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//2.2打印星星部分
//		for (j = 0; j <row-2-i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//typedef struct Stu
//{
//	char name[10];
//	short age;
//}Stu;//用typedef重新定义结构体变量名称
//
//struct S
//{
//	char arr[20];//数组成员
//	Stu s;//结构体作为结构体成员变量的情况
//	char* p;//指针成员
//};
//
//int main()
//{
//	struct Stu s1 = {"张三",19};//用原类型名初始化变量
//	Stu s2 = {"李四",20};//用重定义的类型名初始化
//	char arr[] = "fuck you";
//	struct S s11= { "1122", { "duck", 19 }, arr };//结构体的嵌套初始化；
//	printf("%s\n", s11.s.name);//嵌套访问结构体成员 duck
//	return 0;
//}

//typedef struct Stu//结构体要放在最前面
//{
//	char name[20];
//	short age;
//}Stu;
//
//void print_Stu1(Stu tmp)
//{
//	printf("name:%s\nage:%d\n", tmp.name, tmp.age);
//}
//
//void print_Stu2(Stu* tmp)//优先选择传址调用结构体 系统开销较小
//{
//	printf("name:%s\nage:%d\n", tmp->name, tmp->age);//利用箭头操作符
//}
//
//int main()
//{
//	Stu s1 = { "狗子", 10 };
//	print_Stu1(s1);//用于打印Stu成员的函数 使用结构体类型作为函数参数
//	print_Stu2(&s1);//传址调用 结构体指针作为参数
//	return 0;
//}