#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//

//int main()//输出10个数中的最大值 考虑采用冒泡排序法
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入10个整数，每输入一个整数按一次回车：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <=8; i++)//一趟冒泡排序法即可实现
//	{
//		if (arr[i]>arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	printf("\n最大值为%d\n", arr[9]);
//	return 0;
//}

//

//int main()//1加到100的和
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//

//int main()//将一个拥有n个元素的数组从大到小排序 并由从大到小输出
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)//定义冒泡排序的趟数 一共需要sz-1趟 每次
//	{
//		int flag = 0;//效率提升：假设剩余数组元素已经全部有序
//		for (j = 0; j < sz - 1 - i; j++)//单次冒泡排序进行比较
//		{
//			if (arr[j]>arr[j+1])//若该元素大于下一个元素 则交换 保证剩余的元素中大的元素在最右边
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;//进行交换 说明目前的数组还未完全有序
//			}
//		}
//		if (0 == flag)//若本趟冒泡排序没有进行任何交换 说明数组已经完全有序 跳出循环
//		{
//			break;
//		}
//	}
//	for (i = sz-1; i >0; i--)//按下标从大到小依次打印所有元素
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()//判断一个数能否同时被3和5整除
//{
//	int num = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &num);
//	if ((0 == num % 5) && (0 == num % 3))
//	{
//		printf("能被3和5同时整除\n");
//	}
//	else
//	{
//		printf("不能被3和5同时整除\n");
//	}
//	return 0;
//}

//int main()//给出三角形边长a  b  c，计算出面积
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	while (1)//先判断三条边的合法性
//	{
//		printf("请输入三角形三边边长:>");
//		scanf("%lf%lf%lf", &a, &b, &c);
//		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
//		{
//			break;
//		}
//		else
//		{
//			printf("三角形边长非法，请重新输入!\n");
//		}
//	}
//	double p = (a + b + c) / 2;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));//海伦公式
//	printf("三角形面积为:>%lf", area);
//	return 0;
//}
//double len(int xa, int ya, int xb, int yb)
//{
//	return sqrt(pow(xa - xb,2)+ pow(ya - yb,2));
//}
//
//int main()//给出三角形3点坐标 计算出面积(利用海伦公式)
//{
//	double a, b, c;
//	while (1)//判断计算出边长并判断坐标合法性 
//	{
//		int xa = 0;
//		int ya = 0;
//		printf("请输入a的横纵坐标");
//		scanf("%d%d", &xa, &ya);
//		int xb = 0;
//		int yb = 0;
//		printf("请输入b的横纵坐标");
//		scanf("%d%d", &xb, &yb);
//		int xc = 0;
//		int yc = 0;
//		printf("请输入c的横纵坐标");
//		scanf("%d%d", &xc, &yc);
//		 a = len(xa, ya, xb, yb);//根据两点坐标计算距离
//		 b = len(xb, yb, xc, yc);
//		 c = len(xc, yc, xa, ya);
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			break;
//		}
//		else
//		{
//			printf("坐标非法，请重新输入\n");
//		}
//	}
//	double p = (a + b + c) / 2;
//	double area = sqrt(p*(p - a)*(p - b)*(p-c));//海伦公式
//	printf("三角形面积为%lf\n", area);
//	return 0;
//}

//int main()//利用行列式求三角形面积
//{
//	int x1, x2, x3, y1, y2, y3;
//	printf("请依次输入x1 x2 x3 y1 y2 y3:>");
//	scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &y1, &y2, &y3);
//	double area = ((x3*y1) + (x2*y3) + (x1*y2) - (x1*y3) - (x2*y1) - (x3*y2))/2.0;
//	printf("面积为%lf", area);
//	return 0;
//}

//int main()//分数系统
//{
//	int score = 0;
//	while (1)
//	{
//		printf("请输入分数:>");
//		scanf("%d", &score);
//		if ((score >= 0) && (score <= 100))
//		{
//			break;
//		}
//		else
//		{
//			printf("分数超界，请重新输入\n");
//		}
//	}
//	if (score > 90)
//	{
//		printf("A\n");
//	}
//	else if (score >= 80)
//	{
//		printf("B\n");
//	}
//	else if (score >= 70)
//	{
//		printf("C\n");
//	}
//	else if (score >= 60)
//	{
//		printf("D\n");
//	}
//	else
//	{
//		printf("E\n");
//	}
//	return 0;
//}


//int main()//分数系统参考答案 用switch语句简化代码
//{
//	int num = 0;
//	scanf("%d", &num);
//	swicth(num / 10)
//	{
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//			case
//
//	}
//	return 0;
//}

