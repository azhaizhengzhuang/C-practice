#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include<stdio.h>

int main()
{

	initgraph(640, 480, EW_SHOWCONSOLE);//初始化窗口
	//背景设置
	setbkcolor(WHITE);//设置背景颜色
	cleardevice();//用背景颜色填充背景
	//画圆
	setlinecolor(RED);//设置线颜色
	setfillcolor(BLACK);//设置填充颜色
	fillcircle(50, 50, 100);//画圆
	//画一个文字居中显示的按钮
	fillrectangle(50, 50, 250, 100);
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	char arr[] = "这是一个按钮";
	int width = 200 / 2 - textwidth(arr);
	int height = 50 / 2 - textheight(arr) / 2;
	outtextxy(width+50, height+50, arr);
	_getch();//暂停
	closegraph();//关闭窗口
	

	return 0;
}
