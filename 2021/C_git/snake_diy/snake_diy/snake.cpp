#define _CRT_SECURE_NO_WARNINGS 1
#include"snake.h"


void InitSnake(Snake* snake)
{
	snake->pos = right;
	snake->size = 3;

	snake->xy[2].x = 0;
	snake->xy[2].y = 0;

	snake->xy[1].x = 10;
	snake->xy[1].y = 0;

	snake->xy[0].x = 20;
	snake->xy[0].y = 0;
}

void DrawSnake(Snake* snake)
{
	setlinecolor(BLACK);
	setfillcolor(GREEN);
	for (int i = 0; i < snake->size; i++)
	{
		fillrectangle(snake->xy[i].x, snake->xy[i].y, snake->xy[i].x + 10, snake->xy[i].y + 10);
	}
}

void Move(Snake* snake)
{
	for (int i = snake->size - 1; i > 0; i--)
	{
		snake->xy[i] = snake->xy[i - 1];
	}
	switch (snake->pos)
	{
	case up:
		snake->xy[0].y -= 10;
		break;
	case down:
		snake->xy[0].y += 10;
		break;
	case left:
		snake->xy[0].x -= 10;
		break;
	case right:
		snake->xy[0].x += 10;
		break;
	default:
		break;
	}
}

void Control(Snake* snake)
{
	char keydown = _getch();
	switch (keydown)
	{
	case up:
		if (snake->pos != down)
			snake->pos = up;
		break;
	case down:
		if (snake->pos != up)
			snake->pos = down;
		break;
	case left:
		if (snake->pos != right)
			snake->pos = left;
		break;
	case right:
		if (snake->pos != left)
			snake->pos = right;
		break;
	case 'p':
		while (_getch() != 'p');
		break;
	default:
		break;
	}
}

int IsDie(Snake* snake, HWND hwnd)
{
	//撞墙
	if (snake->xy[0].x == 640
		|| snake->xy[0].x < 0
		|| snake->xy[0].y < 0
		|| snake->xy[0].y == 480)
	{
		PlaySound(TEXT("蛇死亡.wav"), NULL, SND_ASYNC);
		MessageBox(hwnd, "you lose", "tips", MB_OK);
		return 1;
	}
	//自杀
	for (int i = 1; i < snake->size; i++)
	{
		if (snake->xy[0].x == snake->xy[i].x&&snake->xy[0].y == snake->xy[i].y)
		{
			PlaySound(TEXT("蛇死亡.wav"), NULL, SND_ASYNC);
			MessageBox(hwnd, "you lose", "tips", MB_OK);
			return 1;
		}
	}
	return 0;
}

void InitFood(Food* food)
{
	food->flag = 0;
	food->score = 0;
}

void BuyFood(Food* food, Snake* snake)
{
	//如果没食物 创造一个食物
	if (!food->flag)
	{
		int wrong = 0, x, y;
		do
		{
			x = rand() % 64 * 10;
			y = rand() % 48 * 10;
			//保证食物和蛇身没重叠
			for (int i = 0; i < snake->size; i++)
			{
				if (snake->xy[i].x == x&&snake->xy[i].y == y)
				{
					wrong = 1;
				}
			}
		} while (wrong);
		food->flag = 1;
		food->xy = { x, y };
	}
	//画食物
	setfillcolor(RED);
	fillrectangle(food->xy.x, food->xy.y, food->xy.x + 10, food->xy.y + 10);
}
void IsEaten(Food* food, Snake* snake)
{
	if (snake->xy[0].x == food->xy.x&&snake->xy[0].y == food->xy.y)
	{
		PlaySound(TEXT("吃食物.wav"), NULL, SND_ASYNC);
		snake->size++;
		food->flag = 0;
		food->score += 10;
	}
}

void PrintScore(Food* food)
{
	settextcolor(BLACK);
	char score[100];
	sprintf(score, "%d", food->score);
	outtextxy(560, 0, "score:");
	outtextxy(600, 0, score);
}

void Bgm()
{
	/*PlaySound(TEXT("贪吃蛇.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);*/
}