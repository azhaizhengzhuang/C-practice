#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int win = 0;//ÿ�ҵ�һ�����ף�win++�����ҵ������׺�ʤ��,��win��Ϊȫ�ֱ���������չ�����ܵ�д��
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
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=ROW; i++)
	{
		//��ӡ�к�
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
		printf("�������Ų��׵����У�>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("�������\n\n");
				DisplayBoard(mine, row, col);
				printf("\n\n");
				win = 0;
				break;
			}
			else//2.�����ף��򷵻���Χ�׵�������show
			{
                spray(mine, show, x, y);
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		win = 0;
		printf("��ϲ�㣬���׳ɹ���\n\n");
		DisplayBoard(mine, row, col);
		printf("\n");
	}
}



void spray(char mine[ROWS][COLS], char show[ROWS][COLS], int  x, int y)//չ�����ܣ����������׵�������Χ���ף��Զ�չ����Χ�İ˸�����
//���е�ʱ�����ջ�������������Ϊ�㷨�����ϵĿ��еģ������Ͽ���ʵ��չ������
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