#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include<stdio.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Bgm()
{
	mciSendString("open ./С���Ǳ�����.mp3", 0, 0, 0);
	mciSendString("play ./С���Ǳ�����.mp3 repeat", 0, 0, 0);
}

void Change()
{
	HWND hnd = GetHWnd();
	SetWindowText(hnd, "HOP");
	int isok=MessageBox(hnd,"�ⲻ�ǣ�","��",MB_OKCANCEL);
	if (isok == IDOK)
	{
		printf("���Խ��������һ���̵Ķ���˭�أ�");
	}
	else if (isok==IDCANCEL)
	{ 
		printf("���鵭���أ���������ȥ����");
	}
}
int main()
{

	initgraph(640, 480, EW_SHOWCONSOLE);//��ʼ������
	int x = 0, y = 0;
	//��������
	Bgm();
	Change();
	//�޸Ĵ��ڱ���͵����Ի���
	
	while (1)
	{	
		//��������

		BeginBatchDraw();
		setbkcolor(WHITE);//���ñ�����ɫ
		cleardevice();//�ñ�����ɫ��䱳��
		////��Բ
		//setlinecolor(RED);//��������ɫ
		//setfillcolor(BLACK);//���������ɫ
		//fillcircle(50, 50, 100);//��Բ

		//ͼƬ����

		IMAGE img;
		loadimage(&img, "./����.jpg", 640, 480);
		putimage(0, 0, &img);
		//��һ�����־�����ʾ�İ�ť
		fillrectangle(50, 50, 250, 100);
		settextcolor(RED);
		setbkmode(TRANSPARENT);
		char arr[] = "����һ����ť";
		int width = 200 / 2 - textwidth(arr);
		int height = 50 / 2 - textheight(arr) / 2;

		outtextxy(width + 50, height + 50, arr);

		//�������ƶ�
		fillcircle(x, y, 20);
		EndBatchDraw();
			if (kbhit())
			{
				char key = _getch();
				printf("%d %c\n", key, key);
				switch (key)
				{
				case 'w':
				case 'W':
					y -= 3;
					printf("��\n");
					break;
				case 's':
				case 'S':
					y += 3;
					printf("��\n");
					break;
				case 'a':
				case 'A':
					x -= 3;
					printf("��\n");
					break;
				case 'D':
				case 'd':
					x += 3;
					printf("��\n");
					break;
				default:
					break;
				}
				/*if (GetAsyncKeyState(VK_UP))
				{
					y -= 3;
				}
				if (GetAsyncKeyState(VK_DOWN))
				{
					y += 3;
				}
				if (GetAsyncKeyState(VK_LEFT))
				{
					x -= 3;
				}
				if (GetAsyncKeyState(VK_RIGHT))
				{
					x += 3;
				}*/
			}
			//�������
			if (MouseHit())
			{
				ExMessage msg;
				if (peekmessage(&msg, EM_MOUSE))
				{
					switch (msg.message)
					{
					case WM_LBUTTONUP:
						if (msg.x >= 50 && msg.x <= 250 && msg.y >= 50 && msg.y <= 100)
						{
							printf("�ֱ��ҵ�\n");
						}
						break;
					default:
						break;
					}
				}
			}
	}
	_getch();
	closegraph();//�رմ���
	return 0;
}
