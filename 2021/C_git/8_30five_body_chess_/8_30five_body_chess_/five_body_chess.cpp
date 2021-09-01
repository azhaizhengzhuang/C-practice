#include"five_body_chess.h"
void InitBoard()
{
	//打开窗口
	HWND hwnd=initgraph(500, 600);
	//修改窗口标题
	SetWindowTextA(hwnd, "五子棋");
	//加载图片
	loadimage(NULL, "五子棋.jpg");
	
	//背景音乐
	mciSendString("open 望江南.mp3",0,0,0);
	mciSendString("play 望江南.mp3 repeat", 0, 0, 0);
	//画棋盘
	//横线
	setlinecolor(BLACK);
	for (int i = 0; i <= 500; i+=25)
	{
		
		line(0, i, 500, i);
	}
    //纵线
	for (int i = 0; i <= 500; i += 25)
	{

		line(i, 0, i, 500);
	}
	setfillcolor(BLACK);
	//棋盘的天元
	fillcircle(250, 250, 2);
	//初始化二维数组和回合数
	aboard[20][20] = { 0 };
	turn = 1;
}

void PrintTurn()
{
	if (turn % 2)
	outtextxy(200, 550, "黑棋走");
	else
	outtextxy(200, 550, "白棋走");
}

void PlayChess()
{
	//保存鼠标消息
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		//黑棋走
		if (turn % 2&&m.uMsg==WM_LBUTTONDOWN)
		{
			setfillcolor(BLACK);
			for (int i =1 ; i < 20; i++)
			{
				for (int j = 1; j < 20; j++)
				{
					//当用户点击目标点的特定方块范围内 则认定用户要在此下棋
					if (abs(m.x - i * 25) < 12 && abs(m.y - j * 25)<12&&!aboard[i][j])
					{
						fillcircle(i * 25, j * 25, 10);
						PlaySound("棋子落下.wav", NULL, SND_FILENAME | SND_ASYNC);
						aboard[i][j] = 1;
						if (IsWin(i,j))
						{
							return;
						}
						turn++;
					}
				}
			}
			
		}
		//白棋走
		else if (m.uMsg == WM_LBUTTONDOWN)
		{
			setfillcolor(WHITE);
			for (int i = 1; i < 20; i++)
			{
				for (int j = 1; j < 20; j++)
				{
					//当用户点击目标点的特定方块范围内 则视为用户要在此目标点下棋
					if (abs(m.x - i * 25) < 12 && abs(m.y - j * 25)<12 && !aboard[i][j])
					{
						fillcircle(i * 25, j * 25, 10);
						PlaySound("棋子落下.wav", NULL, SND_FILENAME | SND_ASYNC);
						aboard[i][j] = 2;
						if (IsWin(i, j))
						{
							return;
						}
						turn++;
					}
				}
			}
		}
		PrintTurn();
	}
}

int IsWin(int i, int j)
{
	int x, y;

	//纵行判定是否五子连珠 需要判定5次
	for (x = i - 4, y = j; x <= i; x++)
	{
		if (x >= 0
			&& x < 16
			&& aboard[x][y]
			== aboard[x + 1][y]
			&& aboard[x][y]
			== aboard[x + 2][y]
			&& aboard[x][y]
			== aboard[x + 2][y]
			&& aboard[x][y]
			== aboard[x + 3][y]
			&& aboard[x][y]
			== aboard[x + 4][y]
			)
		{
			PlaySound("游戏结束.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "黑棋胜", "游戏结束", MB_OK);
			else
				MessageBox(GetHWnd(), "白棋胜", "游戏结束", MB_OK);
			return 1;
		}
	}
	//横行
	for (y = j - 4, x = i; y <= j; y++)
	{
		if (y >= 0
			&& y < 16
			&& aboard[x][y]
			== aboard[x][y + 1]
			&& aboard[x][y]
			== aboard[x][y + 2]
			&& aboard[x][y]
			== aboard[x][y + 3]
			&& aboard[x][y]
			== aboard[x][y + 4])
		{
			PlaySound("游戏结束.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "黑棋胜", "游戏结束", MB_OK);
			else
				MessageBox(GetHWnd(), "白棋胜", "游戏结束", MB_OK);
			return 1;
		}
	}
	//斜行
	for (x = i - 4, y = j + 4; x <= i; x++, y--)
	{
		if (x >= 0
			&& x < 16
			&& y >= 0
			&& y < 16
			&& aboard[x][y]
			== aboard[x + 1][y - 1]
			&& aboard[x][y]
			== aboard[x + 2][y - 2]
			&& aboard[x][y]
			== aboard[x + 3][y - 3]
			&& aboard[x][y]
			== aboard[x + 4][y - 4])
		{
			PlaySound("游戏结束.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "黑棋胜", "游戏结束", MB_OK);
			else
				MessageBox(GetHWnd(), "白棋胜", "游戏结束", MB_OK);
			return 1;
		}
	}
	for (x = i - 4, y = j - 4; x <= i; x++, y++)
	{
		if (x >= 0
			&& x < 16
			&& y >= 0
			&& y < 16
			&& aboard[x][y]
			== aboard[x + 1][y + 1]
			&& aboard[x][y]
			== aboard[x + 2][y + 2]
			&& aboard[x][y]
			== aboard[x + 3][y + 3]
			&& aboard[x][y]
			== aboard[x + 4][y + 4])
		{
			PlaySound("游戏结束.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "黑棋胜", "游戏结束", MB_OK);
			else
				MessageBox(GetHWnd(), "白棋胜", "游戏结束", MB_OK);
			return 1;
		}

		
	}
	return 0;
}