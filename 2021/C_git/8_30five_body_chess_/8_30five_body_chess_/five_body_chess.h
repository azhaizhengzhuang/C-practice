#define _CRT_SECURE_NO_WARNINGS 1
#pragma comment(lib,"Winmm.lib")
#pragma once

#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>
#include<conio.h>
#include<math.h>
//1���ݷ���
//���� 0Ϊ�� 1Ϊ���� 2Ϊ����
extern int aboard[20][20];
//�غ��� ż���غ�Ϊ������ �����غ�Ϊ������
extern int  turn;

//2���̷���
//��ʼ������InitBoard���������Ʊ��� ���� �������� ��ʼ����ά����ͻغ�����
void InitBoard();
//����PlayChess�����ݵ�ǰ�غ����ж��µ������ɫ Ȼ������������ ��������λ�õ��ж� ��ά����ĸ�ֵ��
void PlayChess();
//��ʾ�ߵ�һ��
void PrintTurn();
//ʤ���ж�IsWin�����ݵ�ǰ�غ��µ������Ƿ�����Χ�γ������������ж�ʤ�� �Լ����Ӷ����������ж���
int IsWin(int i,int j);

