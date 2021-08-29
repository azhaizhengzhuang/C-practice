#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include<stdio.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Bgm()
{
	mciSendString("open ./小星星变奏曲.mp3", 0, 0, 0);
	mciSendString("play ./小星星变奏曲.mp3 repeat", 0, 0, 0);
}

void Change()
{
	HWND hnd = GetHWnd();
	SetWindowText(hnd, "HOP");
	int isok=MessageBox(hnd,"这不是？","呦",MB_OKCANCEL);
	if (isok == IDOK)
	{
		printf("所以今晚跟我们一起捞的都有谁呢？");
	}
	else if (isok==IDCANCEL)
	{ 
		printf("感情淡了呢，都不跟我去捞了");
	}
}
int main()
{

	initgraph(640, 480, EW_SHOWCONSOLE);//初始化窗口
	int x = 0, y = 0;
	//播放音乐
	Bgm();
	Change();
	//修改窗口标题和弹出对话框
	
	while (1)
	{	
		//背景设置

		BeginBatchDraw();
		setbkcolor(WHITE);//设置背景颜色
		cleardevice();//用背景颜色填充背景
		////画圆
		//setlinecolor(RED);//设置线颜色
		//setfillcolor(BLACK);//设置填充颜色
		//fillcircle(50, 50, 100);//画圆

		//图片加载

		IMAGE img;
		loadimage(&img, "./鲸落.jpg", 640, 480);
		putimage(0, 0, &img);
		//画一个文字居中显示的按钮
		fillrectangle(50, 50, 250, 100);
		settextcolor(RED);
		setbkmode(TRANSPARENT);
		char arr[] = "这是一个按钮";
		int width = 200 / 2 - textwidth(arr);
		int height = 50 / 2 - textheight(arr) / 2;

		outtextxy(width + 50, height + 50, arr);

		//控制球移动
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
					printf("上\n");
					break;
				case 's':
				case 'S':
					y += 3;
					printf("下\n");
					break;
				case 'a':
				case 'A':
					x -= 3;
					printf("左\n");
					break;
				case 'D':
				case 'd':
					x += 3;
					printf("右\n");
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
			//鼠标设置
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
							printf("手别乱点\n");
						}
						break;
					default:
						break;
					}
				}
			}
	}
	_getch();
	closegraph();//关闭窗口
	return 0;
}
