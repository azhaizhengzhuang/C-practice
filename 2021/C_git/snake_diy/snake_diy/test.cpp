#define _CRT_SECURE_NO_WARNINGS 1
#include"snake.h"

int main()
{
	Bgm();
	srand((unsigned int)time(NULL));
	HWND hwnd=initgraph(640, 480);
	setbkcolor(WHITE);
	cleardevice();
	Snake snake;
	Food food;
	InitFood(&food);
	InitSnake(&snake);
	BeginBatchDraw();
	while (1)
	{
		cleardevice();
		DrawSnake(&snake);
		BuyFood(&food, &snake);
		PrintScore(&food);
		Move(&snake);
		if (IsDie(&snake, hwnd))
		{
			break;
		}
		EndBatchDraw();
		IsEaten(&food, &snake);
		while (kbhit())
		{
			Control(&snake);
		}
		Sleep(50);
	}
	closegraph();
	return 0;
}

