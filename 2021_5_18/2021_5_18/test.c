#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int findnum(int arr[3][3], int row, int col, int num)//�����Ͼ�����Ѱ��һ��Ԫ�� ���öԽ���Ѱ��
//{
//	int x = 0;
//	int y = col - 1;//��λ���Ͻǵ�Ԫ��
//
//	while(x <= row - 1 && y >= 0)//���ʣ��Ԫ���е������Ͻǵ�Ԫ�ص��±�û��Խ�����
//	{
//		if (num > arr[x][y])//������Ͻ�Ԫ��С��Ŀ��Ԫ��
//		{
//			x++;//ȥ����һ��
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else//������Ͻ�Ԫ�ص���Ŀ��Ԫ��
//		{
//			return 1;//�ҵ��� ����1
//		}
//	}
//
//	return 0;//û�ҵ� ����0
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3, }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int ret=findnum(arr,3,3,1);
//	if (1 == ret)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int findnum(int arr[3][3], int* row, int* col, int num)//�Խ���Ѱ���ĸĽ� �ú������Է���Ԫ���±�(˼·Ϊ��ַ����)
//{
//	int x = 0;
//	int y = *col - 1;//��λ���Ͻǵ�Ԫ��
//
//	while (x <= *row - 1 && y >= 0)//���ʣ��Ԫ���е������Ͻǵ�Ԫ�ص��±�û��Խ�����
//	{
//		if (num > arr[x][y])//������Ͻ�Ԫ��С��Ŀ��Ԫ��
//		{
//			x++;//ȥ����һ��
//		}
//		else if (num < arr[x][y])
//		{
//			y--;
//		}
//		else//������Ͻ�Ԫ�ص���Ŀ��Ԫ��
//		{
//			*row = x;
//			*col = y;
//			return 1;//�ҵ��� ����1
//		}
//	}
//
//	return 0;//û�ҵ� ����0
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3, }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int x = 3;
//	int y = 3;
//	int ret = findnum(arr, &x, &y, 5);//�����x��yǰ��������ŵ���ֵ������������ͬ���տ�ʼ���ڴ������Ԫ�ظ����������������Ŀ��Ԫ���±�
//	if (1 == ret)
//	{
//		printf("�ҵ��ˣ��±���%d %d\n",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//str������д��
//1������
//2�ݹ�
//3ָ��-ָ��

//int my_strlen(const char* str)//��������ʽ��strlen
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)//�ݹ鷽ʽ��strlen
//{
//	assert(str);
//	if (*str)
//	{
//		return 1 + my_strlen(str++);//ǰ��++�ͺ���++�����ȶ����кܴ����� ���ע��
//	}
//	return 0;
//}

//int my_strlen(const char* str)//ָ��-ָ�뷽ʽ��strlen
//{
//	assert(str);
//	char* tmp = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}