#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%p\n", p);
//	printf("%d\n", a);
//	return 0;*/
//	double a = 3.14;
//	double* p = &a;
//	*p = 2.56;
//	printf("%d\n", sizeof(p));
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book	b1 = { "C���Գ������", 55 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	/*struct Book* p = &b1;
//	printf("%s\n", p->name);
//	printf("%d\n", p->price);*/
//	/*printf("������%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 40;
//	printf("�ۿۺ�:%dԪ\n", b1.price);*/
//	return 0;
//}
//int main()
//{
//	int age = 9;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("���ܽ�����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 100)
//			printf("����\n");
//		else
//			printf("��������\n");
//	}
	/*else if (age >= 18 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 100)
		printf("����\n");
	else
		printf("��������\n");*/
	/*return 0;
}*/
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	if (5=a)
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	printf("������һ������--");
//	scanf("%d", &a);
//	printf("\n");
//		if (1==a%b)
//			printf("������������\n");
//		else
//			printf("��������������\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//			i ++;
//		}
//		else
//			i ++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	int a = 10;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (a==10)
//		printf("��������һ����\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");		
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break; 
//	default:
//		printf("�������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d\n", m,n);
//	return 0;
//}
//
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}