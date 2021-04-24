#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int win = 0;//每找到一个非雷，win++，当找到所有雷后，胜利,把win设为全局变量，方便展开功能的写入
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=ROW; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <=COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的行列：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("你踩雷了\n\n");
				DisplayBoard(mine, row, col);
				printf("\n\n");
				win = 0;
				break;
			}
			else//2.不是雷，则返回周围雷的数量到show
			{
                spray(mine, show, x, y);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		win = 0;
		printf("恭喜你，排雷成功！\n\n");
		DisplayBoard(mine, row, col);
		printf("\n");
	}
}



void spray(char mine[ROWS][COLS], char show[ROWS][COLS], int  x, int y)//展开功能，若发现排雷的坐标周围无雷，自动展开周围的八个坐标
//运行的时候出现栈溢出，但个人认为算法理论上的可行的，理论上可以实现展开功能
{
	int count = mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] - 8 * '0';
	if (0 == count &&x>=1&&x<=ROW&y>=1&&y<=COL)
	{
		spray(mine,show,x - 1,y - 1);
		spray(mine,show,x ,y - 1);
		spray(mine,show,x +1,y - 1);
		spray(mine,show,x - 1,y );
		spray(mine,show,x + 1,y );
		spray(mine,show,x - 1,y + 1);
		spray(mine,show,x ,y + 1);
		spray(mine,show,x +1,y + 1);
		win++;
		show[x][y] = ' ';
	}
	else
	{
		win++;
		show[x][y] = count + '0';
	}
}