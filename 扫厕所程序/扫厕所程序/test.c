#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("******* ��      ��    ˶*******\n");
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******************************\n");

	printf("\n��Ϸ˵������ҿ��Խ������о������������a,b,c��ȡֵ(�������ΧΪ0-100)��a,b,c����ƽ��ֵΪ������յķ�������ȥ�������֣�����ͷ�������ҽ���ѡ�С�\n\n");
}
void game()
{
	int soccer[1024] = { 0 };
	int people = 0;
	int repeat = 0;
	do
	{
		printf("\n���������������:>");
		scanf("%d", &people);
		if (people == 1)
		{
			printf("���������ǰ�\n");
		}
		else if (people < 1)
		{
			printf("����\n");
		}
	} while (people <= 1);
	int i,j;//ѭ������
	do
	{
		for (i = 0; i < people; i++)
		{
			printf("\n\n\n\n\n\n\n");
			printf("���%d:\n", i + 1);
			int a, b, c;
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;
				a = rand() % 100;
				printf("���%d��aȡֵΪ\n%d\n����1������ȡֵ������0������ȡֵ���㻹��%d������ȡֵ�Ļ��ᣩ:>",i+1, a, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("����a��ȡֵΪ��%d\n", a);
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;

				b = rand() % 100;
				printf("���%d��bȡֵΪ\n%d\n����1������ȡֵ������0������ȡֵ���㻹��%d������ȡֵ�Ļ��ᣩ:>",i+1, b, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("����b��ȡֵΪ��%d\n", b);
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;

				c = rand() % 100;
				printf("���%d��cȡֵΪ\n%d\n����1������ȡֵ������0������ȡֵ���㻹��%d������ȡֵ�Ļ��ᣩ:>", i+1,c, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("����c��ȡֵΪ��%d\n\n", c);
			int point = (a + b + c) / 3;
			soccer[i] = point;
		}
		int min = 100;
		for (i = 0; i < people; i++)//�ҵ���ͷ�
		{
			if (min > soccer[i])
			{
				min = soccer[i];
			}
		}
		printf("\n\n���յ÷�չʾ��\n");
		for (i = 0; i < people; i++)
		{
			printf("���%d��%d\n", i+1, soccer[i]);
		}
		printf("\n\n����Ѷ�\n\n��ѡ�е����Ϊ:>");
		
		for (i = 0; i < people; i++)
		{
			if (min == soccer[i])
			{
				printf("���%d ", i + 1);
				repeat++;
			}
		}
		if (repeat > 1)
		{
			people = repeat;
			printf("ͬʱ����%d�����Ϊ��ͷ֣����м���:", people);
		}
	} while (repeat > 1);
}

int main()
{
	srand((unsigned int)time(NULL));
	menu();
	game();
	return 0;
}