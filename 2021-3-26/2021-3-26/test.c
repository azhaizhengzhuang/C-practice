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

//int main()//�����1��100������9�ĸ���
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
//		j += 10;//ÿ����������9�����ֶ����10��������Щ������ɵ������У�ÿ����10,100,1000��ʱ��������2,3,4��������9���Դ����ƣ�
//		
//	}
//	printf("%d ", count);
//	return 0;
//}//�����11��

//int main()//��������9���Ż�
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

//int main()//�������
//{
//	int i = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2==0)//��i��ż���������֧
//		{ 
//			sum = sum - (1.0 / i); //��Ҫ��֤��1/i����С��������Ҫ��֤1����i��һ�����Ǹ�������Ҳ���������ɣ�1.0/i��
//		}
//		else//��i�������������֧
//		{
//			sum = sum + (1.0 / i);
//		}
//	}
//	printf("sum=%fl\n",sum );
//	return 0;
//}

//int main()//�������㷨�ļ�
//{
//	int i = 1;
//	int flag = 1;//flag����ȡ������
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0/i);
//		flag = -flag;//���ö�flagȡ��ʵ�ֶ�flag������ת��
//	}
//	printf("sum=%fl\n", sum);
//	return 0;
//}

//int main()//�ҳ�10�������е����ֵ
//{
//	int arr[10] = { 1010,102,1230,1230,203,3949,2039,2039,9393,9912 };
//	int i = 0;
//	printf("������ʮ������������֮������,�����������;��β>:\n");
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
//	printf("���ֵΪ%d\n", arr[0]);
//	return 0;
//}

//int main()//�������㷨���Ż������ڲ���Ҫ�������֣�ֻ��Ҫ��һ������max�����洢���ֵ
//{
//	int arr[10] = { 1010, 102, 1230, 1230, 203, 3949, 2039, 2039, 9393, 9912 };
//	int i = 0;
//	int max = arr[0];//Ϊ�˷�ֹmax������������ֵ��ֱ�Ӱ������е�ֵ��ֵ��max
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));
//	printf("������ʮ������������֮������,�����������;��β>:\n");
//	for (i = 1; i <sz; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("���ֵΪ%d\n", arr[0]);
//	return 0;
//}
//
//int main()//9*9�˷���
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int mu = i*j;
//			printf("%d*%d=%-2d ", i, j, mu);//%2d��ʾ��λ��������λ���ÿո��� 
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()//���ö��ֲ��ҷ����������е�һ����
//{
//	int arr[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));//sz���ڴ�������Ԫ�ش�С
//	int seh = 0;
//	int left = 0;
//	int right = sz - 1;
//	printf("������һ������>:");
//	scanf("%d", &seh);
//	
//	while (left <=right)//����left����rightʱ��˵���Ҳ���Ŀ��Ԫ�ء�����leftֻ�������ƶ���rightֻ�������ƶ����ͻ����left��right���ֽ���
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���/n");
//	}
//	return 0;
//}