//int main()//从2的0次幂到2的n次幂
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	printf("请输入n:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", sum);
//		sum *= 2;
//	}
//	return 0;
//}
//#define N 19
//int main()//2的N次幂参考答案
//{
//	int n;
//	int val = 1;
//
//	printf("\t  n  \t   2^n\n");
//	printf("\t=================\n");
//	for (n = 0; n <= N; n++)
//	{
//		printf("\t%3d \t %6d\n", n, val);
//		val = 2 * val;
//	}
//
//	return 0;
//}

int Is_prime(int num)
{
	int i;
	if (1 == num)
	{
		printf("不是素数\n");
	}
	else
	{
		for (i = 2; i <= sqrt(num); i++)
		{
			if (0 == num%i)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}

//int main()//输出2到200的素数
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 200; i++)
//	{
//		if ((2 == i) && (3 == i))
//			printf("%d ", i);
//		else
//		{
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (0 == i%j)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(i))
//			{
//				printf("%d ", i);
//			}
//		}
//
//	}
//	return 0;
//}

//

//int main()//n个阶乘的累加
//{
//	int i = 0;
//	int add = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		add *= i;
//		sum += add;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()//求e的值
//{
//	double sum = 1;//只有double类型才能存放小数
//	int i = 0;
//	long long add = 1;//要求add的值大于10的10次方 若使用int类型则会造成溢出
//	for (i = 1; ; i++)
//	{
//		add *=i;
//		sum +=(1.0/add);
//		if (add > 1e10)
//		{
//			break;
//		}
//	}
//	printf("e=%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	float e = 1.0, n = 1.0;
//	int i = 1;
//	while (1 / n > 1E-10)
//	{
//		e += 1 / n;
//		i++;
//		n = i*n;
//	}
//	printf("e的值是：%lf\n", e);
//	return 0;
//}
//

//int main()//strcopy函数的使用
//{
//	char arr1[] = "love your mother";
//	char arr2[] = "fuck you";
//	strcpy(arr1, arr2);//参数一为接收字符串 参数二为被拷贝字符串
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* arr1, char* arr2)//6分的代码
//{
//	int i = 0;
//	while (arr2[i] != '\0')
//	{
//		arr1[i] = arr2[i];
//		i++;
//	}
//	arr1[i] = arr2[i];
//}

//void my_strcpy(char* arr1,char* arr2)
//{
//
//	while (*arr1++ = *arr2++)//7分代码 更加简洁
//	{
//		;
//	}
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//
//	if (arr1 != NULL&&arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)//代码优化 考虑了参数为空指针的问题
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//		while (*arr1++ = *arr2++)//8分代码 空指针为参数时程序会报错
//		{
//			;
//		}
//}
//
//int main()//my_strcpy函数
//{
//	char arr1[] = "son of bitch";
//	char arr2[] = "hoho";
//	my_strcpy(NULL, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()//对const修饰的常量进行解引用的结果
//{
//	const int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);//20 const修饰的常量并没有限制到指针
//	return 0;
//}

//那么如何对限制指针 以及const限制指针是什么意思

//int main()//const放在指针变量的*的左边时
//{
//	int num = 10;
//	const int* p = &num;
//	*p = 20;//提示*p不可被修改
//	return 0;
//}

//int main()////对照试验
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	return 0;
//}

//int main()//当const放在指针变量的*的右边时
//{
//	int num = 10;
//	int * const p=&num ;
//	int a = 20;
//	p = &a;//p改不了了
//	return 0;
//}

//int main()////对照试验
//{
//	int num = 10;
//	int* p = &num;
//	int a = 20;
//	p = &a;
//	return 0;
//}

//

//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ )
//	{
//		count++;
//	}
//	return count;
//}
//int main()//模拟实现一个满分的strlen
//{
//	char arr[] = "fuck you";
//	printf("%d\n",my_strlen(arr));
//	return 0;
//}

//int main()//int const * p和const int* p等价
//{
//	int a = 10;
//	int const * p = &a;
//	*p = 20;
//	return 0;
//}

