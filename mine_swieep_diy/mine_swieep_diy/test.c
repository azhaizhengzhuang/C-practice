#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//ɨ����Ϸ����˼·
//1���ݴ��
//1.1����show��ά��������չʾ��������Ϣ������Ԫ����������ʽ '*'����δ֪  ' '��������   'numbers'������Χ�˸��׵�������
//1.2����mine������������׵���Ϣ������Ԫ��ֻ��������ʽ ' '��������  '1'�����ף�
//2��Ϸ����
//2.1mine����ĳ�ʼ�� ȫ������
//2.2��ҿ�ʼ����
//2.3�����ѡ�е�һ����������� Ϊmine�������ҵ�һ������������������ף��ų���ҵ�һ����������λ�þͲ��׵������

//��***��2.4��ʼ����
//2.4.1����������ݹ�ʹ�ü���������ĺ��� �����������������Χ�˸������ �����׵�������ֵ���������� ������׵ĺ����жϵ���Χ8�����з���Ԫ�� ��Ա���⵽�ķ���������к����ݹ������
//2.5��������ķ���
//2.5.1���Ų������Ϊ���� �ڵݹ����׺�����ɺ� ���ݵ�2.4
//2.5.2���Ų������Ϊ�� �������������Ϸ���� �����¿�ʼ��Ϸ
//2.5.3�������׾����Ų� �������������Ϸʤ�� �����¿�ʼ��Ϸ


//��Ŀ�ܽ�
//�ݹ�ʹ��Ҫע��
//1Ҫʮ��С�ĵ����õݹ�Ľ�������
//2��ֹ�ݹ���ֵķǷ����� ���Բ��ܸ��Ƿ���ַ��ֵ
//3�������öϵ��f5�����и��ӵĵ���

void play(char mine[ROWS][COLS], char show[ROW][COL])
{
	//�����ʼ��
	init(mine, show);
	printf("\n\n");
	print_show(show);//��ӡshow����
	//print_mine(mine);//��ӡmine����
	//print_show(show);//��ӡshow����
	//��ʼɨ��
	int i;//ѭ������
	for (i = 1; i;i++)//����һ�����Լ�¼��ǰѭ����������ѭ�� 
	{
		//���������������� ���ж���Ϸ���
		int x, y;
		do
		{
			printf("���������н�������\n");
			scanf("%d%d", &x, &y);
			if ((x>ROW) || (x<1) || (y>COL) || (y<0))
			{
				printf("������� ����������\n");
			}
		} while ((x>ROW) || (x<1) || (y>COL) || (y < 0));
        //����Ǳ��ֵ�һ������ ��������δ���� ����ڵ�һ��ѡ��Ϸ����������׵Ĳ��� ����֤��һ��ѡ������겻����
		if (i == 1)
		{
			mine_set(mine, x, y);
			mini_print_mine(mine);
			count_mine(mine,show,x,y);//����mine��Ӧλ�õ���Χ�˸���׵����� ��������show��
			if (iswin(mine, show))//�ж��Ƿ���ʤ������
			{
				printf("���أ��������ģ������ȫ�����ҵ��˰�\n");
				mini_print_mine(mine);
				break;
			}
			else
			{
				print_show(show);
			}
		}
		//�����ǳ������׵����
		else
		{
			//������ ��ӡmine���飨����ߵ�mine�� ��������Ϸ���
			if (mine[x][y]=='1')
			{
				printf("�ɶ񰡣���Ȼ�����ˣ�����\n�Ǿ�͵��һ���׵�λ��\n\n");
				mini_print_mine(mine);
				break;
			}
			else
			{
				count_mine(mine,show,x,y);//����minn��Ӧλ�õ���Χ�˸���׵����� ��������show��
				if (iswin(mine, show))//�ж��Ƿ���ʤ������
				{
					printf("���أ��������ģ������ȫ�����ҵ��˰�\n");
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
	//��������
	char mine[ROWS][COLS] = { 0 };
	char show[ROW][COL] = { 0 };
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
			play(mine,show);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	game();
	return 0;
}