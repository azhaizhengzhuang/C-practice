#define _CRT_SECURE_NO_WARNINGS 1
#pragma comment(lib,"Winmm.lib")
#pragma once

#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>
#include<conio.h>
#include<math.h>
//1数据分析
//棋盘 0为空 1为黑棋 2为白旗
extern int aboard[20][20];
//回合数 偶数回合为黑棋下 奇数回合为白棋下
extern int  turn;

//2过程分析
//初始化棋盘InitBoard（包括绘制背景 音乐 绘制棋盘 初始化二维数组和回合数）
void InitBoard();
//下棋PlayChess（根据当前回合数判定下的棋的颜色 然后进行下棋操作 包括下棋位置的判定 二维数组的赋值）
void PlayChess();
//提示走的一方
void PrintTurn();
//胜负判定IsWin（根据当前回合下的棋子是否与周围形成五子连珠来判定胜负 以及附加对棋盘满的判定）
int IsWin(int i,int j);

