#include"five_body_chess.h"
void InitBoard()
{
	//�򿪴���
	HWND hwnd=initgraph(500, 600);
	//�޸Ĵ��ڱ���
	SetWindowTextA(hwnd, "������");
	//����ͼƬ
	loadimage(NULL, "������.jpg");
	
	//��������
	mciSendString("open ������.mp3",0,0,0);
	mciSendString("play ������.mp3 repeat", 0, 0, 0);
	//������
	//����
	setlinecolor(BLACK);
	for (int i = 0; i <= 500; i+=25)
	{
		
		line(0, i, 500, i);
	}
    //����
	for (int i = 0; i <= 500; i += 25)
	{

		line(i, 0, i, 500);
	}
	setfillcolor(BLACK);
	//���̵���Ԫ
	fillcircle(250, 250, 2);
	//��ʼ����ά����ͻغ���
	aboard[20][20] = { 0 };
	turn = 1;
}

void PrintTurn()
{
	if (turn % 2)
	outtextxy(200, 550, "������");
	else
	outtextxy(200, 550, "������");
}

void PlayChess()
{
	//���������Ϣ
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		//������
		if (turn % 2&&m.uMsg==WM_LBUTTONDOWN)
		{
			setfillcolor(BLACK);
			for (int i =1 ; i < 20; i++)
			{
				for (int j = 1; j < 20; j++)
				{
					//���û����Ŀ�����ض����鷶Χ�� ���϶��û�Ҫ�ڴ�����
					if (abs(m.x - i * 25) < 12 && abs(m.y - j * 25)<12&&!aboard[i][j])
					{
						fillcircle(i * 25, j * 25, 10);
						PlaySound("��������.wav", NULL, SND_FILENAME | SND_ASYNC);
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
		//������
		else if (m.uMsg == WM_LBUTTONDOWN)
		{
			setfillcolor(WHITE);
			for (int i = 1; i < 20; i++)
			{
				for (int j = 1; j < 20; j++)
				{
					//���û����Ŀ�����ض����鷶Χ�� ����Ϊ�û�Ҫ�ڴ�Ŀ�������
					if (abs(m.x - i * 25) < 12 && abs(m.y - j * 25)<12 && !aboard[i][j])
					{
						fillcircle(i * 25, j * 25, 10);
						PlaySound("��������.wav", NULL, SND_FILENAME | SND_ASYNC);
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

	//�����ж��Ƿ��������� ��Ҫ�ж�5��
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
			PlaySound("��Ϸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			else
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			return 1;
		}
	}
	//����
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
			PlaySound("��Ϸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			else
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			return 1;
		}
	}
	//б��
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
			PlaySound("��Ϸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			else
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
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
			PlaySound("��Ϸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (turn % 2)
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			else
				MessageBox(GetHWnd(), "����ʤ", "��Ϸ����", MB_OK);
			return 1;
		}

		
	}
	return 0;
}