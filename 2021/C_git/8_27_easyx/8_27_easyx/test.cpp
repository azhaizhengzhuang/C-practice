#define _CRT_SECURE_NO_WARNINGS 1
#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include<stdio.h>

int main()
{

	initgraph(640, 480, EW_SHOWCONSOLE);//��ʼ������
	//��������
	setbkcolor(WHITE);//���ñ�����ɫ
	cleardevice();//�ñ�����ɫ��䱳��
	//��Բ
	setlinecolor(RED);//��������ɫ
	setfillcolor(BLACK);//���������ɫ
	fillcircle(50, 50, 100);//��Բ
	//��һ�����־�����ʾ�İ�ť
	fillrectangle(50, 50, 250, 100);
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	char arr[] = "����һ����ť";
	int width = 200 / 2 - textwidth(arr);
	int height = 50 / 2 - textheight(arr) / 2;
	outtextxy(width+50, height+50, arr);
	_getch();//��ͣ
	closegraph();//�رմ���
	

	return 0;
}
