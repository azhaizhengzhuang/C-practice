#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()//����'\0'�㲻��һ���ַ���
//{
//	char arr[3] = "abc";
//	printf("%s\n", arr);//��������ֵ ������
//	return 0;
//}

//int main()//strncpy���� 
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "hell";
//	strncpy(arr1,arr2,5);
//	printf("%s\n",arr1);//hellofg
//	return 0;
//}

//char* my_strncpy(char* dest, const char* source, unsigned int num)//strncpyģ��ʵ��
//{
//	assert(dest&&source);
//	char* tmp = dest;
//	while (num)//����num���ַ� ��Դͷ�ַ�����num�� ��'\0'����
//	{
//		if (*source)
//		{
//			*dest++ = *source++;
//		}
//		else
//		{
//			*dest++ = *source;
//		}
//		num--;
//	}
//	return dest;
//}

//char* my_strncpy(char* dest, const char* source, unsigned int num)//ģ��ϵͳ��strncpy
//{
//	assert(dest&&source);
//	char* tmp = dest;
//	while (num&&(*dest++=*source++))//����num���ַ� ����'\0'
//	{
//		num--;
//	}
//	if (num)//��num������0 ����ѭ�� ��'\0'����
//	{
//		while (--num)//����Ϊʲô��ǰ��--�� ��Ϊǰ�渳ֵ'\0'��ʱ��û��num
//		{
//			*dest++ = '\0';
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "fu";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()//strncat����
//{
//	char s1[30] = "fuck the\0xxxxxxx";
//	char s2[] = " wolrd";
//	strncat(s1, s2, 3);
//	printf("%s\n", s1);//��֪strncatĩβ�����׷��'\0'
//	return 0;
//}

//char* my_strncat(char* dest, const char* source, unsigned int count)//�Լ�ʵ�ֵ�strncat
//{
//	assert(dest&&source);
//	char* start = dest;
//	while (*dest)//��destָ��Ŀ���ַ���ĩβ
//	{
//		dest++;
//	}
//	//ָ���ַ����ַ���׷��
//	while (count--)//��׷�ӵ�ָ�����ַ�����Դ�ַ����ﵽ'\0'�� ֹͣ׷��
//	{
//		if (*dest++ = *source++)//׷���ַ� ����'\0'
//		{
//			;
//		}
//		else
//		{
//			return start;
//		}
//	}
//	*dest = '\0';//��count����Դ�ַ��� �����ָ��������׷������ ����׷��һ���ַ�'\0'
//	return start;
//}
//char* my_strncat(char* dest, const char* source, unsigned int count)//ģ�¿⺯��ʵ�ֵ�strncat
//{
//	assert(dest&&source);
//	char* start = dest;
//	while (*dest)//��destָ��Ŀ���ַ���ĩβ
//	{
//		dest++;
//	}
//	//ָ���ַ����ַ���׷��
//	while (count--)//��׷�ӵ�ָ�����ַ�����Դ�ַ����ﵽ'\0'�� ֹͣ׷��
//	{
//		if (!(*dest++ = *source++))//��Ϊ����if�����û�в����� ���������if else���ϲ� ���ӵľ�����
//		{
//			return start;
//		}
//	}
//	*dest = '\0';//��count����Դ�ַ��� �����ָ��������׷������ ����׷��һ���ַ�'\0'
//	return start;
//}
//
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "ghijkl";
//	my_strncat(s1, s2, 3);
//	printf("%s\n", s1);
//	return 0;
//}

//int main()//strncmp����
//{
//	const char* p1 = "abcedf";
//	const char* p2 = "abcqwe";
//	printf("strcmp:%d\n",strcmp(p1,p2));
//	printf("strncmp:%d\n", strncmp(p1,p2,3));
//	return 0;
//}

int my_strncmp(const char* p1, const char* p2, unsigned int num)
{
	assert(p1&&p2);
	//������
	//1��numֵС��p1��p2ʱ

	//1.1��p1��p2ǰnum���ַ���ͬ ����0

	//1.2��p1��p2ǰnum���ַ��в�ͬ�ַ����������鲻ͬ�ַ���ASCII�Ĳ�ֵ

	//2��num��������һ���������ַ���ʱ

	//2.1��num��������һ���ַ���ʱ��˵�������ַ�����������ȣ�
	//2.2.1���ص�һ������ȵ��ַ� ����'\0'

	//2.2��numͬʱ����p1��p2ʱ
	//2.2.1��p1��p2ǰnum���ַ��в�ͬ�ַ�������'\0'�����������鲻ͬ�ַ���ASCII�Ĳ�ֵ
	//2.2.2�������ַ�����ȫ��ͬ ����0

	//�����ǣ�һ��һ���Ƚϣ���1.��������ͬ�������ַ� 2.num���� 3�ַ���1����'\0' ��������Ӧ����
	while ((*p1++ == *p2++) && (*p1))
	{
		num--;
		if (num == 0)
		{
			return 0;
		}
	}
	p1--;
	p2--;
	return (*p1 - *p2);
}

int main()
{
	const char* p1 = "abc";//����const����ָ���Է�ָ��ָ��ĳ����ַ����޸ĵ��³������
	const char* p2 = "abc";
	printf("my_strncmp:%d\n", my_strncmp(p1, p2, 100));
	return 0;
}