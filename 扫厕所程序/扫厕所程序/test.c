#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("******* 勺      撤    硕*******\n");
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*******************************\n");

	printf("\n游戏说明：玩家可以进行自行决定三个随机数a,b,c的取值(随机数范围为0-100)，a,b,c三者平均值为玩家最终的分数（除去整数部分），最低分数的玩家将被选中。\n\n");
}
void game()
{
	int soccer[1024] = { 0 };
	int people = 0;
	int repeat = 0;
	do
	{
		printf("\n请输入游玩的人数:>");
		scanf("%d", &people);
		if (people == 1)
		{
			printf("自娱自乐是吧\n");
		}
		else if (people < 1)
		{
			printf("别闹\n");
		}
	} while (people <= 1);
	int i,j;//循环变量
	do
	{
		for (i = 0; i < people; i++)
		{
			printf("\n\n\n\n\n\n\n");
			printf("玩家%d:\n", i + 1);
			int a, b, c;
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;
				a = rand() % 100;
				printf("玩家%d的a取值为\n%d\n输入1将接受取值，输入0将重新取值（你还有%d次重新取值的机会）:>",i+1, a, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("最终a的取值为：%d\n", a);
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;

				b = rand() % 100;
				printf("玩家%d的b取值为\n%d\n输入1将接受取值，输入0将重新取值（你还有%d次重新取值的机会）:>",i+1, b, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("最终b的取值为：%d\n", b);
			printf("\n\n\n");
			for (j = 3; j >= 0; j--)
			{
				int ret;

				c = rand() % 100;
				printf("玩家%d的c取值为\n%d\n输入1将接受取值，输入0将重新取值（你还有%d次重新取值的机会）:>", i+1,c, j);
				if (!j)
					break;
				scanf("%d", &ret);
				if (ret)
					break;
			}
			printf("最终c的取值为：%d\n\n", c);
			int point = (a + b + c) / 3;
			soccer[i] = point;
		}
		int min = 100;
		for (i = 0; i < people; i++)//找到最低分
		{
			if (min > soccer[i])
			{
				min = soccer[i];
			}
		}
		printf("\n\n最终得分展示：\n");
		for (i = 0; i < people; i++)
		{
			printf("玩家%d：%d\n", i+1, soccer[i]);
		}
		printf("\n\n大局已定\n\n被选中的玩家为:>");
		
		for (i = 0; i < people; i++)
		{
			if (min == soccer[i])
			{
				printf("玩家%d ", i + 1);
				repeat++;
			}
		}
		if (repeat > 1)
		{
			people = repeat;
			printf("同时存在%d个玩家为最低分，进行加赛:", people);
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