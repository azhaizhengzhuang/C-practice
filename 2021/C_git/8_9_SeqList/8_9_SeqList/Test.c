#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.c.h"

void menu()
{
	printf("\n************************\n");
	printf("***      SeqList     ***\n");
	printf("************************\n");
	printf("***      0.EXIT      ***\n");
	printf("***      1.PRINT     ***\n");
	printf("***      2.INSERT    ***\n");
	printf("***      3.PUSHBACK  ***\n");
	printf("***      4.PUSHFRONT ***\n");
	printf("***      5.ERASE     ***\n");
	printf("***      6.POPFRONT  ***\n");
	printf("***      7.POPBACK   ***\n");
	printf("***      8.FIND      ***\n");
	printf("************************\n\n");
	printf("********************************************************************\n\n");
}
int main()
{
	//创建顺序表
	SeqList sl;
	//初始化线性表
	SeqListInit(&sl);
	int input,pos,num;
	do
	{
		menu();
		printf("Please select function:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			SeqListDestory(&sl);
			printf("exit\n");
			break;
		case PRINT:
			SeqListPrint(&sl);
			break;
		case INSERT:
			printf("Plase input insert position and number:>");
			scanf("%d%d", &pos,&num);
			SeqListInsert(&sl,pos,num);
			break;
		case PUSHBACK:
			printf("Plase input insert number:>");
			scanf("%d", &num);
			SeqListPushBack(&sl,num);
			break;
		case PUSHFRONT:
			printf("Plase input insert number:>");
			scanf("%d", &num);
			SeqListPushBack(&sl,num);
			break;
		case ERASE:
			printf("Plase input erase position :>");
			scanf("%d", &pos);
			SeqListErase(&sl,pos);
			break;
		case POPFRONT:
			SeqListPopFront(&sl);
			break;
		case POPBACK:
			SeqListPopFront(&sl);
			break;
		case FIND:
			printf("Plase input number which you want to find:>");
			scanf("%d", &num);
			pos=SeqListFind(&sl, num);
			if (-1 == pos)
			{
				printf("Can't find the number.\n");
			}
			else
			{
				printf("The position of number is %d\n", pos);
			}
			break;
		default:
			printf("Wrong selection\n");
			break;
		}
	} while (input);
	SeqListDestory(&sl);
	return 0;
}