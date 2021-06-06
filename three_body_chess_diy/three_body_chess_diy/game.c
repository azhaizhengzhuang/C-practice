#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("\n");
	int i = rand() % 3;
	if (i == 0)
	{
		printf("�԰�:���㿴�������������������һ������˰����Ҹо�һ�㶼����һ��ѧ��Ү����");
	}
	else if (i==1)
	{
		printf("�԰ף���������ˮƽ������һ�����ϸ���Ӯ���֡���");
	}
	else if (i == 2)
	{
		printf("�԰ף��������������������尡��Ҳ��ͼһ�֡���");
	}
	else
	{
		printf("�԰ף����Ҹо��㶼û�����ȥ������\n");
	}
	printf("\n\n***********************************\n");
	printf("          ��     ��    ��          \n");
	printf("***********************************\n");
	printf("*******         1.��        *******\n");
	printf("*******         0.��        *******\n");
	printf("***********************************\n");
}

void difficulty()
{
	printf("\n\n***********************************\n");
	printf("         ��ѡ����Ķ���            \n");
	printf("***********************************\n");
	printf("**********   1.���ɸ�      ********\n");
	printf("**********   2.��          ********\n");
	printf("**********   3.����        ********\n");
	printf("**********   4.����        ********\n");
	printf("**********   5.ķ˹        ********\n");
	printf("**********   0.������      ********\n");
	printf("***********************************\n\n");
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
			printf("�԰ף��������������궼������𣿡�\n");
			continue;
		}
		else
		{
			board[i-1][j-1] = '*';
			break;
		}

	}
}

