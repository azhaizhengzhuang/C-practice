#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()//指针面试题
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//
//int main()//变态指针面试题
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//void print1(int a[2][3])
//{
//	printf("%d\n", a[1][1]);
//}
//
//void print2(int(*p)[3])
//{
//	printf("%d\n", p[1][1]);
//}
//
//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 2, 3, 4 } };
//	/*print1(a);
//	print2(a);*/
//	return 0;
//}

//int main()//杨辉三角形
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;//存放乘数
//	int reta = 1;
//	int retb = 1;
//	printf("请输入杨辉三角形的行数:>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//杨辉三角形的行列实际上是组合数的下标和上标
//	{
//		for (j = 0; j <= i; j++)
//		{
//			for (ret=i; ret >= (i-j + 1); ret--)//reta存放组合数的分子
//			{
//				reta *= ret;
//			}
//			for (ret=1; ret<=j ; ret++)//retb存放组合数的分母
//			{
//				retb *= ret;
//			}
//			printf("%4d ", reta / retb);//打印组合数
//			reta = 1;
//			retb = 1;//分子分母置为1
//		}
//		printf("\n");//换行
//	}
//	return 0;
//}

//1
//1 1
//1 2 1
//1 3 3 1 
//1 4 6 4 1
//1 5 10 10 5 1

//int main()//用数组形式打印固定行数的杨辉三角形
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 &&i>j&&j>0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//判断谁是凶手(自己写的) 计算讲假话的人
//{
//	int real = 0;//real表示推断谁是真凶
//	for (real = 1; real <= 4; real++)
//	{
//		int false = 0;//定义每次的假话的个数
//		if (real == 1)
//		{
//			false++;
//		}
//		if (real != 3)
//		{
//			false++;
//		}
//		if (real != 4)
//		{
//			false++;
//		}
//		if (real == 4)
//		{
//			false++;
//		}
//		if (false == 1)
//		{
//			break;
//		}
//	}
//	printf("真凶是%c\n", real + 64);
//	return 0;
//}

/*int main()*///老师写的判断凶手代码 计算讲真话的人
//{
//	int killer = 0;//字符串不能进行简单的比较 为了便于比较 把killer定义为整形 再赋予字符ASCII码
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)//利用了真为1 假为0的特性计算了讲真话的人数
//			printf("killer=%c\n", killer);
//	}
//	return 0;
//}

//int main()//跳水排名问题
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)//选手的排名只可能是1-5中的值
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1)==1) &&
//							(a*b*c*d*e == 120))
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()//证明相同的常量字符串不会创建两次
//{
//	char* p1 = "fuck";
//	char* p2 = "fuck";
//	if (p1 == p2)
//	{
//		printf("amazing!\n");
//	}
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

int int_compare(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int* a, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}

int char_compare(const void* e1,const void* e2)
{
	return (int)(*(char*)e1 - *(char*)e2);
}

int sort_by_age(const void* e1, const void* e2)
{
	return (int)(((struct Stu*)(e1))->age - ((struct Stu*)(e2))->age);
}
//int main()//练习使用qsort排序各种数据类型
//{
//	//int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };//整形排序
//	//qsort(arr,10,4,int_compare);
//	//print_arr(arr, 10);
//	//char arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };//字符排序
//	//qsort(arr, 10, 1, char_compare);
//	struct Stu s[3] = { {"zhangsan",18}, {"lisi",10}, {"wangwu",20} };
//	qsort(s, 3, sizeof(s[0]), sort_by_age);
//	return 0;
//}

void swap(char*e1, char*e2,int sz)//一个字节一个字节地交换
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, int length, int sz,int (*compare)(const void* e1,const void* e2) )//用qsort函数的思想改进bubble_sort
{
	int i = 0;
	int j = 0;
	for (i = 0; i < length - 1; i++)//确定冒泡序的趟数
	{
		for (j = 0; j < length - i - 1; j++)//每次冒泡排序比较的次数
		{
			if (compare((char*)base+(sz*j),(char*)base+(sz*(j+1)))>0)//回调compare函数，如果返回值大于零，说明前面的元素大于后面，要进行替换
			{
				swap((char*)base + (sz*j), (char*)base + (sz*(j + 1)),sz);//交换两个元素 一个字节一个字节交换
			}
		}
	}
}

int main()
{
	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int lengh = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,lengh,sizeof(arr[0]),int_compare);
	//print_arr(arr,lengh);

	return 0;
}

