#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("********* three_body_chess ********\n");
	printf("*******         1.play      *******\n");
	printf("*******         0.exit      *******\n");
	printf("***********************************\n");
}

void Init_board(char board[row][col])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   

void print_board(char board[row][col])
{
	//以两行为一单位
	int i,j;
	printf(" ");
	for (i = 0; i < col; i++)//打印横坐标
	{
		printf(" %2d ", i + 1);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%2d",i+1);
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j != col - 1)
			{
				printf("|");
			}
		}
		printf("\n  ");
		if (i!=row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j != col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void playermove(char board[row][col])
{
	while (1)
	{
		printf("请输入要下的行列:>");
		int i, j;
		scanf("%d", &i);
		scanf("%d", &j);
		//判断坐标合法性
		if (board[i-1][j-1] != ' ')
		{
			printf("坐标非法，请重新输入\n");
			continue;
		}
		else
		{
			board[i-1][j-1] = '*';
			break;
		}

	}
}

void computermove(char board[row][col])
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//利用随机数生成随机坐标值
		if (board[x][y] == ' ')
		{
			board[x][y] = '@';
			break;
		}
		else
		{
			continue;
		}
	}
}

char iswin(char board[row][col])
//四个返回值 1继续——'\0' 2电脑赢——'@' 3玩家赢——'*' 4平局——'D'
{
	//先定义循环变量
	int i ;
	//先判断是否满足胜利条件 若有 返回格子上的字符
	//行相等的情况
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])&&(board[i][0]!=' '))
		{
			return board[i][0];
		}
	}
	//列相等的情况
	for (i = 0; i < col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])&&(board[0][i]!=' '))
		{
			return board[0][i];
		}
	}
	//对角线相等的情况
	if ((((board[0][0] == board[1][1]) && (board[0][0] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	//无人胜利 则判断棋盘有没有满
	if (isfull(board))
	{
		return 'D';
	}
	//没有赢家且棋盘未满 游戏继续
	return '0';
}

int isfull(char board[row][col])
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}