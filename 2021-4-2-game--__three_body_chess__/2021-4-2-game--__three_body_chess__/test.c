#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************************\n");
	printf("******  0.exit          1.play  *****\n");
	printf("*************************************\n");
}
//游戏算法的实现
void game()
{
	//用于实现棋盘的二位数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		if (Iswin(board, ROW, COL) != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		if (Iswin(board, ROW, COL) != 'C')
		{
			break;
		}
	}
	if (Iswin(board, ROW, COL) == '*')
	{
		printf("玩家赢\n");
	}
	else if (Iswin(board, ROW, COL) == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入0或1>:");
		scanf("%d", &input);//别忘了取地址符号
		switch (input)
		{
		    case 1:
				printf("三子棋\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}

int main()
{

	test();
	return 0;
}