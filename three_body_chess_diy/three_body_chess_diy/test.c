#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void three_body_chess(int d)
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
		ret = iswin(board);//�жϽ��
		if (ret != '0')
			break;
		if (d == 1)
			computer1move(board);//ɵ�ϵ�����
		else if (d == 2)
			computer2move(board);//����������
		else if (d == 3) 
			computer3move(board);//ר�ҵ���
		else if (d == 4)//
			computer4move(board);//�ھ�����
		else
			Jamesmove(board);//ķ˹����
		print_board(board);//��ӡ����
		ret = iswin(board);//�жϽ��
		if (ret != '0')
			break;
	}
	if (d == 1)
	{
		if (ret == '*')
		{
			printf("���ɸ磺�����������Ҫ�������ע��������ʵ��ϲ����ܾ��ˡ�\n\n");
		}
		else if (ret == '@')
		{
			printf("���ɸ磺�������ҵ�ѹկ���˰ɡ���\n\n");
		}
		else
		{
			printf("���ɸ磺����򵥵�����\n\n");
		}
	}
	else if (d == 2)
	{
		if (ret == '*')
		{
			printf("�㣺��ʲô���档��\n\n");
		}
		else if (ret == '@')
		{
			printf("�㣺���ٽ���������\n\n");
		}
		else
		{
			printf("�㣺�������� ƽ���ˡ���\n\n");
		}
	}
	else if (d == 3)
	{
		if (ret == '*')
		{
			printf("���������������ģ�����һ�֡���\n\n");
		}
		else if (ret == '@')
		{
			printf("������������Һ���������\n\n");
		}
		else
		{
			printf("��������Ҳ��������������˭����ƽ�֡���\n\n");
		}
	}
	else if (d == 4)
	{
		if (ret == '*')
		{
			printf("���أ������ǲ��������ˣ���\n\n");
		}
		else if (ret == '@')
		{
			printf("���أ���������sb����\n\n");
		}
		else
		{
			printf("���أ���ƽ�ֺ������ġ���\n\n");
		}
	}
	else
	{
		if (ret == '*')
		{
			printf("ķ˹�����������ģ�����һ�֡���\n\n");
		}
		else if (ret == '@')
		{
			printf("ķ˹������Ȼ�����ˣ�������Ӯ������ô���ӣ���������Կ���ɡ���\n\n");
		}
		else
		{
			printf("ķ˹����˭��Ӯ���˵ġ���\n\n");
		}
	}
}

void game()
{
	char input = 0;
	while (1)
	{
		do
		{
			menu();
			printf("��ѡ��>");
			scanf("%c", &input);
			switch (input)
			{
			case '1':
				break;
			default:
				printf("�԰ף��������ҳ���Щ�е�û�ġ���\n");
				break;
			}
			while (getchar() != '\n')
			{
				;
			}
		} while (input != '1');
		do
		{

			difficulty();
			printf("�������Ӧ�����֣�>");
			scanf("%c", &input);
			switch (input)
			{
			case '1':
				three_body_chess(1);
				break;
			case '2':
				three_body_chess(2);
				break;
			case '3':
				three_body_chess(3);
				break;
			case '4':
				three_body_chess(4);
				break;
			case '5':
				three_body_chess(5);
			default:
				printf("\n�԰ף�������������㰲�žͶ��ˡ���\n");
				break;
			}
			while (getchar()!='\n')
			{
				;
			}
		} while ((input != '1') && (input != '2') && (input != '3')&&(input!='4')&&(input!='5'));
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
}