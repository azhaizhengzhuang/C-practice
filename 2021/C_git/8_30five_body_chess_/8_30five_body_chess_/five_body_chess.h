#define _CRT_SECURE_NO_WARNINGS 1
#pragma comment(lib,"Winmm.lib")
#pragma once

#include<graphics.h>
#include<mmsystem.h>
//1���ݷ���
//���� 0Ϊ�� 1Ϊ���� 2Ϊ����
int board[20][20];
//�غ��� ż���غ�Ϊ������ �����غ�Ϊ������
int  turn=0;

//2���̷���
//��ʼ������InitBoard���������Ʊ��� ���� �������� ��ʼ����ά���飩
void InitBoard();
//����PlayChess�����ݵ�ǰ�غ����ж��µ������ɫ Ȼ������������ ��������λ�õ��ж� ��ά����ĸ�ֵ��
void PlayChess();
//ʤ���ж�IsWin�����ݵ�ǰ�غ��µ������Ƿ�����Χ�γ������������ж�ʤ�� �Լ����Ӷ����������ж���
int Iswin();

