#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//VS2013long���͵Ĵ�С����
//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//��Ԥ�������дһ�����׵���־�ļ�


int main()
{
	int i;
	int arr[10] = { 0 };
	//��д����ʽ���ı��ļ�
	FILE* pf=fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//��ʽ��������ļ� ���ø���Ԥ���������
	for (i = 0; i < 10; i++)
	{
		fprintf(pf, "file:%s line:%d data:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
	}
	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}