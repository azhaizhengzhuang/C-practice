#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//扫雷游戏大致思路
//1数据存放
//1.1创建show二维数组用来展示给排雷信息（数组元素有三种形式 '*'——未知  ' '——非雷   'numbers'——周围八格雷的数量）
//1.2创建mine数组用来存放雷的信息（数组元素只有两种形式 ' '——非雷  '1'——雷）
//2游戏流程
//2.1mine数组的初始化 全部非雷
//2.2玩家开始排雷
//2.3当玩家选中第一个排雷坐标后 为mine数组除玩家第一个排雷坐标外随机设雷（排除玩家第一个就是排雷位置就踩雷的情况）

//（***）2.4开始排雷
//2.4.1对排雷坐标递归使用检测雷数量的函数 （计算排雷坐标的周围八格的雷数 并把雷的数量赋值给排雷坐标 若检测雷的函数判断到周围8格中有非雷元素 则对被检测到的非雷坐标进行函数递归操作）
//2.5排雷坐标的反馈
//2.5.1若排查的坐标为无雷 在递归检测雷函数完成后 回溯到2.4
//2.5.2若排查的坐标为雷 则向玩家宣布游戏结束 并重新开始游戏
//2.5.3若所有雷均被排查 则向玩家宣布游戏胜利 并重新开始游戏


//项目总结
//递归使用要注意
//1要十分小心地设置递归的结束条件
//2防止递归出现的非法访问 绝对不能给非法地址赋值
//3可以善用断点和f5来进行复杂的调试

void play(char mine[ROWS][COLS], char show[ROW][COL])
{
	//雷阵初始化
	init(mine, show);
	printf("\n\n");
	print_show(show);//打印show数组
	//print_mine(mine);//打印mine数组
	//print_show(show);//打印show数组
	//开始扫雷
	int i;//循环变量
	for (i = 1; i;i++)//这是一个可以记录当前循环次数的死循环 
	{
		//接受玩家输入的坐标 并判断其合法性
		int x, y;
		do
		{
			printf("请输入行列进行排雷\n");
			scanf("%d%d", &x, &y);
			if ((x>ROW) || (x<1) || (y>COL) || (y<0))
			{
				printf("坐标错误 请重新输入\n");
			}
		} while ((x>ROW) || (x<1) || (y>COL) || (y < 0));
        //如果是本局第一次排雷 由于雷尚未布置 因此在第一次选择合法坐标后进行雷的布置 并保证第一个选择的坐标不是雷
		if (i == 1)
		{
			mine_set(mine, x, y);
			mini_print_mine(mine);
			count_mine(mine,show,x,y);//计算mine对应位置的周围八格的雷的数量 并体现在show中
			if (iswin(mine, show))//判断是否达成胜利条件
			{
				printf("兰特：你的妈妈的，还真的全被你找到了啊\n");
				mini_print_mine(mine);
				break;
			}
			else
			{
				print_show(show);
			}
		}
		//若不是初次排雷的情况
		else
		{
			//若踩雷 打印mine数组（无外边的mine） 并给出游戏结果
			if (mine[x][y]=='1')
			{
				printf("可恶啊，居然踩雷了！！！\n那就偷看一下雷的位置\n\n");
				mini_print_mine(mine);
				break;
			}
			else
			{
				count_mine(mine,show,x,y);//计算minn对应位置的周围八格的雷的数量 并体现在show中
				if (iswin(mine, show))//判断是否达成胜利条件
				{
					printf("兰特：你的妈妈的，还真的全被你找到了啊\n");
					mini_print_mine(mine);
					break;
				}
				else
				{
					mini_print_mine(mine);
					print_show(show);
				}
			}
			
		}
	}
	printf("\n\n");
}
void game()
{
	int input;
	//创建雷阵
	char mine[ROWS][COLS] = { 0 };
	char show[ROW][COL] = { 0 };
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			play(mine,show);
			break;
		default:
			printf("选择错误，请重新选择\n");
		}
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
}