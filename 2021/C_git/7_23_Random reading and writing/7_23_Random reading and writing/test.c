#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//�����д�ļ�
//feek ftell rewind
//int main()
//{
//	//1���ļ� 
//	FILE*  pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����д
//	//2.1ָ��ƫ��
//	fseek(pf, -2, SEEK_END);
//	//2.2��д
//	printf("pos=%d\n", ftell(pf));
//	char ch=fgetc(pf);
//	printf("ch=%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("(rewind)ch=%c", ch);
//	//3�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ������ж�
//EOF�Ĵ���֤��
//int main()
//{
//	//1���ļ� 
//	FILE*  pf = fopen("test.txt", "r");//���ļ�û������
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��д
//	printf("%d\n", fgetc(pf));//��ȡ�ļ��е��ַ� ��ӡ-1
//	//3�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//perror��ʹ�� ��strerrorʹ�ø�����

//int main()
//{
//	//1���ļ� 
//	FILE*  pf = fopen("�ʵ۵�����.txt", "r");
//	if (!pf)
//	{
//		perror("sb:");
//		return 0;
//	}
//	//��д
//	printf("%d\n", fgetc(pf));
//	//3�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof��ʹ��

//perror��ʹ�� ��strerrorʹ�ø�����

int main()
{
	//1���ļ� 
	FILE*  pf = fopen("test.txt", "r"); 
	char ch;
	if (!pf)
	{
		perror("open test.txt:");
		return 0;
	}
	//��д
	//��ȡ�ļ�ֱ����ȡ����
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);//�ļ�Ϊ�� ����û�����
	}
	//�ж϶�ȡ������ԭ��
	if (ferror(pf))
	{
		puts("error when reading");
	}
	else if (feof(pf))
	{
		puts("end of file reached sucessfully");
	}
	//3�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}