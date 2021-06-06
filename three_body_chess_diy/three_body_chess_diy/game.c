#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("\n");
	int i = rand() % 3;
	if (i == 0)
	{
		printf("旁白:“你看我下三子棋的样子像不像一个社会人啊。我感觉一点都不像一个学生耶。”");
	}
	else if (i==1)
	{
		printf("旁白：“就你这水平啊，我一个晚上给你赢三局。”");
	}
	else if (i == 2)
	{
		printf("旁白：“哈哈，看你玩三子棋啊，也就图一乐。”");
	}
	else
	{
		printf("旁白：“我感觉你都没有玩进去啊。”\n");
	}
	printf("\n\n***********************************\n");
	printf("          三     子    棋          \n");
	printf("***********************************\n");
	printf("*******         1.玩        *******\n");
	printf("*******         0.溜        *******\n");
	printf("***********************************\n");
}

void difficulty()
{
	printf("\n\n***********************************\n");
	printf("         请选择你的对手            \n");
	printf("***********************************\n");
	printf("**********   1.猩猩哥      ********\n");
	printf("**********   2.枫          ********\n");
	printf("**********   3.锅锅        ********\n");
	printf("**********   4.兰特        ********\n");
	printf("**********   5.姆斯        ********\n");
	printf("**********   0.想溜了      ********\n");
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
			printf("旁白：“靠背，连坐标都能输错吗？”\n");
			continue;
		}
		else
		{
			board[i-1][j-1] = '*';
			break;
		}

	}
}

void computer1move(char board[row][col])//完全随机走法
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
void computer2move(char board[row][col])
//正常人走法
//按以下优先级下
//1能赢的位置
//2不下会输的位置
//3随机位置
{
	//能赢的位置
	//1四个角落
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
	//2四个非角落非中心的位置
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
	//3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//不下会输的位置
	//1四个角落
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
	//2四个非角落非中心的位置
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
	//3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//随机位置
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
end:;
}
void computer3move(char board[row][col])
//专家走法
//按以下优先级下
//1能赢的位置
//2不下会输的位置
//3若对手占角 走对角 防止对角定式
//4有权重地随机走
//4.1走角
//4.2走中心
//4.3走边
{
	//1能赢的位置
	//1.1四个角落
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
	//2.1四个非角落非中心的位置
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
	//1.3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//2不下会输的位置
	//2.1四个角落
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
	//2.2四个非角落非中心的位置
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
	//2.3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//3走对角
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
	//4随机位置
	//4.1随机角
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
	//4.2中心
	if (board[1][1] == ' ')
	{
		board[1][1] = '@';
		goto end;
	}
	//4.3随机非角非中心
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
		goto end;
	}
end:;
}


void computer4move(char board[row][col])
//完美兰特走法
//按以下优先级下
//1能赢的位置
//2不下会输的位置
//3有权重且会检测定式地随机走
//3.1走中(若中被玩家占了 先走角 再走边)
//3.2走边(若形成一个角的两个边被占了 走那个角)
//3.3走角
{
	//1能赢的位置
	//1.1四个角落
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
	//2.1四个非角落非中心的位置
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
	//1.3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '@') && (board[2][2] == '@'))
		|| ((board[0][2] == '@') && (board[2][0] == '@'))
		|| ((board[1][0] == '@') && (board[1][2] == '@'))
		|| ((board[0][1] == '@') && (board[2][1] == '@'))))

	{
		board[1][1] = '@';
		goto end;
	}
	//2不下会输的位置
	//2.1四个角落
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
	//2.2四个非角落非中心的位置
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
	//2.3中心位置
	if ((board[1][1] == ' ')
		&& (((board[0][0] == '*') && (board[2][2] == '*'))
		|| ((board[0][2] == '*') && (board[2][0] == '*'))
		|| ((board[1][0] == '*') && (board[1][2] == '*'))
		|| ((board[0][1] == '*') && (board[2][1] == '*'))))

	{
		board[1][1] = '@';
		goto end;
	}

	//3随机位置
	//3.1走中（若中被玩家占领 优先走角）
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
	//3.2（同一个角的边被占了的情况 就优先走那个角）走边
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

	
	//3.3走角
	
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
		goto end;
	}
	
end:;
}
void Jamesmove(char board[row][col])//随机走两次 棋盘满了自动弹出
{
	int i = rand() % 2 + 1;
	while (i)
	{
		int x = rand() % row;
		int y = rand() % col;
		//利用随机数生成随机坐标值
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
//四个返回值 1继续——'\0' 2电脑赢——'@' 3玩家赢——'*' 4平局——'D'
{
	//先定义循环变量
	int i = 0;
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