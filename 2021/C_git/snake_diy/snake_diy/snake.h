#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_SIZE 300//蛇的最大长度
#pragma once 
#pragma comment(lib, "Winmm.lib")
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

//1数据分析
//坐标数据
typedef struct XY
{
	int x;
	int y;
}XY;
//蛇数据
typedef struct Snake
{
	XY xy[MAX_SIZE];//各节蛇身坐标
	int size;//蛇的长度
	char pos;//蛇的方向
}Snake;
//食物数据
typedef struct Food
{
	XY xy;//食物坐标
	int flag;//1代表食物存在 0代表不存在
	int score;//吃食物得到的分数
}Food;
//对方向进行枚举
enum pos
{
	up = 'w',
	down = 's',
	left = 'a',
	right = 'd'
};
//2过程分析
//蛇的主要过程
//初始化
void InitSnake(Snake* snake);
//画蛇
void DrawSnake(Snake* snake);
//移动
void Move(Snake* snake);
//控制
void Control(Snake* snake);
//存活判断
int IsDie(Snake* snake,HWND hwnd);

//食物的主要过程
//初始化
void InitFood(Food* food);
//生成食物
void BuyFood(Food* food, Snake* snake);
//食物分数显示
void PrintScore(Food* food);
//吃食物
void IsEaten(Food* food, Snake* snake);

//游戏辅助功能实现
//音乐播放
void Bgm();
//菜单
void menu();
