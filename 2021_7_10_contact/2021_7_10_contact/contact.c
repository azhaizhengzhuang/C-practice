#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

static int FindName(const struct Contact* con,char name[20])//由于内部功能经常使用到查找功能 因此对查找功能进行了封装 当找到对应名字的联系人返回数组下标 找不到则返回-1
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (!(strcmp(name, con->data[i].name)))
		{
			return i;
		}
	}
	return -1;
}

void InitContact(struct Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;
}

void AddContact(struct Contact* con)//添加信息
{
	if (con->size == MAX_CON)
	{
		printf("通讯录已满 无法继续添加\n");
	}
	else
	{
		printf("请输入名字;>");
		scanf("%s", con->data[con->size].name);
		printf("请输入性别;>");
		scanf("%s", con->data[con->size].sex);
		printf("请输入年龄;>");
		scanf("%d", &(con->data[con->size].age));
		printf("请输入电话;>");
		scanf("%s", con->data[con->size].tele);
		printf("请输入地址;>");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* con)
{
	if (!(con->size))
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-12s\t%-30s\n","名字","性别","年龄","电话","地址");//打印标题行
		int i = 0;
		for (i = 0; i < con->size; i++)
		{
			printf("%-20s\t%-5s\t%-3d\t%-12s\t%-30s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].tele, con->data[i].addr);
		}

	}
}

void DelContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("未找到该联系人\n");
	}
	else
	{
		int i;
		for (i = pos; i < con->size - 1; i++)
		{
			con->data[i] = con->data[i + 1];//结构体也可以直接赋值
		}
		con->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-3s\t%-12s\t%-30s\n", "名字", "性别", "年龄", "电话", "地址");
		printf("%-20s\t%-5s\t%-3d\t%-12s\t%-30s\n", con->data[pos].name, con->data[pos].sex, con->data[pos].age, con->data[pos].tele, con->data[pos].addr);
	}
}

void ModifyContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindName(con, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字;>");
		scanf("%s", con->data[pos].name);
		printf("请输入性别;>");
		scanf("%s", con->data[pos].sex);
		printf("请输入年龄;>");
		scanf("%d", &(con->data[pos].age));
		printf("请输入电话;>");
		scanf("%s", con->data[pos].tele);
		printf("请输入地址;>");
		scanf("%s", con->data[pos].addr);
		printf("修改成功\n");
	}
}