#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//	{
//		k++;
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int nn = 1;
//	printf("n=");
//	scanf("%d", &n);
//	for (i = 1; i < n+1; i++)
//	{
//		nn = nn*i;
//	}
//	printf("n!=%d",nn);
//	return 0;//求n的阶乘
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int z = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)//i从1到10的循环
//	{
//		for (j = 1;j<=i;j++)
//		{
//			z = z*j;//用z来存放1到10的阶乘
//		}
//		sum = sum + z;//用sum来存放z的值
//		z = 1;//对z进行的初始化
//	}
//	printf("%d", sum);//对sum进行打印
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int z = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)//i从1到10的循环
//	{
//		z = z*i;//对上述代码的优化
//		sum = sum + z;
//	}
//	printf("%d", sum);//对sum进行打印
//	return 0;
//}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//代码：从arr有序数组中找到7
	int k = 117;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//用sz来存放arr数组的个数
	for (i = 0; i < sz; i++)//i表示arr数组的下标，这里利用下标来引用元素
	{
		if (k == arr[i])//arr[i]就是数组中的其中一个元素，当我们要找的值和数组的元素之一相等时，我们的目的达到了
		{
			printf("找到了，下标是%d\n",i);
			break;
		}

	}
 	if (i ==sz)//若i=sz，则说明没有找到元素
	{
		printf("没找到\n");
	}
	return 0;
}