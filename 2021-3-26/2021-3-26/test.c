#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<windows.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//		{
//			break;
//		}
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d/n", a);
//
//	return 0;
//}

//int main()//计算出1到100中数字9的个数
//{
//	int i = 1;
//	int j = 9;
//	int count = 0;
//	for (i = 1;i<=100;i++)
//	{
//		if (j >= 100)
//		{
//			break;
//		}
//		count++;
//		if (i % 10 == 0)
//		{
//			count++;
//		}
//		j += 10;//每个含有数字9的数字都相差10，而且这些数字组成的数列中，每到第10,100,1000个时，都会有2,3,4个的数字9，以此类推；
//		
//	}
//	printf("%d ", count);
//	return 0;
//}//结果是11；

//int main()//计算数字9的优化
//{
//	int i = 1;
//	int cou = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			cou++;
//		if (i / 10 == 9)
//			cou++;
//	}
//	printf("%d",cou);
//	return 0;
//}

//int main()//分数求和
//{
//	int i = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2==0)//若i是偶数，进入分支
//		{ 
//			sum = sum - (1.0 / i); //想要保证（1/i）是小数，必须要保证1或者i有一个数是浮点数，也就是修正成（1.0/i）
//		}
//		else//若i是奇数，进入分支
//		{
//			sum = sum + (1.0 / i);
//		}
//	}
//	printf("sum=%fl\n",sum );
//	return 0;
//}

//int main()//对上述算法的简化
//{
//	int i = 1;
//	int flag = 1;//flag用于取正负号
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0/i);
//		flag = -flag;//利用对flag取负实现对flag的正负转换
//	}
//	printf("sum=%fl\n", sum);
//	return 0;
//}

//int main()//找出10个整数中的最大值
//{
//	int arr[10] = { 1010,102,1230,1230,203,3949,2039,2039,9393,9912 };
//	int i = 0;
//	printf("请输入十个整数，整数之间请用,隔开，最后用;结尾>:\n");
//	for (i = 0; i <9; i++)
//	{
//		if (arr[0] < arr[i + 1])
//		{
//			int swap = 0;
//			swap = arr[0];
//			arr[0] = arr[i + 1];
//			arr[i + 1] = swap;
//		}
//	}
//	printf("最大值为%d\n", arr[0]);
//	return 0;
//}

//int main()//对上述算法的优化，由于不需要交换数字，只需要用一个变量max用来存储最大值
//{
//	int arr[10] = { 1010, 102, 1230, 1230, 203, 3949, 2039, 2039, 9393, 9912 };
//	int i = 0;
//	int max = arr[0];//为了防止max是数组中最大的值，直接把数组中的值赋值给max
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));
//	printf("请输入十个整数，整数之间请用,隔开，最后用;结尾>:\n");
//	for (i = 1; i <sz; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为%d\n", arr[0]);
//	return 0;
//}
//
//int main()//9*9乘法表
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int mu = i*j;
//			printf("%d*%d=%-2d ", i, j, mu);//%2d表示两位，不够的位数用空格补齐 
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//利用二分查找法查找数组中的一个数
//{
//	int arr[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));//sz用于存放数组的元素大小
//	int seh = 0;
//	int left = 0;
//	int right = sz - 1;
//	printf("请输入一个整数>:");
//	scanf("%d", &seh);
//	
//	while (left <=right)//若当left等于right时，说明找不到目标元素。由于left只能往右移动和right只能往左移动，就会出现left和right出现交叉
//	{
//		int mid = ((left + right) / 2);
//		if (seh > arr[mid])
//		{
//			left = mid + 1;
//		}
//		if (seh < arr[mid]) 
//		{
//			right = mid - 1;
//		}
//		if (seh==arr[mid])
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到/n");
//	}
//	return 0;
//}

