#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_SIZE 300//�ߵ���󳤶�
#pragma once 
#pragma comment(lib, "Winmm.lib")
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

//1���ݷ���
//��������
typedef struct XY
{
	int x;
	int y;
}XY;
//������
typedef struct Snake
{
	XY xy[MAX_SIZE];//������������
	int size;//�ߵĳ���
	char pos;//�ߵķ���
}Snake;
//ʳ������
typedef struct Food
{
	XY xy;//ʳ������
	int flag;//1����ʳ����� 0��������
	int score;//��ʳ��õ��ķ���
}Food;
//�Է������ö��
enum pos
{
	up = 'w',
	down = 's',
	left = 'a',
	right = 'd'
};
//2���̷���
//�ߵ���Ҫ����
//��ʼ��
void InitSnake(Snake* snake);
//����
void DrawSnake(Snake* snake);
//�ƶ�
void Move(Snake* snake);
//����
void Control(Snake* snake);
//����ж�
int IsDie(Snake* snake,HWND hwnd);

//ʳ�����Ҫ����
//��ʼ��
void InitFood(Food* food);
//����ʳ��
void BuyFood(Food* food, Snake* snake);
//ʳ�������ʾ
void PrintScore(Food* food);
//��ʳ��
void IsEaten(Food* food, Snake* snake);

//��Ϸ��������ʵ��
//���ֲ���
void Bgm();
//�˵�
void menu();
