#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()//�����ַ���K���ַ�
//{
//	int num = 0;
//	char s[] = "abcdefg";
//	printf("Ҫ���������ַ���\n");
//	scanf("%d", &num);
//	left_rotate(s, num);
//	printf("%s\n", s);
//	return 0;
//}

//int main()//�ж�һ���������Ͼ������Ƿ����
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,4,5,6,7 };
//	printf("������Ҫ�ҵ�����");
//	int num = 0;
//	scanf("%d", &num);
//	
//	return 0;
//}

int main()//�����Ͼ�����ȷ��һ�������Ƿ����
{
	//1�ȴӾ������±������� �ҵ���һ������Ŀ�����ֵ�Ԫ�� ���Ѿ��ҵ����һ����Ԫ�� ֱ�Ӷ�λ���һ����Ԫ��
	//2�ҵ���λԪ�ص���һ��Ԫ�� Ȼ������Ԫ�ؿ�ʼ���ҽ��б�������
	//3���ҵ�Ŀ�����ֻ����Ŀ�����ֵ�Ԫ�ػ�����߽�ʱ �ó�������� û�� û�У�
	int yarr[5][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 }, { 4, 5, 6, 7, 8 }, { 5, 6, 7, 8, 9 } };
	int num = 0;
	printf("������һ��������>");
	scanf("%d", &num);
	int i = 0;
	int j = 0;
	int flag = 0;//����flag�����˳�����ѭ�� ��flag����1 ˵���Ѿ�������� �˳�ѭ��
	for (i = 0; i < 5; i++)
	{
		if ((i == 4 && yarr[4][0]<num) || yarr[i + 1][0] > num)//�����߼�������������� ��i==5ʱ�㲻��Խ���������
		{
			for (j = 0; j<5; j++)
			{
				if (yarr[i][j] == num)//1�ҵ���
				{
					printf("�ҵ���\n");
					flag = 1;
					break;
				}
				else if (yarr[i][j] > num)//2û�ҵ�
				{
					printf("û�ҵ�\n");
					flag = 1;
					break;
				}
				else if (j == 4)
				{
					printf("û�ҵ�\n");
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)//�˳��ڶ���ѭ�� ��ֹ���ر���
		{
			break;
		}
	}
	return 0;
}