//int my_strlen(const char* arr)//my_strlen优化版 const防止参数被修改
//{
//	assert(arr != NULL);//判断参数是否为空指针
//	int count = 0;
//	while (*arr++)//当*arr不是'\0'时，进入循环 并指向下一个元素
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "sb";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* tmp = arr1;
//	assert((arr1 != NULL) && (arr2 != NULL));//断言参数不是空指针
//	while (*arr1++ = *arr2++)//把arr2的字符复制arr1 当检测到*arr2为'\0'时 复制给arr1  并跳出while
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[] = "fuck your mother";
//	char arr2[] = "i love you";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//void swap(int* arr,const int sz)//实现一个函数 让整数数组的奇数放在数组的前半部分 偶数放在数组的后半部分
//{
//	assert(arr != NULL);//断言指针有效性
//	//1.先检测下标为n的元素为是否为奇数 若是奇数 直接检测下一个元素
//	//2如果不是奇数 则检测后面的元素是否为奇数 若发现是奇数 则进行对换 并进行下一个元素的检测
//	//3当一轮检测都没有发生交换 所有奇数已经在数组前半部分 函数停止
//	int n = 0;
//	for (n = 0; n < sz-1; n++)//定义首个检测元素的下标
//	{
//		if (1==arr[n]%2)//若是奇数 不进行任何操作 直接检测下一个元素
//		{
//			;
//		}
//		else
//		{
//			int flag = 1;//默认所有被检测的元素都是偶数
//			int c = 0;//定义其他被比较元素的下标 
//			for (c = n + 1; c < sz ; c++)
//			{
//				if (1 == arr[c] % 2)
//				{
//					int tmp = arr[n];
//					arr[n] = arr[c];
//					arr[c] = tmp;
//					flag = 0;
//					break;
//				}
//			}
//			if (1 == flag)
//			{
//				break;
//			}
//		}
//	}
//}

//void swap(int* arr, int sz)//用老师的算法 在左边找一个偶数 右边找一个奇数 进行交换 这样子就仅仅满足题目的要求来说
//{//更加高效 因为计算的次数减少了
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//

//int main()//整数存储的三种形式的试验代码
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//

//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	printf("please input 10 numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int s = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (s < a[i])
//		{
//			s = a[i];
//		}
//	}
//	printf("%d is the biggest number!\n",s);
//	return 0;
//}

//int check_system()//对大小端进行检测功能的封装
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_system();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()//整形提升练习1
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d\n",a,b,c);//-1 -1 255 涉及到截断和整形提升的知识点
//	return 0;
//}

//int main()//整形提升练习2
//{
//	char a = -128;
//	char b = 128;
//	printf("%u\n", a);//以无符号形式打印 结果4294967168
//	printf("%u\n", b);//由于截断后a b的补码是相同的 因此结果与上面一致
//	return 0;
//}

//int main()//整形提升练习3
//{
//	unsigned int i = 9;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//结果为死循环
//	}
//	return 0;
//}

//int main()//整形提升练习4
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//	return 0;
//}

//int main()//当补码全1和一个1相加的结果是什么
//{
//	int i = 1;
//	int j = -1;
//	int k = i + j;
//	printf("%d\n", k);//结果补码的值为全零 推测可能二进制序列可能产生了拓展并进位
//	return 0;
//}

//int main()
//{
//	double a = 1E10;//1的十次方
//	printf("%lf\n", a);
//	return 0;
//}

//int main()//证明了整型和浮点型在内存中存储方式的不同
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为:%d\n",n);//9
//	printf("*pFloat的值为:%f\n",*pFloat);//0
//	
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);//很大的数
//	printf("*pFloat的值为:%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()//查看浮点数在内存中的存储方式
//{
//	float f = 5.5;//0x 00 00 b0 40(小端字节序存储模式)
//	return 0;
//}

//int main()//字符指针
//{
//	char* p = "abcdef";//常量字符串  常量是可以直接定义的
//	*p = 'c';
//	printf("%c\n", *p);//a  说明p存放的是首元素的地址
//	printf("%s\n", p);//abcdef
//	return 0;
//}

//

//int main()//打印指针数组中的元素所指向的内容
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//
//void printf1(int arr[3][5], int x, int y)//把二维数组的首元素地址传过去
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr+i)+j));//说明两者等价 只是形式不同 
//		}
//		printf("\n");
//	}
//}
//void printf2(int(*p)[5],int x,int y)//把arr看成1维数组 把第一行的数组的地址直接传过去
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	printf1(arr,3,5);//用二维数组的视角去打印arr
//	printf2(arr,3,5);//用一维数组的视角去打印arr
//	return 0;
//}

int main()
{
	int i;
	for (i = 10; i < 1000; i++)
	{
		if (Is_prime(i) == 1)
		{
			if (i / 10 == i % 10)
			{
				printf("%5d", i);
			}
			if (i % 5 == 0)
			{
				printf("\n");
			}
		}
		else
		{
			if (i / 100 == i % 10)
			{
				printf("%5d", i);
			}
			if (i % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}