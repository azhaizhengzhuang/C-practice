#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//����������ʵ��
//{
//	printf("%d\n",5/2);//�������ĳ����ͱ������������Σ������е��㷨�����γ��������õ�������������
//	printf("%lf\n", 5 / 2.0);//�������ͱ�������һ�������и�����������õ����������Ǹ���
//	printf("%lf\n", 5 % 2.0);//%ֻ�ܶ����ν��мӼ�
//	return 0;
//}

//int main()
//{
//	printf("%d\n", -16 >> 1);//1.�������ƣ��ұ߶�������߲�ԭ����λ
//	return 0;
//}

//

//int main()//λ������������
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a&b);
//	printf("%d\n", a|b);
//	printf("%d\n", a^b);
//	return 0;
//}

//

//int main()//�������Ʋ������Ͱ�λ��Ӷ����Ʋ������num��1������
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)//������32��bitλ
//	{
//		if (1 == ((num >> 1) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);//-1��countֵΪ32(����)���ɹ�
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int y = 19;
//	a = b = y + 1;//������ֵ���Դ���,��ʵ������˵��������������ֵ������ɶ��Բ�
//	printf("%d,%d,%d", a, b, y);//20,20,19
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", !a);//�߼���������
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("hehe\n");//���hehe
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", sizeof(int[10]));
	printf("%d\n", sizeof(char[10]));
	printf("%d\n", sizeof(int[5]));
	printf("%d\n", sizeof(char[5]));//40 10 20 5 ��֪��������͵ı�ʾ����
	printf("%d\n", sizeof a );//4
	printf("%d\n", sizeof int );//���� sizeof�������Ǳ������ͣ����������
}