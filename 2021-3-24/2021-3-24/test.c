#define _CRT_SECURE_NO_WARNINGS 1��
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()//�������������ҵ���ӦԪ�ص��㷨�Ż� ���ö��ַ�
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6,  8, 9, 10 ,11};
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	int k =7;//Ҫ�ҵ�Ԫ��
//	
//	while (left <= right)//������������ȱ�����Ԫ�أ��������±����ʱ����ʱ���±�ض���������һ�񣬵������±�������±�
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		} 
//		else if(arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break; //break�������ǣ���ֹ��������ѭ����������ѭ�����ض������left����right��������Ӷ���������໥ì�ܵĽ��
//		}
//	
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
//int main()//ʵ���ַ������м��۵Ĺ���
//{
//	char arr1[] = "you you your";
//	char arr2[] = "############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//ͣ��1000����=1��
//		system("cls");//ִ��ϵͳ�����һ��������cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}