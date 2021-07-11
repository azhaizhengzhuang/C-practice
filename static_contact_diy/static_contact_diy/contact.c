#include "contact.h"

static  int FindName(const struct CON* pc, char name[MAX_NAME])
{
	int i;
	for (i = 0; i < pc->size; i++)
	{
		if (!(strcmp(pc->data[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}


void InitContact(struct CON* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;
}

void AddContact(struct CON* pc)
{
	if (pc->size == MAX_PEO)
	{
		printf("通讯录已满，请先删除一些联系人\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->data[pc->size].name);
		system("cls");
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->size].sex);
		system("cls");
		printf("请输入年龄:>");
		scanf("%d", &pc->data[pc->size].age);
		system("cls");
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->size].tel);
		system("cls");
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->size].addr);
		system("cls");
		pc->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct CON* pc)
{
	if (!(pc->size))
	{
		printf("通讯录为空！\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		int i;
		for (i = 0; i < pc->size; i++)
		{
			printf("%-20s\t%-6s\t%-3d\t%-11s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].sex,
				pc->data[i].age,
				pc->data[i].tel,
				pc->data[i].addr);
		}
	}
}

void DelContact(struct CON* pc)
{
	char name[MAX_NAME];
	printf("请输入要删除的联系人:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		int i;
		for (i = pos; i < pc->size - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct CON* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");

			printf("%-20s\t%-6s\t%-3d\t%-11s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].sex,
				pc->data[pos].age,
				pc->data[pos].tel,
				pc->data[pos].addr);
	}
}

void ModifyContact(struct CON* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		printf("请输入修改后的姓名:>");
		scanf("%s", pc->data[pos].name);
		system("cls");
		printf("请输入修改后的性别:>");
		scanf("%s", pc->data[pos].sex);
		system("cls");
		printf("请输入修改后的年龄:>");
		scanf("%d", &pc->data[pos].age);
		system("cls");
		printf("请输入修改后的电话:>");
		scanf("%s", pc->data[pos].tel);
		system("cls");
		printf("请输入修改后的地址:>");
		scanf("%s", pc->data[pos].addr);
		system("cls");
		printf("修改成功\n");
	}
}

static int PeoInFo_compare(const void* e1,const void* e2)
{
	return strcmp(((struct PeoInFo*)e1)->name, ((struct PeoInFo*)e2)->name);
}

void SortContact(struct CON* pc)
{
	if (!(pc->size))
	{
		printf("通讯录为空！取消排序\n");
	}
	else
	{
		qsort(pc->data, pc->size, sizeof(pc->data[0]), PeoInFo_compare);
		printf("排序成功\n");
	}
}