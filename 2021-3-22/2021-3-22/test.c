#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("����������:>");
//	scanf("%s", password);
//	while((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ���\n");
//	else
//		printf("ȷ��ʧ�ܡ�\n");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}