#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()//�����ַ�������strstr������
//{
//	//char* p1 = "abcdef";
//	////char* p2 = "de";
//	//char* p2 = "deq";
//	//char* ret = strstr(p1, p2);
//	//if (ret)
//	//{
//	//	printf("%s\n", ret);//�������1 ��ӡdef
//	//}
//	//else
//	//{
//	//	printf("���ַ���������\n");//�������2 ��ӡ���ַ���������
//	//}
//	char* p1 = "abcdabcd";
//	char* p2 = "bcd";
//	char* ret = strstr(p1, p2);
//	printf("%s\n", ret);//��ӡbcdabcd ˵��strstr���ص����׸�Ŀ�����ַ��������ַ���ַ
//	return 0;
//}

char* my_strstr(const char* str, const char* strset)//strstr��ģ��ʵ�֣�����ƥ�䷨��
{
	assert(str&&strset);
	//����ƥ�� ���μ��ĸ�ַ����ĸ����ַ� ����ĸ�ַ������ҵ����ַ��������ַ� ���Դ��ַ�Ϊ��ʼ�������ַ�����ƥ�� ����ȫƥ�������ĸ�ַ����е����ַ������ַ��ĵ�ַ ������ȫƥ���������ĸ�ַ����е���һ���ַ� �Դ�����
	while (*str)
	{
		if (*str != *strset)
		{
			str++;
		}
		else
		{
			char* tmp1 = (char*)str;
			char* tmp2 = (char*)strset;
			while ((*tmp1 == *tmp2) && (*tmp1))
			{
				tmp1++;
				tmp2++;
			}
			if (*tmp2 == '\0')
			{
				return (char*)str;
			}
			str++;
		}
	}
	return NULL;
}

int main()
{
	char* p1 = "ababc";
	char* p2 = "bc";
	char* ret = my_strstr(p1, p2);
	if (ret)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("δ���ҵ�Ŀ���ַ���\n");
	}
	return 0;
}