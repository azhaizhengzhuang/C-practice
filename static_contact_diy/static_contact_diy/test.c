#include "contact.h"

//静态通讯录 在程序被关闭之后通讯录将被清空
//基本功能：可以存放最多1000人的相关信息 包括姓名 性别 年龄 电话 住址
//延伸功能1.增 2.删 3.查 4.改 5.打印 6.排序 

void menu()
{
	printf("**************************************\n");
	printf("***   1.add               2.del    ***\n");
	printf("***   3.search            4.modify ***\n");
	printf("***   5.show              6.sort   ***\n");
	printf("**************************************\n");
}

int main()
{
	struct CON con;//创建通讯录
	InitContact(&con);//初始化通讯录 把联系人的所有信息设为0 size设为0
	int input;
	do//功能选择
	{
		menu();
		printf("请选择功能;>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case EXIT://退出
			printf("退出通讯录\n");
			break;
		case ADD://添加联系人
			AddContact(&con);
			break;
		case DEL://删除指定联系人
			DelContact(&con);
			break;
		case SEARCH://查找指定联系人
			SearchContact(&con);
			break;
		case MODIFY://修改指定联系人
			ModifyContact(&con);
			break;
		case SHOW://打印通讯录
			ShowContact(&con);
			break;
		case SORT://对通讯录进行排序
			SortContact(&con);
			break;
		default:
			printf("选择错误 请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}