#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//以数组元素和分隔符为一组
	{
		int j = 0;
		for (j = 0; j < col; j++)//打印一行数组元素
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)//打印一行分隔符；因为j会初始化，所以不需要再定义新的循环变量了
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");

	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走\n请输入坐标:>");
		scanf("%d%d", &x, &y);
		//判断xy的合法性
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}

}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;//范围为0到row-1
		y = rand() % col;//同理
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
//玩家赢'*',电脑赢'#'，平局'Q'，继续'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 1;
	for (i = 0; i < row; i++)
	{
		//横三行
		if ( board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1]!=' ')//注意，当三个格子都是空格的时候，三个格子的值也是相等的
		{
			return board[i][1];//这里很好了利用了返回值为字符类型
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//对角线
	if ((((board[0][0] == board[1][1] && board[1][1] == board[2][2])) || (board[0][2] == board[1][1] && board[1][1] == board[2][0])) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	//先判断有没有人赢，再判断是否平局
	int ret = Isfull(board, row, col);
	if (ret==1)
	{
		return 'Q';
	}
		return 'C';
}

Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}