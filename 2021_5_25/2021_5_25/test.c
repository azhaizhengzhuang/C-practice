#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* p1,const char* p2)//ģ��Դ����ʵ�ֵ�strstr
{
	assert(p1&&p2);//���ָ���������Ч��
	if (!(*p2))//�����ַ����ǿմ� �򷵻�ĸ�ַ������ַ���ַ
	{
		return (char*)p1;
	}
	//����ʱ�����洢�����ַ��������ַ��ĵ�ַ ��cur������ָ��ǰ��⵽�Ľ��� ���ⶪʧ��ַ���ݣ����˾���s1���õ�û��Ҫ��
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	while (*cur)//��curָ���ĸ�ַ����е��ַ�����'\0' �����ѭ��
	{
		//ÿ��ѭ����ʼ ��s1��s2��ʼ��
		s1 = cur;
		s2 = (char*)p2;
		while(*s1 && *s2 && (*s1 == *s2))//�����ַ�����ĸ�ַ������ַ�ƥ�� �Ҷ���Ϊ'\0'ʱ��ƥ����һ���ַ������˾�������*s2û��Ҫд ��Ϊ����������������Ȼ�����Ƴ�������
		{
			s1++;
			s2++;
		}
		if (!(*s2))//��s2ָ�����'\0' ˵���ҵ������ַ���
		{
			return cur;
		}
		//���ûƥ��ɹ� ��ָ��curָ����һ��ĸ�ַ����е��ַ�
		cur++;
	}
	//��curָ����ĸ�ַ����е�'\0' ˵��û�ҵ����ַ��� ֱ�ӷ��ؿ�ָ��
	return NULL;
}

int main()
{
	char* s1 = "abbcdef";
	char* s2 = "";
	char* ret = my_strstr(s1, s2);
	printf("%s\n", ret);
	return 0;
}