#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void main()//����һ����main�����޷���ֵ �ɹ�
//{
//	printf("start\n");
//}

//int main()//strtok�ĳ���ʹ��
//{
//	/*char* str0 = "1270780141@qq.com";
//	char* s2 = "@.";*/
//	//char* str0 = "123.456.789.000";//���ʮ���Ƶı�﷽ʽ
//	//char* s2 = ".";
//	char* str0 = "123@.456.@789";
//	char* s2 = ".@";
//	char str[1024] = { 0 };//ֻ�зǳ����ַ��������и�
//	strcpy(str, str0);
//	char* ret = NULL;
//	for (ret = strtok(str, s2); ret; ret = strtok(NULL, s2))//for�Ļ���
//	{
//		printf("%s\n", ret);
//	}
//	//ret = strtok(str, s2);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, s2);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, s2);
//	//printf("%s\n", ret);
//	return 0;
//}
#include<errno.h>//ʹ��strerror�������õ�ͷ�ļ�
//int main()//strerror����
//{
//	//printf("%s\n", strerror(3));
//	//���ļ�
//	FILE* p= fopen("test.txt", "r");
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));//��û������ļ� ����No such file or directory
//	}
//	else
//	{
//		printf("open file success\n");//��������ļ� ����open file success
//	}
//	return 0;
//}
#include<ctype.h>//ʹ���ַ����ຯ����Ҫ���õ�ͷ�ļ�
//int main()//�ַ����ຯ������
//{
//	//char ch = ' ';
//	//printf("%d\n", isspace(ch));//����8
//	//char ch = '1';
//	//printf("%d\n", isspace(ch));//����0
//	//char ch = '@';
//	//printf("%d\n", isspace(ch));//����0
//	//char ch = '*';
//	//printf("%d\n", isgraph(ch));//����16
//	char ch = '\n';
//	printf("%d\n", isgraph(ch));//����0
//	return 0;
//}

//int main()//�ַ�ת������
//{
//	/*char ch = 'A';
//	char ret = tolower(ch);*///a
//	//char ch = 'a';
//	//char ret = toupper(ch);
//	//putchar(ret);//A
//	/*char ch = 'a';
//	char ret = tolower(ch);
//	putchar(ret);*///a
//	//char ch = '*';
//	//char ret = toupper(ch);
//	putchar(ret);//*
//	return 0;
//}

//int main()//�ַ�������ַ�ת��������Ӧ�þ���(���ַ����е��ַ����ಢת��)
//{
//	char s[] = "Fuck The World";//������ַ����Ĵ�д��ĸȫ���ĳ�Сд
//	int i = 0;
//	while (s[i])
//	{
//		if (isupper(s[i]))
//		{
//			s[i] = tolower(s[i]);
//		}
//		i++;
//	}
//	printf("%s\n", s);//fuck the world
//	return 0;
//}
