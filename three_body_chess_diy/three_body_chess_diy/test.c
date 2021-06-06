#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void three_body_chess(int d)
{
	char board[col][row] = { 0 };
	Init_board(board);//初始化棋盘
	print_board(board);//打印棋盘
	char ret;
	//开始下棋
	while (1)
	{
		playermove(board);//玩家走
		print_board(board);//打印棋盘
		ret = iswin(board);//判断结果
		if (ret != '0')
			break;
		if (d == 1)
			computer1move(board);//傻瓜电脑走
		else if (d == 2)
			computer2move(board);//正常电脑走
		else if (d == 3) 
			computer3move(board);//专家电脑
		else if (d == 4)//
			computer4move(board);//冠军电脑
		else
			Jamesmove(board);//姆斯电脑
		print_board(board);//打印棋盘
		ret = iswin(board);//判断结果
		if (ret != '0')
			break;
	}
	if (d == 1)
	{
		if (ret == '*')
		{
			printf("猩猩哥：“我输给你是要引起你的注意力，其实我喜欢你很久了”\n\n");
		}
		else if (ret == '@')
		{
			printf("猩猩哥：“来做我的压寨夫人吧。”\n\n");
		}
		else
		{
			printf("猩猩哥：“简简单单。”\n\n");
		}
	}
	else if (d == 2)
	{
		if (ret == '*')
		{
			printf("枫：“什么高玩。”\n\n");
		}
		else if (ret == '@')
		{
			printf("枫：“再接再厉。”\n\n");
		}
		else
		{
			printf("枫：“哈哈哈 平局了。”\n\n");
		}
	}
	else if (d == 3)
	{
		if (ret == '*')
		{
			printf("锅锅：“你的妈妈的，再来一局。”\n\n");
		}
		else if (ret == '@')
		{
			printf("锅锅：“输给我很正常。”\n\n");
		}
		else
		{
			printf("锅锅：“也就那样，三子棋谁来都平局。”\n\n");
		}
	}
	else if (d == 4)
	{
		if (ret == '*')
		{
			printf("兰特：“你是不是作弊了？”\n\n");
		}
		else if (ret == '@')
		{
			printf("兰特：“哈哈，sb。”\n\n");
		}
		else
		{
			printf("兰特：“平局很正常的。”\n\n");
		}
	}
	else
	{
		if (ret == '*')
		{
			printf("姆斯：“你的妈妈的，再来一局。”\n\n");
		}
		else if (ret == '@')
		{
			printf("姆斯：“虽然你输了，但是我赢了你这么多子，晚上请你吃烤鱼吧。”\n\n");
		}
		else
		{
			printf("姆斯：“谁都赢不了的。”\n\n");
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
			printf("请选择：>");
			scanf("%c", &input);
			switch (input)
			{
			case '1':
				break;
			default:
				printf("旁白：“你别跟我扯那些有的没的。”\n");
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
			printf("请输入对应的数字：>");
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
				printf("\n旁白：“反正这件事你安排就对了。”\n");
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