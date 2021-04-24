#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************************\n");
	printf("******  0.exit          1.play  *****\n");
	printf("*************************************\n");
}
//��Ϸ�㷨��ʵ��
void game()
{
	//����ʵ�����̵Ķ�λ����
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		if (Iswin(board, ROW, COL) != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		if (Iswin(board, ROW, COL) != 'C')
		{
			break;
		}
	}
	if (Iswin(board, ROW, COL) == '*')
	{
		printf("���Ӯ\n");
	}
	else if (Iswin(board, ROW, COL) == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������0��1>:");
		scanf("%d", &input);//������ȡ��ַ����
		switch (input)
		{
		    case 1:
				printf("������\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
				break;
		}
	} while (input);
}

int main()
{

	test();
	return 0;
}