#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int check_string(const char* a,char*b)
//{
//	assert(a!=NULL&&b!=NULL);
//	int s1 = strlen(a);
//	int s2 = strlen(b);
//	if (s1 != s2)//�������ַ����Ȳ���� ֱ�ӷ��ز�����ת����ַ�
//	{
//		return 0;
//	}
//	int j,k;//ѭ������
//		for (j = 0; j < s2 ; j++)
//		{
//			if (a[0] == b[j])//����ַ���Գɹ�
//			{
//				const char* tmp1 = a;
//				const char* tmp2 = (b + j);//����i��j��ѭ�������������޸ģ���˴�����ʱ�����������ָ���ֵ
//				for (k = 1; k < s1; k++)//�����ַ������б������
//				{
//					if (*tmp1 == 0)//���ָ���Ѿ�ָ���ַ���������־��������ָ��ָ���ַ�����Ԫ��
//					{
//						tmp1 = a;
//					}
//					if (*tmp2 == 0)
//					{
//						tmp2 = b;
//					}
//					if (*tmp1 == *tmp2)//������ָ��ָ����ַ�һ�� ���ƶ������ַ�����ָ��
//					{
//						tmp1++;
//						tmp2++;
//					}
//					else
//					{
//						break;
//					}
//				}
//				if (k == s1)//��k==s1 ˵��������Գɹ� �ַ���b���ַ���a��ת����ַ���
//				{
//					return 1;
//				}
//			}
//		}
//	return 0;
//	//�ַ�����ת���
//	//1�ַ���a�ĵ�һ���ַ����ַ���b�����е��ַ��������
//	//2���֮����ַ������б������ ������һ�ߵ�ָ��ָ��'\0'�� ����ָ��ָ���ַ�����Ԫ��
//	//3��Խ����� �ó����
//}
//
//int main()
//{
//	char a[] = "aabaaab";
//	char b[] = "aaabaab";
//	int flag=check_string(a,b);
//	if (flag == 1)
//	{
//		printf("����ת����ַ�\n");
//	}
//	else
//	{
//		printf("������ת����ַ�\n");
//	}
//	return 0;
//}

//void left_rotate(char* s, int num)
//{
//	//ÿ������һ����һ������num��
//	int i = 0;
//	int j = 0;
//	int len = strlen(s);
//	for (i = 0; i < num; i++)
//	{
//		char tmp = s[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			s[j] = s[j + 1];
//		}
//		s[len - 1] = tmp;
//	}
//}
//
//int main()//�����ַ���K���ַ�
//{
//	int num = 0;
//	char s[] = "abcdefg";
//	printf("Ҫ���������ַ���\n");
//	scanf("%d", &num);
//	left_rotate(s, num);
//	printf("%s\n", s);
//	return 0;
//}