#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>

//char* my_strcpy(char* s1, const char* s2)//strcpyģ��ʵ��
//{
//	assert(s1&&s2);
//	char* tmp = s1;
//	//����s2��s1 ������\0��
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ��׵�ַ
//	return tmp;
//}
//
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "abcd";
//	printf("%s\n", my_strcpy(s1, s2));
//	return 0;
//}

//int main()//�����ַ���׷�Ӻ�����û��׷�Ӱ���'\0'���ڵ������ַ�
//{
//	char s1[20] = "abc\0xxxxxxxx";//ԭ���ַ���׷�Ӻ���������'\0'�ͻ�ֹͣ����ô���ɴ�ӡ�������֪���ַ���׷�Ӻ�����û��׷�ӡ�\0��
//	char s2[] = "def";
//	strcat(s1, s1);
//	printf("%s\n", s1);//������а���
//	return 0;
//}



char* my_strcat(char* dest, const char* src)//�ַ���׷�Ӻ���ģ��ʵ��
{
	assert(dest&&src);//�жϲ����ĺϷ���
	char* tmp = dest;
	while (*dest)//��destָ�붨λ��'\0'��
	{
		dest++;
	}
	while (*dest++ = *src++)//��src���Ƹ�dest ����'\0'
	{
		;
	}
	return tmp;
}

int main()
{
	char s1[20] = "abcd";
	char s2[] = "efghi";
	printf("%s\n", my_strcat(s1,s2));
	return 0;
}