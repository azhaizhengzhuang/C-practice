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
//	return 0;//��n�Ľ׳�
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int z = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)//i��1��10��ѭ��
//	{
//		for (j = 1;j<=i;j++)
//		{
//			z = z*j;//��z�����1��10�Ľ׳�
//		}
//		sum = sum + z;//��sum�����z��ֵ
//		z = 1;//��z���еĳ�ʼ��
//	}
//	printf("%d", sum);//��sum���д�ӡ
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int z = 1;
//	int sum = 0;
//	for (i = 1; i <= 4; i++)//i��1��10��ѭ��
//	{
//		z = z*i;//������������Ż�
//		sum = sum + z;
//	}
//	printf("%d", sum);//��sum���д�ӡ
//	return 0;
//}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};//���룺��arr�����������ҵ�7
	int k = 117;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//��sz�����arr����ĸ���
	for (i = 0; i < sz; i++)//i��ʾarr������±꣬���������±�������Ԫ��
	{
		if (k == arr[i])//arr[i]���������е�����һ��Ԫ�أ�������Ҫ�ҵ�ֵ�������Ԫ��֮һ���ʱ�����ǵ�Ŀ�Ĵﵽ��
		{
			printf("�ҵ��ˣ��±���%d\n",i);
			break;
		}

	}
 	if (i ==sz)//��i=sz����˵��û���ҵ�Ԫ��
	{
		printf("û�ҵ�\n");
	}
	return 0;
}