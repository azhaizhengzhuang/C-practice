#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void three_body_chess()
{
	char board[col][row] = { 0 };
	Init_board(board);//初始化棋盘
	print_board(board);//打印棋盘
	char ret;
	//开始下棋
	while (1)
	{
		playermove(board);//玩家走
		print_board(board);//打印棋盘
	    ret=iswin(board);//判断结果
		if (ret!='0')
			break;
		computermove(board);//电脑走
		print_board(board);//打印棋盘
		iswin(board);//判断结果
		if (ret!='0')
			break;
	}
	if (ret == '*')
	{
		printf("打赢一个傻子也没什么好骄傲的\n\n");
	}
	else if (ret == '@')
	{
		printf("憨批 这也能输\n\n");
	}
	else
	{
		printf("跟傻子电脑都能打平 真有你的\n\n");
	}
}

void game()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			three_body_chess();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
}