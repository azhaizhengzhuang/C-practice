#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//VS2013long���͵Ĵ�С����
//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//��Ԥ�������дһ�����׵���־�ļ�


//int main()
//{
//	int i;
//	int arr[10] = { 0 };
//	//��д����ʽ���ı��ļ�
//	FILE* pf=fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//��ʽ��������ļ� ���ø���Ԥ���������
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "file:%s line:%d data:%s time:%s i:%d\n", __FILE__, __LINE__, __DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __STDC__);//�ñ�ʶ��δ���� ˵����ǰ����������ȫ��ѭANSIC
//	return 0;
//}

//��#define�����
#define SQUARE(X) X*X
int main()
{
	//int ret = SQUARE(5);
	//printf("%d\n", ret);//��ӡ���Ϊ25
	//���뺯���ı�������
	//printf("%d\n", SQUARE(5 + 1));//��ӡ�������36 ��11 ��Ϊ����ֱ���滻������ 
	//����Ľ� �����������������ȼ�
	//printf("%d\n", SQUARE((5 + 1)));

	//��ı��� �ò����滻�ı�
	return 0;
}