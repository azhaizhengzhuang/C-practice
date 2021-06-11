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
	int i, j;//ѭ������
	//��mine�����Ԫ��ȫ����ʼ��Ϊ0 ��show����ȫ����ʼ��Ϊ'*'
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
void print_mine(char mine[ROWS][COLS])//��ӡ������mine����
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
void print_show(char show[ROW][COL])//��ӡshow����
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

void mini_print_mine(char mine[ROWS][COLS])//��ӡmine����
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



void mine_set(char mine[ROWS][COLS], int start_x, int start_y)//һ����mine�������Χ�������mine����  ����1��ʾ�� 0��ʾ���� ����֤��һ�����׵�λ��һ��������
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

void count_mine(char mine[ROWS][COLS], char show[ROW][COL], int x, int y)//����λ�ñȷ���λ�õ������1
{
	//����mine[x][y]��Χ���׵����� �����������ص�show[x-1][y-1]�� 
	//count_mine�����Ĳ����еĿɱ�Ĳ���ֻ��x y ������¶Բ���x y��ֵ��������
	// show[x-1][y-1]��ֵΪ0����Ӧ��mine[x][y]��Χ���׵������  ����show[x-1][y-1]����Χ�˸��д���'*' �����������Ӧ��xy�ݹ�ʹ��find_mine����
	
	
	//bug���������������Խ����ɵ��쳣
	char result = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]
		-( 7 *'0');
	if ((x >= 1) && (x <= ROW) && (y >= 1) && (y <= COL))//����ʹ���˵ݹ� ���꽫�ἰ�䲻ȷ�� ֻ���ǺϷ���Χ�ڵ����� ���ܽ��ܸ�ֵ 
	{                                                    //���Ƿ������긳ֵ ����ɷǷ����� �������֮��Ľ��
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
	//��show�����е�'*'������ ��˵������Ѿ����ʤ������
	//����Ҵ��ʤ������ ����1
	//�����δ���ʤ������ ����0
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