void computer1move(char board[row][col])//��ȫ����߷�
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
void computer2move(char board[row][col])
//�������߷�
//���������ȼ���
//1��Ӯ��λ��
//2���»����λ��
//3���λ��
{
	//��Ӯ��λ��
	//1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '@') && (board[0][2] == '@'))
		|| ((board[1][0] == '@') && (board[2][0] == '@'))
		|| ((board[1][1] == '@') && (board[2][2] == '@'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '@') && (board[0][1] == '@'))
		|| ((board[1][2] == '@') && (board[2][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][0] == '@'))))
	{
		board[0][2] = '@';
		goto end;
	}
	if ((board[2][0] == ' ')
		&& (((board[2][1] == '@') && (board[2][2] == '@'))
		|| ((board[0][0] == '@') && (board[1][0] == '@'))
		|| ((board[1][1] == '@') && (board[0][2] == '@'))))
	{
		board[2][0] = '@';
		goto end;
	}
	if ((board[2][2] == ' ')
		&& (((board[2][0] == '@') && (board[2][1] == '@'))
		|| ((board[0][2] == '@') && (board[1][2] == '@'))
		|| ((board[1][1] == '@') && (board[0][0] == '@'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '@') && (board[0][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][1] == '@'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '@') && (board[1][2] == '@'))
		|| ((board[0][0] == '@') && (board[2][0] == '@'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][1] == '@') && (board[1][1] == '@'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '@') && (board[1][1] == '@'))
		|| ((board[0][2] == '@') && (board[2][2] == '@'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//���»����λ��
	//1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '*') && (board[0][2] == '*'))
		|| ((board[1][0] == '*') && (board[2][0] == '*'))
		|| ((board[1][1] == '*') && (board[2][2] == '*'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '*') && (board[0][1] == '*'))
		|| ((board[1][2] == '*') && (board[2][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][0] == '*'))))
	{
		board[0][2] = '@';
		goto end;
	}

	if ((board[2][0] == ' ')
		&& (((board[2][1] == '*') && (board[2][2] == '*'))
		|| ((board[0][0] == '*') && (board[1][0] == '*'))
		|| ((board[1][1] == '*') && (board[0][2] == '*'))))
	{
		board[2][0] = '@';
		goto end;
	}

	if ((board[2][2] == ' ')
		&& (((board[2][0] == '*') && (board[2][1] == '*'))
		|| ((board[0][2] == '*') && (board[1][2] == '*'))
		|| ((board[1][1] == '*') && (board[0][0] == '*'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '*') && (board[0][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][1] == '*'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '*') && (board[1][2] == '*'))
		|| ((board[0][0] == '*') && (board[2][0] == '*'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][1] == '*') && (board[1][1] == '*'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '*') && (board[1][1] == '*'))
		|| ((board[0][2] == '*') && (board[2][2] == '*'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//���λ��
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
end:;
}
void computer3move(char board[row][col])
//ר���߷�
//���������ȼ���
//1��Ӯ��λ��
//2���»����λ��
//3������ռ�� �߶Խ� ��ֹ�ԽǶ�ʽ
//4��Ȩ�ص������
//4.1�߽�
//4.2������
//4.3�߱�
{
	//1��Ӯ��λ��
	//1.1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '@') && (board[0][2] == '@'))
		|| ((board[1][0] == '@') && (board[2][0] == '@'))
		|| ((board[1][1] == '@') && (board[2][2] == '@'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '@') && (board[0][1] == '@'))
		|| ((board[1][2] == '@') && (board[2][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][0] == '@'))))
	{
		board[0][2] = '@';
		goto end;
	}
	if ((board[2][0] == ' ')
		&& (((board[2][1] == '@') && (board[2][2] == '@'))
		|| ((board[0][0] == '@') && (board[1][0] == '@'))
		|| ((board[1][1] == '@') && (board[0][2] == '@'))))
	{
		board[2][0] = '@';
		goto end;
	}
	if ((board[2][2] == ' ')
		&& (((board[2][0] == '@') && (board[2][1] == '@'))
		|| ((board[0][2] == '@') && (board[1][2] == '@'))
		|| ((board[1][1] == '@') && (board[0][0] == '@'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2.1�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '@') && (board[0][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][1] == '@'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '@') && (board[1][2] == '@'))
		|| ((board[0][0] == '@') && (board[2][0] == '@'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][1] == '@') && (board[1][1] == '@'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '@') && (board[1][1] == '@'))
		|| ((board[0][2] == '@') && (board[2][2] == '@'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//1.3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//2���»����λ��
	//2.1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '*') && (board[0][2] == '*'))
		|| ((board[1][0] == '*') && (board[2][0] == '*'))
		|| ((board[1][1] == '*') && (board[2][2] == '*'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '*') && (board[0][1] == '*'))
		|| ((board[1][2] == '*') && (board[2][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][0] == '*'))))
	{
		board[0][2] = '@';
		goto end;
	}

	if ((board[2][0] == ' ')
		&& (((board[2][1] == '*') && (board[2][2] == '*'))
		|| ((board[0][0] == '*') && (board[1][0] == '*'))
		|| ((board[1][1] == '*') && (board[0][2] == '*'))))
	{
		board[2][0] = '@';
		goto end;
	}

	if ((board[2][2] == ' ')
		&& (((board[2][0] == '*') && (board[2][1] == '*'))
		|| ((board[0][2] == '*') && (board[1][2] == '*'))
		|| ((board[1][1] == '*') && (board[0][0] == '*'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2.2�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '*') && (board[0][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][1] == '*'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '*') && (board[1][2] == '*'))
		|| ((board[0][0] == '*') && (board[2][0] == '*'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][1] == '*') && (board[1][1] == '*'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '*') && (board[1][1] == '*'))
		|| ((board[0][2] == '*') && (board[2][2] == '*'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//2.3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//3�߶Խ�
	if ((board[0][0] == '*') && (board[2][2] == ' '))
	{
		board[2][2] = '@';
		goto end;
	}
	if ((board[2][2] == '*') && (board[0][0] == ' '))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == '*') && (board[2][0] == ' '))
	{
		board[2][0] = '@';
		goto end;
	}
	if ((board[2][0] == '*') && (board[0][2] == ' '))
	{
		board[0][2] = '@';
		goto end;
	}
	//4���λ��
	//4.1�����
	while ((board[0][0] == ' ') || (board[2][0] == ' ') || (board[0][2] == ' ') || (board[2][2] == ' '))
	{
		int i = rand() % 4;
		if ((i == 0) && (board[0][0] == ' '))
		{
			board[0][0] = '@';
		}
		else if ((i == 1) && (board[2][0] == ' '))
		{
			board[2][0] = '@';
		}
		else if ((i == 2) && (board[0][2] == ' '))
		{
			board[0][2] = '@';
		}
		else if ((i == 3) && (board[2][2] == ' '))
		{
			board[2][2] = '@';
		}
		goto end;
	}
	//4.2����
	if (board[1][1] == ' ')
	{
		board[1][1] = '@';
		goto end;
	}
	//4.3����ǽǷ�����
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
		goto end;
	}
end:;
}


void computer4move(char board[row][col])
//���������߷�
//���������ȼ���
//1��Ӯ��λ��
//2���»����λ��
//3��Ȩ���һ��ⶨʽ�������
//3.1����(���б����ռ�� ���߽� ���߱�)
//3.2�߱�(���γ�һ���ǵ������߱�ռ�� ���Ǹ���)
//3.3�߽�
{
	//1��Ӯ��λ��
	//1.1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '@') && (board[0][2] == '@'))
		|| ((board[1][0] == '@') && (board[2][0] == '@'))
		|| ((board[1][1] == '@') && (board[2][2] == '@'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '@') && (board[0][1] == '@'))
		|| ((board[1][2] == '@') && (board[2][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][0] == '@'))))
	{
		board[0][2] = '@';
		goto end;
	}
	if ((board[2][0] == ' ')
		&& (((board[2][1] == '@') && (board[2][2] == '@'))
		|| ((board[0][0] == '@') && (board[1][0] == '@'))
		|| ((board[1][1] == '@') && (board[0][2] == '@'))))
	{
		board[2][0] = '@';
		goto end;
	}
	if ((board[2][2] == ' ')
		&& (((board[2][0] == '@') && (board[2][1] == '@'))
		|| ((board[0][2] == '@') && (board[1][2] == '@'))
		|| ((board[1][1] == '@') && (board[0][0] == '@'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2.1�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '@') && (board[0][2] == '@'))
		|| ((board[1][1] == '@') && (board[2][1] == '@'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '@') && (board[1][2] == '@'))
		|| ((board[0][0] == '@') && (board[2][0] == '@'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][1] == '@') && (board[1][1] == '@'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '@') && (board[1][1] == '@'))
		|| ((board[0][2] == '@') && (board[2][2] == '@'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//1.3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//2���»����λ��
	//2.1�ĸ�����
	if ((board[0][0] == ' ')
		&& (((board[0][1] == '*') && (board[0][2] == '*'))
		|| ((board[1][0] == '*') && (board[2][0] == '*'))
		|| ((board[1][1] == '*') && (board[2][2] == '*'))))
	{
		board[0][0] = '@';
		goto end;
	}
	if ((board[0][2] == ' ')
		&& (((board[0][0] == '*') && (board[0][1] == '*'))
		|| ((board[1][2] == '*') && (board[2][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][0] == '*'))))
	{
		board[0][2] = '@';
		goto end;
	}

	if ((board[2][0] == ' ')
		&& (((board[2][1] == '*') && (board[2][2] == '*'))
		|| ((board[0][0] == '*') && (board[1][0] == '*'))
		|| ((board[1][1] == '*') && (board[0][2] == '*'))))
	{
		board[2][0] = '@';
		goto end;
	}

	if ((board[2][2] == ' ')
		&& (((board[2][0] == '*') && (board[2][1] == '*'))
		|| ((board[0][2] == '*') && (board[1][2] == '*'))
		|| ((board[1][1] == '*') && (board[0][0] == '*'))))
	{
		board[2][2] = '@';
		goto end;
	}
	//2.2�ĸ��ǽ�������ĵ�λ��
	if ((board[0][1] == ' ')
		&& (((board[0][0] == '*') && (board[0][2] == '*'))
		|| ((board[1][1] == '*') && (board[2][1] == '*'))))
	{
		board[0][1] = '@';
		goto end;
	}

	if ((board[1][0] == ' ')
		&& (((board[1][1] == '*') && (board[1][2] == '*'))
		|| ((board[0][0] == '*') && (board[2][0] == '*'))))
	{
		board[1][0] = '@';
		goto end;
	}

	if ((board[2][1] == ' ')
		&& (((board[2][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][1] == '*') && (board[1][1] == '*'))))
	{
		board[2][1] = '@';
		goto end;
	}

	if ((board[1][2] == ' ')
		&& (((board[1][0] == '*') && (board[1][1] == '*'))
		|| ((board[0][2] == '*') && (board[2][2] == '*'))))
	{
		board[1][2] = '@';
		goto end;
	}
	//2.3����λ��
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}

	//3���λ��
	//3.1���У����б����ռ�� �����߽ǣ�
	if (board[1][1] == ' ')
	{
		board[1][1] = '@';
		goto end;
	}
	else if (board[1][1] == '*')
	{
		int i = rand() % 4;
		if ((i == 0) && (board[0][0] == ' '))
		{
			board[0][0] = '@';
		}
		else if ((i == 1) && (board[0][2] == ' '))
		{
			board[0][2] = '@';
		}
		else if ((i == 2) && (board[2][0] == ' '))
		{
			board[2][0] = '@';
		}
		else if ((i == 3) && (board[2][2]==' '))
		{
			board[2][2] = '@';
		}
		goto end;
	}
	//3.2��ͬһ���ǵı߱�ռ�˵���� ���������Ǹ��ǣ��߱�
	if ((board[0][0] == ' ') && (board[1][0] == '*') && (board[0][1] == '*'))
	{
		board[0][0] = '@';
		goto end;
	}
	else if ((board[0][2] == ' ') && (board[1][2] == '*') && (board[0][1] == '*'))
	{
		board[0][2] = '@';
		goto end;
	}
	else if ((board[2][0] == ' ') && (board[2][1] == '*') && (board[1][0] == '*'))
	{
		board[2][0] = '@';
		goto end;
	}
	else if ((board[2][2] == ' ') && (board[2][1] == '*') && (board[1][2] == '*'))
	{
		board[2][2] = '@';
		goto end;
	}
	while ((board[1][0] == ' ') || (board[0][1] == ' ') || (board[1][2] == ' ') || (board[2][1] == ' '))
	{
		int i = rand() % 4;
		if ((i == 0) && (board[1][0] == ' '))
		{
			board[1][0] = '@';
		}
		else if ((i == 1) && (board[0][1] == ' '))
		{
			board[0][1] = '@';
		}
		else if ((i == 2) && (board[1][2] == ' '))
		{
			board[1][2] = '@';
		}
		else if ((i == 3) && (board[2][1] == ' '))
		{
			board[2][1] = '@';
		}
		goto end;
	}

	
	//3.3�߽�
	
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
		goto end;
	}
	
end:;
}
void Jamesmove(char board[row][col])//��������� ���������Զ�����
{
	int i = rand() % 2 + 1;
	while (i)
	{
		int x = rand() % row;
		int y = rand() % col;
		//��������������������ֵ
		if (board[x][y] == ' ')
		{
			board[x][y] = '@';
			i--;
			if (isfull(board))
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
	int i = 0;
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