#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

static void CheckCapa(struct CON* pc)//检查通讯录容量 若已满 则增加现有最大容量 
{
	if (pc->capa == pc->size)
	{
		struct PeoInFo* ptr = realloc(pc->data, (pc->capa + ADD_CAPA)*sizeof(struct PeoInFo));
		if (!ptr)
		{
			printf("扩容失败\n");
		}
		else
		{
			pc->data = ptr;
			pc->capa += ADD_CAPA;
			printf("扩容成功\n");
		}

	}

}

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
	struct PeoInFo* ptr = malloc(DEFAULT_PEO*sizeof(struct PeoInFo));
	if (!ptr)
	{
		return;
	}
	pc->data = ptr;
	pc->size = 0;
	pc->capa = DEFAULT_PEO;
	//读取文件中的通讯录
	LoadContact(pc);
}

void LoadContact(struct CON* pc)
{
   //打开文件
	//创建临时变量 用于接受读取的值
	struct PeoInFo tmp = { 0 };
	FILE* pfr=fopen("contact.dat", "rb");
	if (!pfr)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//读取文件
	//合理利用fread的返回值
	while (fread(&tmp, sizeof(tmp), 1, pfr))
	{
		CheckCapa(pc);
		pc->data[pc->size] = tmp;
		pc->size++;
	}
	//关闭文件
	printf("通讯录加载成功\n");
	fclose(pfr);
	pfr = NULL;
}


void AddContact(struct CON* pc)
{
	CheckCapa(pc);
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

static int PeoInFo_compare(const void* e1, const void* e2)
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

void Destory(struct CON* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void SaveContact(struct CON* pc)
{
	//打开文件
	int i=0;
	FILE* fpw=fopen("contact.dat", "wb");
	if (!fpw)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写文件
	if (!pc->size)
	{
		printf("通讯录为空\n");
		return;
	}
	for (i = 0; i < pc->size; i++)
	{
		fwrite(&(pc->data[i]), sizeof(struct PeoInFo), 1, fpw);
	}

	printf("保存成功\n");
	//关闭文件
	fclose(fpw);
	fpw = NULL;
}