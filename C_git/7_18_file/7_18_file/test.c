#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//int main()//���Դ��� �ô��봴��һ���������ļ�  
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		Sleep(1000);
//		printf("hehe");
//	}
//	FILE
//	return 0;
//}
#include<string.h>
#include<errno.h>
//int main()//�򿪺͹ر��ļ�
//{
//	FILE* pf=fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�ļ���д
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}

//˳���д

//int main()//�ַ��������
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (!pfWrite)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//˳��put
//	fputc('s', pfWrite);
//	fputc('h', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	 pfWrite) = NULL;
//	return 0;
//
//}

//int main()//�ַ����뺯�����ļ������������
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (!pfRead)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//˳��get
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//
//}

//int main()//�ַ����������������׼�����������
//{
//	int ch = fgetc(stdin);//�������ڴ������ַ�
//	fputc(ch, stdout);//���ڴ��е�ch�ַ��������Ļ��
//	return 0;
//}

//int main()//fgets��ʹ��
//{
//	char buf[1024] = { 0 };//���ڽ���fget�����ķ���ֵ
//	//��ֻ��ģʽ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//������
//	//ע��puts��ӡʱ�Դ�����
//	puts(fgets(buf, 1024, pf));
//	puts(fgets(buf, 1024, pf));
//	puts(fgets(buf, 1024, pf));
//    //�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()//fputs��ʹ��
//{
//	char buf[1024] = { 0 };//���ڽ���fget�����ķ���ֵ
//	//��ֻдģʽ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ� д��ʱ����Լ�����
//	fputs("I am sorry.\n", pf);
//	fputs("I love you.\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��fgets��fputsӦ���ڱ�׼���������
//int main()
//{
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);
//	fputs(buf,stdout);*/
//    //�ȼ���
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//��ʽ���������������fscanf��fprintf��

//fprintf
struct S
{
	char c;
	int i;
	float f;
};

//int main()
//{
//	struct S s = { 'a', 10000, 3.14f };//������Ĭ��Ϊdouble�� ���ʹ����f����תΪfloat
//	FILE* pf = fopen("test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ��������ļ���
//	fprintf(pf, "%c %d %f",s.c,s.i,s.f );
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = {0};//������Ĭ��Ϊdouble�� ���ʹ����f����תΪfloat
	FILE* pf = fopen("test.txt", "r");
	if (!pf)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//��ʽ������
	fscanf(pf, "%c %d %f", &(s.c), &(s.i), &(s.f));
	printf("%c %d %f", s.c, s.i, s.f);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
