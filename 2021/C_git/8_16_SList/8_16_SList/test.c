#include"Slist.h"

void func_menu()
{
	printf("************************************\n");
	printf("********         SLIST         *****\n");
	printf("************************************\n");
	printf("********        0.Exit          ****\n");
	printf("********        1.PushBack      ****\n");
	printf("********        2.PushFront     ****\n");
	printf("********        3.PopBack       ****\n");
	printf("********        4.PopFront      ****\n");
	printf("********        5.Find          ****\n");
	printf("********        6.Print         ****\n");
	printf("************************************\n");
}
void find_menu()
{
	printf("************************************\n");
	printf("********         FUNCTION      *****\n");
	printf("************************************\n");
	printf("********        0.Cancel        ****\n");
	printf("********        1.Insert        ****\n");
	printf("********        2.Erase         ****\n");
	printf("************************************\n");
}
int main()
{
	//定义头结点的地址
	SListNode* phead = NULL;
	int input = 0;
	int input1 = 0;
	int data = 0;
	do
	{
		func_menu();
		printf("Please select function:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("exit\n");
			break;
		case PUSHBACK:
			printf("Please input data,and end of -1:>");
			while (1)
			{
				scanf("%d", &data);
				if (data != -1)
				{
					SListPushBack(&phead, data);
				}
				else
				{
					break;
				}
			}
			break;
		case PUSHFRONT:
			printf("Please input data:>");
			scanf("%d", &data);
			SListPushFront(&phead, data);
			break;
		case POPBACK:
			SListPopBack(&phead);
			break;
		case POPFRONT:
			SListPopFront(&phead);
			break;
		case FIND:
			printf("Please input data which you want to find:>");
			scanf("%d", &data);
			SListNode* pos = SListFind(phead, data);
			if (pos)
			{
				find_menu();
				printf("Please select function:>");
				scanf("%d", &input1);
				switch (input1)
				{
				case CANCEL:
					printf("Back to menu\n");
					break;
				case INSERT:
					printf("Please input data which you want to insert:>");
					scanf("%d", &data);
					SListInsert(&phead, pos, data);
					break;
				case ERASE:
					SListErase(&phead, pos);
					break;
				default:
					printf("Wrong selection\n");
					break;
				}
			}
				break;
		case PRINT:
			SListPrint(phead);
			break;
		default:
			printf("Wrong selection\n");
			break;
			
		}
	} while (input);
	return 0;
}

