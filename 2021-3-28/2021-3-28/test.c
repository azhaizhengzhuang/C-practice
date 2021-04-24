#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int is_crime_number(int x)//写一个函数，用于判断一个数是不是素数，是就返回1，不是则返回0
//{
//	int i;
//	if (x <= 1)
//	{
//		return 0;
//	}
//	for (i = 2; i <= sqrt(x); i ++)
//	{
//		if (0==x%i)
//		{
//			return 0;//return 0比break的动作能力更强，不仅可以打破循环，还能直接结束函数
//		}
//	}
//	return 1;//若上面用的是break语句，则不能直接return 1；因为break运行之后计算机会执行循环下面的语句
//}
//
//int main()
//{
//	int num=0;
//	printf("请输入一个自然数>;");
//	scanf("%d", &num);
//	if (is_crime_number(num))
//	{
//		printf("是素数\n");
//
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	
//	return 0;
//}
//
//int is_leap_year(int x)
//{
//	if (((x % 100 != 0) && (0 == x % 4))||(0==x%400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year=0;
//	printf("输入一个年份：>");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = add(a, b);
//	prinft("%d", sum);
//}

void add(int* a)
{
	(*a)++; //*a似乎不能用++，而+=就可以，这是为什么呢？   
}     //解答：因为++的优先度大于*，所以++会先执行，并作用于p；只要把*p括起来就能避免++先执行了

int main()
{
	int num = 0;
	int i = 0;
	int* p = &num;
	for (i = 0; i <= 10; i++)
	{
		printf("num=%d ", num);
		add(p);
	}
	return 0;
}

//int binary_search(int arr[], int x,int sz)//第一个参数实际上是数组的首元素地址，计算机可以通过数组的首元素地址找到数组，就像通过地址找到变量那样子
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (x > arr[mid])//4月1号补充，这里我在参数只有数组首元素的地址下，依然直接引用了数组元素，之前我认为在这种不能直接通过下标引用数组元素是错误的
//		{
//			left = mid + 1;//目前为止，数组把首元素地址当参数传参的情况下，受到影响的只有sizeof，其他的似乎是没区别的，也就是影响到了判断元素个数这个点而已
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = (sizeof(arr) / sizeof(arr[0]));//由于调用函数的时候，若想把数组作为参数传过去，传的只能是数组首元素的地址，仅靠首元素地址无法求出数组大小
//	int ret=binary_search(arr, k,sz);//由于缺少信息，在函数内部无法求出数组大小，因此还需要把函数大小作为参数传输
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}