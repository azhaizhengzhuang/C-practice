#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left,char* right)//���������ַ��������ַ������ַ�
{
	assert(left&&right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* s, int a)
{
	assert(s);
	int len = strlen(s);
	assert(a<=len);
	reverse( s, s+a-1);//�������
	reverse( s+a, s+len-1);//�����ұ�
	reverse( s, s+len-1);//����ȫ��
}
//
//int main()//������ת��ʵ���ַ�������
//{
//	char s[] = "abcdef";
//	left_move(s,3);
//	printf("%s\n", s);
//	return 0;
//}

//void reverse(char* left, char* right)//���������ַ��������ַ������ַ�
//{
//	assert(left&&right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void right_move(char* s, int a)
//{
//	assert(s);
//	int len = strlen(s);
//	assert(a <= len);
//	reverse(s, s + len-a-1);//�������
//	reverse(s+len-a,s+len-1);//�����ұ�
//	reverse(s, s + len - 1);//����ȫ��
//}
//
//int main()//������ת��ʵ���ַ�������
//{
//	char s[] = "abcdef";
//	right_move(s, 1);
//	printf("%s\n", s);
//	return 0;
//}

//int check_move(char* a, char* b)//������ת��ٷ����ж��ַ���B�Ƿ�Ϊ�ַ���A��ת����
//{
//	int i = 0;
//	int len = strlen(a);
//	for (i = 0; i <len; i++)
//	{
//		left_move(a, 1);
//		if (strcmp(a, b) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}



int main()
{
	char a[] = "abcdef";
	char b[] = "defabc";
	int ret=check_move(a, b);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}