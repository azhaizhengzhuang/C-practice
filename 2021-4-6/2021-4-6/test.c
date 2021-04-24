#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int* test()//指针所指向的内存空间被释放所产生的野指针问题
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p=test();
//	*p = 10;//野指针
//	return 0;
//}

//

//int main()//指针的运算中指针加减整数的实例
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//这个arr代表整个数组
//	int* p = &arr;//这个arr代表首元素地址
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);//结果1到10
//	//	p++;
//	//}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//	return 0;
//}

//

//int my_strlen(char* str)//用指针减指针的知识实现my_strlen
//{
//	char* start = str;//用于存放首元素指针的变量
//	char* end = str;//用于存放末元素地址的变量
//	while (*end != '\0')//进行解引用，直到找到/0的地址为止
//	{
//		end++;
//	}
//	return end - start;//元素是具有特殊运算规则的地址，指针减指针即中间的元素个数
//}
//
//int main()
//{
//	char arr[] = "fuckyou";
//	printf("%d\n", my_strlen(arr));//结果为7 nice
//	return 0;
//}

//int main()//指针的关系运算
//{
//	int arr[5];
//	int* vp;
//	for (vp = &arr[5]; vp < arr[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//

//int main()//除两个例外（sizeof、&）,数组名即首元素地址
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p === %p\n", p + i, &arr[i]);//两者完全等价
//	}
//	return 0;
//}

//
//int main()//指针数组的测试代码
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);//结果10 20 30
//	}
//	return 0;
//}

//

//int main()
//{
//	int a[3][4] = { { 1, 2 }, { 3, 4 } };
//	int b[][4] = { { 1, 2 }, { },{ 3, 4 } };
//	return 0;
//}

//

//void init(int* arr,int sz)//初始化数组全部为零 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
void print(int* arr, int sz)//对数组进行打印
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//
//void reverse(int* arr, int sz)//对数组元素进行倒转
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right>left)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr1[10] ;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//为了防止数组大小丢失，把数组元素个数作为参数传到函数中
//	init(arr1,sz);
//	print(arr1, sz);
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11 ,12};
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	reverse(arr2,sz2);
//	print(arr2,sz2);
//	return 0;
//
//}
//
//int main()//对两个相同大小的数组的内容进行替换
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1,sz);
//	printf("\n");
//	print(arr2,sz);//偷懒，借用一下之前写的打印数组函数看看效果
//}

//int main()//证明数据在内存中是"倒"着存储的
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//结果11223300
//	return 0;
//}

//int main()//证明把-1转化为无符号数数值是很大的
//{
//	int i = -1;
//	if ((unsigned int)i > 99999)
//		printf("get it\n");
//		return 0;
//}

//int main()//证明赋值表达式的优先级大于逗号表达式
//{
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	a = b, c, d;//输出结果为2
//	printf("%d\n", a);
//	return 0;
//}

//int main()//求两个整数二进制中不同位的个数
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入两个整数：>");
//	scanf("%d%d", &a, &b);
//	unsigned int c = a^b;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i)&1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()//左移操作符，也会保留符号位
//{
//	printf("%d\n", -1 << 1);
//	return 0;
//
//}

//void odd_binary(num)
//{
//	printf("奇数位二进制打印：>");
//	if (num >= 0)//先判断符号位      这边实际上是多此一举的 不用特地判断符号位 因为右移一格之后 原符号位是不会丢失的 也会右移一格 所以理论上只要右移31位就能把
//	{
//		printf("0");//符号位移到右边去了 也就是for循环i直接初始化为31
//	}
//	else
//	{
//		printf("1");
//	}
//	int i = 0;
//	for (i = 29; i >= 0; i-=2)
//	{
//		if ((num >> i) & 1)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//void even_binary(num)
//{
//	printf("偶数位二进制打印：>");
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ((num >> i) & 1)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//int reverse_odd_even_binary(int num)//二进制奇数偶数位交换 难点所在
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if ((i % 2)==0)//奇数位，判断其是否为1
//		{
//			if ((num >> i)&1)
//			{
//				tmp|=(1 << (i+1));//若为1，临时变量的第i+1位二进制位为1
//			}
//		}
//		else//偶数位，判断其是否为1
//		{
//			if ((num >> i) & 1)
//			{
//				tmp |= (1 << (i - 1));//若为1，临时变量的第i-1位二进制位为1
//			}
//		}
//	}
//	return tmp;
//}
//
//int main()//关于位操作符的习题，使用位操作符的时候要一丝不苟，稍微一个符号不一样结果截然相反
//{
//	int num = 0;
//	int i = 0;
//	printf("请输入一个整数；>");
//	scanf("%d", &num);
//	odd_binary(num);
//	even_binary(num);
//	int rev=reverse_odd_even_binary(num);
//	printf("反转后：\n");
//	odd_binary(rev);
//	even_binary(rev);
//	printf("反转后的整数值：%d", rev);
//	return 0;
//}

//

//int main()//不创建临时变量，交换两个变量的值 利用异或密码值 跟加减法相比好处是不会溢出
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//别老忘记取地址，不写直接报错
//	a = a^b;//a现在存储ab的密码值 b存储b
//	b = a^b;//a存密码值 b存a
//	a = a^b;//a存b b存a
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main()//不通过数组下标引用数组元素 通过指针打印数组元素
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11,12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int main()//右移之后 符号位也会移动吗
//{
//	int a = -1;
//	printf("%d\n", a >>31);//-1
//	return 0;
//}

int main()//巧妙地计算某个整数中二进制序列中1的个数 最简算法
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		a &= (a - 1);//每次运算都会剥离最右边的1
		count++;
	}
	printf("几个1？%d个",count);
	return 0;
}