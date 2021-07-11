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
		printf("ͨѶ¼����������ɾ��һЩ��ϵ��\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pc->size].name);
		system("cls");
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->size].sex);
		system("cls");
		printf("����������:>");
		scanf("%d", &pc->data[pc->size].age);
		system("cls");
		printf("������绰:>");
		scanf("%s", pc->data[pc->size].tel);
		system("cls");
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->size].addr);
		system("cls");
		pc->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct CON* pc)
{
	if (!(pc->size))
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������Ҫɾ������ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		int i;
		for (i = pos; i < pc->size - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct CON* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-6s\t%-3s\t%-11s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");

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
	printf("������Ҫ�޸ĵ���ϵ��:>");
	scanf("%s", name);
	system("cls");
	int pos = FindName(pc, name);
	if (-1 == pos)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		printf("�������޸ĺ������:>");
		scanf("%s", pc->data[pos].name);
		system("cls");
		printf("�������޸ĺ���Ա�:>");
		scanf("%s", pc->data[pos].sex);
		system("cls");
		printf("�������޸ĺ������:>");
		scanf("%d", &pc->data[pos].age);
		system("cls");
		printf("�������޸ĺ�ĵ绰:>");
		scanf("%s", pc->data[pos].tel);
		system("cls");
		printf("�������޸ĺ�ĵ�ַ:>");
		scanf("%s", pc->data[pos].addr);
		system("cls");
		printf("�޸ĳɹ�\n");
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
		printf("ͨѶ¼Ϊ�գ�ȡ������\n");
	}
	else
	{
		qsort(pc->data, pc->size, sizeof(pc->data[0]), PeoInFo_compare);
		printf("����ɹ�\n");
	}
}