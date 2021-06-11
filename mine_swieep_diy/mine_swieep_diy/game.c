#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("******     mine swieep     *****\n");
	printf("********************************\n");
	printf("******    1 .p l a y       *****\n");
	printf("******    0 .e x i t       *****\n");
	printf("********************************\n");
	printf("********************************\n");
}

void init(char mine[ROWS][COLS],char show[ROW][COL])
{
	int i, j;//循环变量
	//把mine数组的元素全部初始化为0 把show数组全部初始化为'*'
	for (i = 0; i < ROWS;i++)
	{
		for (j = 0; j < COLS;j++)
		{
			mine[i][j] = '0';
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			show[i][j] = '*';
		}
	}

}
void print_mine(char mine[ROWS][COLS])//打印完整的mine数组
{
	int i, j;
	printf("    ");

	for (i = 0; i < COLS; i++)
	{
		printf("%2d  ", i+1);
	}
	printf("\n\n ");
	for (i = 0; i < ROWS; i++)
	{
		printf("%2d ", i+1);
		for (j = 0; j < COLS; j++)
		{
			printf(" %c ",mine[i][j]);
			if (j != COLS - 1)
			{
				printf("|");
			}
		}
		printf("\n    ");
		if (i != ROWS - 1)
		{
			for (j = 0; j < COLS; j++)
			{
				printf("---");
				if (j != COLS - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n ");
	}
}
void print_show(char show[ROW][COL])//打印show数组
{
	int i, j;
	printf("    ");

	for (i = 0; i < COL; i++)
	{
		printf("%2d  ", i + 1);
	}
	printf("\n\n ");
	for (i = 0; i < ROW; i++)
	{
		printf("%2d ", i + 1);
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", show[i][j]);
			if (j != COL - 1)
			{
				printf("|");
			}
		}
		printf("\n    ");
		for (j = 0; j < COL; j++)
		{
			printf("---");
			if (j != COL - 1)
			{
				printf("|");
			}
		}
		printf("\n ");
	}
}

void mini_print_mine(char mine[ROWS][COLS])//打印mine数组
{
	int i, j;
	printf("    ");

	for (i = 0; i < COL; i++)
	{
		printf("%2d  ", i + 1);
	}
	printf("\n\n ");
	for (i = 0; i < ROW; i++)
	{
		printf("%2d ", i + 1);
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", mine[i+1][j+1]);
			if (j != COL - 1)
			{
				printf("|");
			}
		}
		printf("\n    ");
		for (j = 0; j < COL; j++)
		{
			printf("---");
			if (j != COL - 1)
			{
				printf("|");
			}
		}
		printf("\n ");
	}
}



void mine_set(char mine[ROWS][COLS], int start_x, int start_y)//一共在mine数组的内围随机布置mine个雷  其中1表示雷 0表示非雷 并保证第一个排雷的位置一定不是雷
{
	int i = MINE;
	while (i)
	{
		int x = rand() % ROW+1;
		int y = rand() % COL+1;
		if ((x == start_x) && (y == start_y))
		{
			continue;
		}
		if (mine[x][y] == '0')
		{
			mine[x][y]='1';
			i--;
		}
	}
}

void count_mine(char mine[ROWS][COLS], char show[ROW][COL], int x, int y)//计算位置比返回位置的坐标多1
{
	//计算mine[x][y]周围的雷的数量 并把数量返回到show[x-1][y-1]上 
	//count_mine函数的参数中的可变的参数只有x y 因此以下对参数x y的值进行讨论
	// show[x-1][y-1]的值为0（对应的mine[x][y]周围无雷的情况）  且若show[x-1][y-1]中周围八格中存在'*' 则对这个坐标对应的xy递归使用find_mine函数
	
	
	//bug：可能是数组访问越界造成的异常
	char result = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]
		-( 7 *'0');
	if ((x >= 1) && (x <= ROW) && (y >= 1) && (y <= COL))//由于使用了递归 坐标将会及其不确定 只有是合法范围内的数据 才能接受赋值 
	{                                                    //给非法的坐标赋值 将造成非法访问 造成意料之外的结果
		show[x - 1][y - 1] = result;
		if (result == '0')
		{
			show[x - 1][y - 1] = ' ';
			if ((x >= 1) && (x <= ROW) && (y >= 1) && (y <= COL))
			{
				if (show[x - 2][y - 2] == '*')
				{
					count_mine(mine, show, x - 1, y - 1);
				}
				if (show[x - 2][y - 1] == '*')
				{
					count_mine(mine, show, x - 1, y);
				}
				if (show[x - 2][y] == '*')
				{
					count_mine(mine, show, x - 1, y + 1);
				}
				if (show[x - 1][y - 2] == '*')
				{
					count_mine(mine, show, x, y - 1);
				}
				if (show[x - 1][y] == '*')
				{
					count_mine(mine, show, x, y + 1);
				}
				if (show[x][y - 2] == '*')
				{
					count_mine(mine, show, x + 1, y - 1);
				}
				if (show[x][y - 1] == '*')
				{
					count_mine(mine, show, x + 1, y);
				}
				if (show[x][y] == '*')
				{
					count_mine(mine, show, x + 1, y + 1);
				}
			}
		}
	}
}

int iswin(char mine[ROWS][COLS], char show[ROW][COL])
{
	//若show中所有的'*'都是雷 则说明玩家已经达成胜利条件
	//若玩家达成胜利条件 返回1
	//若玩家未达成胜利条件 返回0
	int i, j;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			if ((mine[i][j] != '1') && (show[i - 1][j - 1]) == '*')
			{
				return 0;
			}
		}
	}
	return 1;
}
