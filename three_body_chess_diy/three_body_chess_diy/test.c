#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void three_body_chess()
{
	char board[col][row] = { 0 };
	Init_board(board);//��ʼ������
	print_board(board);//��ӡ����
	char ret;
	//��ʼ����
	while (1)
	{
		playermove(board);//�����
		print_board(board);//��ӡ����
	    ret=iswin(board);//�жϽ��
		if (ret!='0')
			break;
		computermove(board);//������
		print_board(board);//��ӡ����
		iswin(board);//�жϽ��
		if (ret!='0')
			break;
	}
	if (ret == '*')
	{
		printf("��Ӯһ��ɵ��Ҳûʲô�ý�����\n\n");
	}
	else if (ret == '@')
	{
		printf("���� ��Ҳ����\n\n");
	}
	else
	{
		printf("��ɵ�ӵ��Զ��ܴ�ƽ �������\n\n");
	}
}

void game()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			three_body_chess();
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
}