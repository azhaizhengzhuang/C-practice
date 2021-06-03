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
	//������Ϊһ��λ
	int i,j;
	printf(" ");
	for (i = 0; i < col; i++)//��ӡ������
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
		printf("������Ҫ�µ�����:>");
		int i, j;
		scanf("%d", &i);
		scanf("%d", &j);
		//�ж�����Ϸ���
		if (board[i-1][j-1] != ' ')
		{
			printf("����Ƿ�������������\n");
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
		//��������������������ֵ
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
//�ĸ�����ֵ 1��������'\0' 2����Ӯ����'@' 3���Ӯ����'*' 4ƽ�֡���'D'
{
	//�ȶ���ѭ������
	int i ;
	//���ж��Ƿ�����ʤ������ ���� ���ظ����ϵ��ַ�
	//����ȵ����
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])&&(board[i][0]!=' '))
		{
			return board[i][0];
		}
	}
	//����ȵ����
	for (i = 0; i < col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])&&(board[0][i]!=' '))
		{
			return board[0][i];
		}
	}
	//�Խ�����ȵ����
	if ((((board[0][0] == board[1][1]) && (board[0][0] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))) && (board[1][1] != ' '))
	{
		return board[1][1];
	}
	//����ʤ�� ���ж�������û����
	if (isfull(board))
	{
		return 'D';
	}
	//û��Ӯ��������δ�� ��Ϸ����
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